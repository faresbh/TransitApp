target "TransitApp" do

pod 'Alamofire', '~> 4.0.0'
pod 'MMMaterialDesignSpinner' , '~> 0.2.1'

use_frameworks!

    post_install do |installer|
        installer.pods_project.targets.each do |target|
            target.build_configurations.each do |config|
                config.build_settings['SWIFT_VERSION'] = '3.0'
            end
        end
    end

end
