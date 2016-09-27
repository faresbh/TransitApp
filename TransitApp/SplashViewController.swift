//
//  ViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/25/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit

import Polyline

class SplashViewController: UIViewController {
    
    
  //  var spinnerView : MMMaterialDesignSpinner!
    var greenBarColor:UIColor!
    var window: UIWindow?
    

    
    override func viewDidLoad() {
        super.viewDidLoad()
        
//        //setting the spinner
//        let screenSize: CGRect = UIScreen.main.bounds
//        
//        spinnerView = MMMaterialDesignSpinner(frame: CGRect(x:self.view.center.x-20,y:screenSize.height-100
//            , width: 40,height: 40))
//        spinnerView.lineWidth = 3
//        
//        spinnerView.tintColor = UIColor.gray
//        // Add it as a subview
//        self.view.addSubview(spinnerView)
//        
//        // animate the spinner
//        spinnerView.startAnimating()
        
        
     
        
        
        DataParser.sharedInstance.getRoutes(origin: "", destination: "", atTime: nil) {  [weak self] (routes, providers, error) in
            
            if error != nil{
                print(error)
                return
            }
            
            Results.routes = routes
            Results.providers = providers
            
            DispatchQueue.main.async {

                self?.performSegue(withIdentifier: "from_splash_to_search", sender: nil)
                //self?.spinnerView.stopAnimating()
            }
          
        }
        
        
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func navigateToPopularMovies()
    {
      
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        
       // print(routes)

    }
    
}



