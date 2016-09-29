//
//  StopTableViewCell.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 29/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit

class StopTableViewCell: UITableViewCell {

    @IBOutlet weak var dateStop: UILabel!
    @IBOutlet weak var nameStop: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
