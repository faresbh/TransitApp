target "TransitApp" do
    use_frameworks!
    
    pod 'GoogleMaps'
    pod 'MaterialKit', :git => 'https://github.com/faresbh/MaterialKit', :branch => 'swift3'
    pod 'PopupContainer', :git => 'https://github.com/faresbh/PopupContainer', :branch => 'swift3'
    pod 'Polyline', '~> 4.0'

    post_install do |installer|
        installer.pods_project.targets.each do |target|
            target.build_configurations.each do |config|
                config.build_settings['SWIFT_VERSION'] = '3.0'
            end
        end
    end
    
end
