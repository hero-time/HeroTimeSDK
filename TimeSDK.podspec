

Pod::Spec.new do |s|

s.name         = "TimeSDK"
s.version      = "0.0.1"
s.summary      = "TimeSDK."

s.description  = <<-DESC
A short description of TimeSDK.
DESC

s.homepage     = "https://github.com/hero-time/TimeSDK"

s.license      = "MIT"

s.author             = { "Time" => "qingwei.meng@yingxiong.com" }

s.platform     = :ios
s.platform     = :ios, "7.0"

s.source       = { :git => "http://github.com/hero-time/TimeSDK.git", :tag => "#{s.version}" }

s.vendored_frameworks = "Classes/*.framework"

s.resource     = 'Assets/HeroCoinResources.bundle/**/*.png', 'Assets/HeroCoinResources.bundle/*.text'

s.dependency "AFNetworking"
s.dependency "Masonry"
s.dependency "JGProgressHUD"
s.dependency "MJRefresh"
s.dependency "YYModel"
s.dependency "FBSDKLoginKit"
s.dependency "GoogleSignIn"

end
