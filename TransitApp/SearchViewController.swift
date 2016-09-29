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
import PopupContainer

class SearchViewController: UIViewController , CLLocationManagerDelegate , UITextFieldDelegate {
    
    
    let locationManager : CLLocationManager! = CLLocationManager()
    
    @IBOutlet weak var mapView: GMSMapView!
    @IBOutlet weak var destinationTextField: UITextField!
    @IBOutlet weak var departTextField: UITextField!
    @IBOutlet weak var dateTimeTravel: UILabel!
    
    
    var popupDateTimePicker: PopupContainer?
    var dateTimePickerView : DialogDateTimePickerView!
    
    var departureLatLng : CLLocationCoordinate2D!
    var destinationLatLng : CLLocationCoordinate2D!
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        
        let originMarker = GMSMarker()
        originMarker.icon = GMSMarker.markerImage(with: UIColor.blue)
        
        originMarker.title = "Destination"
        originMarker.map = self.mapView
        
        
        destinationTextField.delegate = self
        departTextField.delegate = self
        
        dateTimeTravel.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(SearchViewController.openDatetimePickerDialog)))
        self.view.addGestureRecognizer(UITapGestureRecognizer(target: self , action: #selector(SearchViewController.hideKeyboard)))
        
        //hard coded
        destinationTextField.text = "Leipziger Platz 7, 10117 Berlin, Deutschland"
        departTextField.text = "Torstraße 103, 10119 Berlin, Deutschland"
        
        departTextField.isUserInteractionEnabled = false
        destinationTextField.isUserInteractionEnabled = false
        
        //mapView.settings.myLocationButton = true
        
        self.drawIterinaire(addressDep: departTextField.text!, addressDes: destinationTextField.text!)
        
        
    }
    
    
    
    func openDatetimePickerDialog()
    {
        
        dateTimePickerView = Bundle.main.loadNibNamed("DialogDateTimePicker", owner: nil, options: nil)?[0] as! DialogDateTimePickerView
        self.popupDateTimePicker = PopupContainer.generatePopupWithView(dateTimePickerView )
        let today = NSDate()
        dateTimePickerView.dateTimePicker.date = today as Date
        dateTimePickerView.dateTimePicker.addTarget(self, action: #selector(SearchViewController.dateTimePickerChanged), for: UIControlEvents.valueChanged)
        self.popupDateTimePicker?.show()
        
    }
    
    func dateTimePickerChanged()
    {
        let formatter = DateFormatter()
        formatter.dateFormat = "mm.dd.yyy hh:mm a"
        
        let choosenDateTime = formatter.string(from: dateTimePickerView.dateTimePicker.date)
        
        dateTimeTravel.text =  choosenDateTime
        
    }
    
    @IBAction func navigateToResults(sender: AnyObject) {
        
        self.performSegue(withIdentifier: "from_search_to_results", sender: nil)
        
    }
    
    func hideKeyboard(){
        
        
        self.view.endEditing(true)
        
    }
    
    
    private func drawPolyline(departure : CLLocationCoordinate2D, destination: CLLocationCoordinate2D)
    {
        mapView.clear()
        
        let path = GMSMutablePath()
        path.add(departure)
        path.add(destination)
        
        let polyline = GMSPolyline(path: path)
        polyline.strokeWidth = 2
        polyline.map = mapView
        
        self.centerMapCamera(departure: departure, destination: destination, offset: true)
        
        let markerDep = GMSMarker()
        markerDep.position = self.departureLatLng
        markerDep.title = "Departure"
        markerDep.map = self.mapView
        
        
        let markerDes = GMSMarker()
        markerDes.position = self.destinationLatLng
        markerDes.title = "Destination"
        markerDes.map = self.mapView
        
    }
    
    
    func drawIterinaire(addressDep : String , addressDes : String )
    {
        
        let geocoder = CLGeocoder()
        
        geocoder.geocodeAddressString(addressDep, completionHandler: {(placemarks, error) -> Void in
            if((error) != nil){
                print("Error", error)
            }
            if let placemark = placemarks?.first {
                let coordinates:CLLocationCoordinate2D = placemark.location!.coordinate
                self.departureLatLng = coordinates
                
                
                geocoder.geocodeAddressString(addressDes, completionHandler: {(placemarks, error) -> Void in
                    if((error) != nil){
                        print("Error", error)
                    }
                    if let placemark = placemarks?.first {
                        let coordinates:CLLocationCoordinate2D = placemark.location!.coordinate
                        self.destinationLatLng = coordinates
                        
                        
                        self.drawPolyline(departure: self.departureLatLng, destination: self.destinationLatLng)
                        
                        
                    }
                })
                
                
            }
        })
        
        
    }
    
    
    func centerMapCamera(departure: CLLocationCoordinate2D?, destination: CLLocationCoordinate2D?, offset:Bool)
    {
        var topMargin : CGFloat = 100
        
        if offset {
            topMargin = 140
        }
        guard let depCoordinates = departure else { return }
        guard let arrCoordinates = destination else { return }
        let bounds = GMSCoordinateBounds(coordinate: depCoordinates, coordinate: arrCoordinates)
        let camera = mapView.camera(for: bounds, insets: UIEdgeInsetsMake(topMargin, 30, 30, 30))
        
        self.mapView.animate(to: camera!)
    }
    
    
    
}
