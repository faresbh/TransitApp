//
//  Route.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation

class Route {
    
    var type = String() {
        didSet {
            changeTypeName()
        }
    }
    var provider : String!

    var segments : [Segment]? {
        didSet {
            getRouteDuration()
            getDurationDetail()
            getStartLocationForRoute()
            getEndLocationForRoute()
        }
    }

    var properties : String!
    
    var price : Price! {
        didSet{
            getPriceForRoute()
        }
    }

  
}

