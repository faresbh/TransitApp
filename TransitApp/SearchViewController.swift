//
//  SearchViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/25/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit
import GoogleMaps
import CoreLocation

class SearchViewController: UIViewController , CLLocationManagerDelegate {

    
    let locationManager : CLLocationManager! = CLLocationManager()
    
    @IBOutlet weak var mapView: GMSMapView!

    @IBOutlet weak var destinationTextField: UITextField!
    @IBOutlet weak var departTextField: UITextField!
    @IBOutlet weak var dateTravel: UITextField!
    
    @IBOutlet weak var pinLocationImage: UIImageView!
    override func viewDidLoad() {
        
        super.viewDidLoad()

        let originMarker = GMSMarker()
        originMarker.icon = GMSMarker.markerImage(with: UIColor.blue)
       // originMarker.position = LocationManager.sharedInstance.getCurrentUserLocation()
        originMarker.title = "Destination"
        originMarker.map = self.mapView
    
        pinLocationImage.isUserInteractionEnabled = true
        pinLocationImage.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(SearchViewController.getUserLocation)))

        
    }

    func getUserLocation()
    {

        // set location manager delegate
        self.locationManager.delegate = self
        
        // set location accuracy
        self.locationManager.desiredAccuracy = kCLLocationAccuracyBest
        
        // request location access permision from user.
        self.locationManager.requestWhenInUseAuthorization()

        
        if pinLocationImage.image == UIImage(named: "location-pin")
        {
            pinLocationImage.image = UIImage(named: "location-pin-blue")
         
            self.mapView.isMyLocationEnabled = true
                   }
        else
        {
             self.mapView.isMyLocationEnabled = false
              pinLocationImage.image = UIImage(named: "pin-location")
        }
        
    }
    
    @IBAction func navigateToResults(_ sender: AnyObject) {
        
        
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
