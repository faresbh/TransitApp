//
//  Extensions.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/26/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit


extension String {
    func toDateTime() -> NSDate? {
        //2015-04-17T13:30:00+02:00
        let dateFormatter = DateFormatter()
        dateFormatter.dateFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ssZZZZZ"
        let date = dateFormatter.date(from: self)
        
        return date as NSDate?
    }

}
