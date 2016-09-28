//
//  SegmentsTableViewCell.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/27/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit

class SegmentsTableViewCell: UITableViewCell {

    @IBOutlet weak var numStopsSegment: UILabel!
    @IBOutlet weak var travelModeSegment: UILabel!
    @IBOutlet weak var descriptionSegment: UILabel!
 
    @IBOutlet weak var imageSegment: UIImageView!

    @IBOutlet weak var nameSegment: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
