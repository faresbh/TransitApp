//
//  ProviderAttribute.swift
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation


class ProviderAttribute: NSObject {
    
    private let name:String
    private let disclaimer:String?
    private let displayName:String?
    private var providerIconUrl:NSURL? = nil
    private var iosItunesUrl:NSURL? = nil
    private var iosAppUrl:NSURL? = nil
    
    
    init(name:String, dataDictionary:[String: AnyObject]){
        self.name = name
        self.disclaimer = dataDictionary["disclaimer"] as? String
        self.displayName = dataDictionary["display_name"] as? String
        
        if let iconUrl = dataDictionary["provider_icon_url"] as? String{
            self.providerIconUrl = NSURL(string: iconUrl)
        }
        
        if let itunesUrl = dataDictionary["ios_itunes_url"] as? String{
            self.iosItunesUrl = NSURL(string: itunesUrl)
        }
        
        if let iosUrl = dataDictionary["ios_app_url"] as? String{
            self.iosAppUrl = NSURL(string: iosUrl)
        }
        
    }
    
}
