//
//  ResultTableViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 27/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit


class ResultTableViewController: UITableViewController {

    
      var routes:[Route]?
      var providers:[ProviderAttribute]?
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        routes = Results.routes
        providers = Results.providers
        self.navigationItem.title="Routes found"
    }


   override func numberOfSections(in tableView: UITableView) -> Int {
    
    //showing no data label when empty routes
    var numOfSections: Int = 0
    if (routes?.count)! > 0
    {
        tableView.separatorStyle = .singleLine
        print(routes?.count)
        numOfSections                = (routes?.count)!
        tableView.backgroundView = nil
    }
    else
    {
        let noDataLabel: UILabel     = UILabel(frame: CGRectMake(0, 0, tableView.bounds.size.width, tableView.bounds.size.height))
        noDataLabel.text             = "No data available"
        noDataLabel.textColor        = UIColor.black
        noDataLabel.textAlignment    = .center
        tableView.backgroundView = noDataLabel
        tableView.separatorStyle = .none
    }
    return numOfSections
    
    }
    
 
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return (routes![section].segments.count)
    }

    override func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        
        // retrieve the route cell
        let cell:RouteTableViewCell = self.tableView.dequeueReusableCell(withIdentifier: "cellRoute") as! RouteTableViewCell
        
        
        cell.typeRoute.text = routes?[section].type.getName()
        cell.providerRoute.text = routes?[section].provider
        cell.priceRoute.text = routes?[section].getPrice()
        
        return cell

    }
    
    override func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 61
    }
 
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        // retrieve the segment cell
        let cell:SegmentsTableViewCell = self.tableView.dequeueReusableCell(withIdentifier: "cellSegment") as! SegmentsTableViewCell
        
        let segment = routes?[indexPath.section].segments[indexPath.row]
        cell.nameSegment.text = segment?.name
        cell.descriptionSegment.text = segment?.segmentDescription
        cell.travelModeSegment.text = segment?.travelMode.rawValue
        cell.numStopsSegment.text = String(describing: segment?.numStops)
        
        let imageUrl = NSURL(string: (segment?.iconUrl)!)
      
    
        
        //Creating a page request which will load our URL (Which points to our path)
        let request: NSURLRequest = NSURLRequest(url: imageUrl as! URL)
        cell.imageWebViewSegment.loadRequest(request as URLRequest)
        

        
        return cell
    }



}
