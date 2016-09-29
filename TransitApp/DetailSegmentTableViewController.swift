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
    var currentSegment : Segment!
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        self.configureMap()

    }

    override func didReceiveMemoryWarning() {
        
        super.didReceiveMemoryWarning()
        
    }
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        // retrieve the segment cell
        let cell:StopTableViewCell = self.tableView.dequeueReusableCell(withIdentifier: "cellStop") as! StopTableViewCell
        let stop = currentSegment.stops[indexPath.row]
        
        cell.nameStop.text = stop.name
        
        let formatter = DateFormatter()
        formatter.dateFormat = "mm.dd.yyy hh:mm a"
        
        let stopDateTime = formatter.string(from: stop.datetime as Date)

        cell.dateStop.text = stopDateTime

        
        return cell
    }


    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        
        return self.currentSegment.stops.count
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        
        //showing no data label when empty stops
        var numOfSections: Int = 0
        if (currentSegment.stops.count) > 0
        {
            tableView.separatorStyle = .singleLine
            numOfSections        = 1
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
    

    
   
    private func addMarker(name:String,position:CLLocationCoordinate2D, color:UIColor){
        
        let marker = GMSMarker()
        marker.icon = GMSMarker.markerImage(with: color)
        marker.position = position
        marker.title = name
        marker.map = self.mapView
    }
    
    
    
    func configureMap(){
        self.mapView.camera = GMSCameraPosition.camera(withLatitude: self.currentSegment!.getStartPoint()!.latitude, longitude: self.currentSegment!.getStartPoint()!.longitude, zoom: 12)
        
        // Add markers on map
        self.addMarker(name: "Origin", position: self.currentSegment!.getStartPoint()!, color: UIColor.blue)
        self.addMarker(name: "Destination", position: self.currentSegment!.getDestinationPoint()!, color: UIColor.blue)
        
       

            
            if let polylineString = currentSegment.polyline {
                let polylinePath = GMSPath(fromEncodedPath: polylineString)
                let polyline = GMSPolyline(path: polylinePath)
                polyline.map = mapView
                polyline.strokeColor = UIColor.blue
            }
        
    }

}
