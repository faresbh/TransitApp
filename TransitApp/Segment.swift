//
//  Stop.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation
import UIKit
import CoreLocation
import SVGKit

public class Segment: NSObject {
    
    
    public enum Mode:String{
        case walking, subway, bus, driving, cycling, setup, parking, change
    }
    
    let name:String?
    let numStops:Int
    let travelMode:Mode
    let segmentDescription: String?
    let iconUrl:String
    let polyline:String?
    var svgImage : UIImage?
    let stops:[Stop]!
  
    init(dataDictionary:[String: AnyObject]){
        self.name = dataDictionary["name"] as? String
        self.numStops = dataDictionary["num_stops"] as! Int
        
        let modeString = dataDictionary["travel_mode"] as! String
        self.travelMode = Mode(rawValue: modeString)!
        self.segmentDescription = dataDictionary["description"] as? String
        self.iconUrl = dataDictionary["icon_url"] as! String
        self.polyline = dataDictionary["polyline"] as? String
        
        self.svgImage = UIImage(named: "icon")
        
        stops = [Stop]()
        
        if let stopDictionary = dataDictionary["stops"]{
            for stop in stopDictionary.allObjects{
                let stopPoint = Stop(dataDictionary: stop as! [String : AnyObject])
                self.stops.append(stopPoint)    
            }
        }
    }
    
    func getSvgImage() -> UIImage
    {
        
        self.svgImage = UIImage(named: "icon")
        if Reachability.isConnectedToNetwork()
        {
            
            let imageUrl = NSURL(string: (self.iconUrl))
            self.svgImage = SVGKImage(contentsOf: imageUrl as URL!).uiImage

        }
        
        return self.svgImage!
       
    }
    
    
    func getStartPoint()->CLLocationCoordinate2D?{
        return self.stops.first?.location
    }
    
    func getDestinationPoint()->CLLocationCoordinate2D?{
        return self.stops.last?.location
    }
    
}
