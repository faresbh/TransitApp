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
      
        let dateFormatter = DateFormatter()
        dateFormatter.dateFormat = "yyyy'-'MM'-'dd'T'HH':'mm':'ssZZZZZ"
        let date = dateFormatter.date(from: self)
        
        return date as NSDate?
    }
    

}


extension UITableViewController {
    
    // used to add "no data" label when array is empty
    func CGRectMake(_ x: CGFloat, _ y: CGFloat, _ width: CGFloat, _ height: CGFloat) -> CGRect {
        return CGRect(x: x, y: y, width: width, height: height)
    }
    
}
