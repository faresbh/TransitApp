//
//  LocationManager.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/26/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation
import CoreLocation

class LocationManager: NSObject {
    
    static let sharedInstance = LocationManager()
    private override init() {}
    
    //MockData
    func getCurrentUserLocation()->CLLocationCoordinate2D{
        return CLLocationCoordinate2D(latitude: Constants.destLatitude, longitude: Constants.destLongitude )
    }
}
