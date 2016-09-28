//
//  DetailSegmentTableViewController.swift
//  TransitApp
//
//  Created by medialis.net on 28/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit
import GoogleMaps

class DetailSegmentTableViewController: UITableViewController {

    @IBOutlet weak var mapView: GMSMapView!
    var currentRoute : Route!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Uncomment the following line to preserve selection between presentations
        // self.clearsSelectionOnViewWillAppear = false

        // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
        // self.navigationItem.rightBarButtonItem = self.editButtonItem()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        // #warning Incomplete implementation, return the number of sections
        return 0
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        // #warning Incomplete implementation, return the number of rows
        return 0
    }

//    func loadMapInfo(){
//        self.mapView.camera = GMSCameraPosition.cameraWithLatitude(self.route!.getStartPoint()!.latitude, longitude: self.route!.getStartPoint()!.longitude, zoom: 12)
//        
//        // Put markers on map
//        
//        self.placePin("Origin", position: self.route!.getStartPoint()!, color: UIColor.grayColor())
//        self.placePin("Destination", position: self.route!.getDestinationPoint()!, color: UIColor.blueColor())
//        
//       
//        for segment in route!.segments{
//            
//            //place a pin if is a "move" segment
//            if segment.isMoveSegment(){
//                self.placePin(segment.name ?? segment.travelMode.rawValue.capitalizedString, position: segment.getStartPoint()!, color: UIColor.redColor())
//            }
//            
//            if let polylineString = segment.polyline {
//                let polylinePath = GMSPath(fromEncodedPath: polylineString)
//                let polyline = GMSPolyline(path: polylinePath)
//                polyline.map = mapView
//                polyline.strokeColor = UIColor.blueColor()
//            }
//        }
//    }
//
//
}
