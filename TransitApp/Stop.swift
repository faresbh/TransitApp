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
    
    let location:CLLocationCoordinate2D?
    let datetime:NSDate?
    private let name:String?
    
    init(dataDictionary:[String: AnyObject]){
        
        let latitude = dataDictionary["lat"] as? CLLocationDegrees
        let longitude = dataDictionary["lng"] as? CLLocationDegrees
        
        self.location = CLLocationCoordinate2D(latitude: latitude!, longitude: longitude!)
        
        let timeString = dataDictionary["datetime"] as? String
        self.datetime = timeString!.toDateTime()
        
        let stopString = dataDictionary["name"] as? String
        self.name = stopString
    }
}

