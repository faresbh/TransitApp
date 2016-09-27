//
//  RouteCellViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/27/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit

class RouteTableViewCell: UITableViewCell {


    @IBOutlet weak var priceRoute: UILabel!
    @IBOutlet weak var providerRoute: UILabel!
    @IBOutlet weak var typeRoute: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }
    
    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
        
        // Configure the view for the selected state
    }

}
