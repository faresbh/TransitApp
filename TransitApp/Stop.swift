//
//  Stop.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation
import CoreLocation

public class Stop: NSObject {
    
    var location:CLLocationCoordinate2D!
    var datetime:NSDate!
    var name:String!
    
    init(dataDictionary:[String: AnyObject]){
        
        let latitude = dataDictionary["lat"] as? CLLocationDegrees
        let longitude = dataDictionary["lng"] as? CLLocationDegrees
        
        self.location = CLLocationCoordinate2D(latitude: latitude!, longitude: longitude!)
        
        let timeString = dataDictionary["datetime"] as? String
        self.datetime = timeString!.toDateTime()
        
        let stopString = dataDictionary["name"] as? String
        self.name = stopString
    }
    
    override init()
    {
        
    }
}

