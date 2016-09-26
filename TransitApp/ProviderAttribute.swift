//
//  ProviderAttribute.swift
//  TransitApp
//
//  Created by medialis.net on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation


class ProviderAttribute {
    
    let name : String!
    let provider_icon_url : String!
    let disclaimer : String!
    let ios_app_url : String!
    let ios_itunes_url : String!
    let android_package_name : String!
    let display_name : String!
    
    
    
    init(name: String, provider_icon_url: String, disclaimer: String, ios_app_url: String, ios_itunes_url : String , android_package_name : String , display_name : String )
        
    {
        self.name=name
        self.provider_icon_url=provider_icon_url
        self.disclaimer = disclaimer
        self.ios_app_url=ios_app_url
        self.ios_itunes_url=ios_app_ios_itunes_urlurl
        self.android_package_name=android_package_name
        self.display_name=display_name
        
    }
    
    init()
    {
        
        
    }
    
}
