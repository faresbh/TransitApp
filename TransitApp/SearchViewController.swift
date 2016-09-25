//
//  SearchViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/25/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit
import GoogleMaps

class SearchViewController: UIViewController {

    @IBOutlet weak var mapView: GMSMapView!
    
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        self.mapView.camera = GMSCameraPosition.camera(withLatitude: LocationManager.sharedInstance.getCurrentUserLocation().latitude, longitude: LocationManager.sharedInstance.getCurrentUserLocation().longitude, zoom: 12)
        
        
        let originMarker = GMSMarker()
        originMarker.icon = GMSMarker.markerImage(with: UIColor.blue)
        originMarker.position = LocationManager.sharedInstance.getCurrentUserLocation()
        originMarker.title = "My Location"
        originMarker.map = self.mapView
        
        
        let destinationMarker = GMSMarker()
        destinationMarker.icon = GMSMarker.markerImage(with: UIColor.red)
        destinationMarker.position = CLLocationCoordinate2D(latitude: Constants.destLatitude, longitude: Constants.destLongitude)
        destinationMarker.title = "Destination"
        destinationMarker.map = self.mapView
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
