//
//  DataParser
//  TransitApp
//
//  Created by Fares Ben Hamouda on 26/09/16.
//  Copyright © 2016 Fares Ben Hamouda. All rights reserved.
//

import Foundation

class DataParser: NSObject {
    static let sharedInstance = DataParser()
    private override init() {}
    
    func getRoutes(origin:String, destination:String, atTime time:NSDate?, completionHandler:@escaping (_ routes:[Route]?,_ providers:[ProviderAttribute]?, _ error:NSError?)->()){
        
      self.consultServerFor(origin: origin, destination: destination, time: time, sucess: { (resultDictionary) in
            
            if let routesDictionary = resultDictionary["routes"], let providersDictionary = resultDictionary["provider_attributes"]{
                
                var routeArray:[Route] = []
                var providerArray:[ProviderAttribute] = []
                
                /* Create Routes*/
                for routeData in routesDictionary.allObjects{
                    let singleRoute = Route(dataDictionary: routeData as! [String : AnyObject])
                    routeArray.append(singleRoute)
                }
                
                /* Create Providers*/
                for providerKey in providersDictionary.allKeys{
                    if let providerName = providerKey as? String,let providerData = (providersDictionary.object(forKey: providerName) as?[String : AnyObject]){
                        let singleProvider = ProviderAttribute(name: providerName, dataDictionary: providerData)
                        providerArray.append(singleProvider)
                    }
                }
                

                completionHandler(routeArray, providerArray, nil)
            }
            
        }) { (error) in
            completionHandler(nil,nil,error)
        }
    }
    
    //MockData
    func consultServerFor(origin:String = "", destination:String = "", time:NSDate? = nil, sucess:@escaping ([String: AnyObject])->(), fail:(NSError?)->()){
        self.retrieveDataFromFile(sucess: { (jsonData) in
            /* Parse JSON*/
            do{
                if let responseDictionary = try JSONSerialization.jsonObject(with: jsonData as Data, options: []) as? NSDictionary{
                    sucess(responseDictionary as! [String : AnyObject])
                }
            }catch let error as NSError {
                fail(error)
            }})
        {
            fail(nil)
        }
    }
    
    private func retrieveDataFromFile(sucess:(NSData)->(), fail:()->()){
        if let path = Bundle.main.path(forResource: "data", ofType: "json"){
            if let jsonData = NSData(contentsOfFile: path){
                sucess(jsonData)
            }else{
                fail()
            }
        }
    }

}
