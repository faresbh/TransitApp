//
//  Stop.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation


class Segement {
    
    var name : String!
    var num_stops : Int!
    var stops : [Stop]!
    var travel_mode : String!
    var description : String!
    var color : String!
    var icon_url : String!
    var polyline : String!
    
    
    
    init(name: String, num_stops: Int, travel_mode: String, description: color, icon_url : String , polyline : String )
        
    {
        self.name=name
        self.num_stops=num_stops
        self.travel_mode = travel_mode
        self.description=description
        self.color=color
        self.icon_url=icon_url
        self.polyline=polyline
        
    }
    
    init()
    {
        
        
    }
    
}
