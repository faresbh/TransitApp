//
//  ViewController.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 9/25/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import UIKit
import MMMaterialDesignSpinner

class SplashViewController: UIViewController {
    
    
    var spinnerView : MMMaterialDesignSpinner!
    var greenBarColor:UIColor!
    var window: UIWindow?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //setting the spinner
        let screenSize: CGRect = UIScreen.main.bounds
        
        spinnerView = MMMaterialDesignSpinner(frame: CGRect(x:self.view.center.x-20,y:screenSize.height-100
            , width: 40,height: 40))
        spinnerView.lineWidth = 3
        
        spinnerView.tintColor = UIColor.gray
        // Add it as a subview
        self.view.addSubview(spinnerView)
        
        // animate the spinner
        spinnerView.startAnimating()
        
        
        // timer for 2 seconde and then navigate to popular movies screen
        Timer.scheduledTimer(
            timeInterval: 2, target: self, selector: #selector(SplashViewController.navigateToPopularMovies), userInfo: nil, repeats: false
        )
        
        
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func navigateToPopularMovies()
    {
        self.performSegue(withIdentifier: "from_splash_to_bitcoin", sender: nil)
        //stop the spinner
        spinnerView.stopAnimating()
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        
        
    }
    
}



