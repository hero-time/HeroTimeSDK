

Pod::Spec.new do |s|

s.name         = "HeroTimeSDK"
s.version      = "0.0.2.4"
s.summary      = "HeroTimeSDK."

s.description  = <<-DESC
A short description of HeroTimeSDK.
DESC

s.homepage     = "https://github.com/hero-time/HeroTimeSDK"

s.license      = "MIT"

s.author             = { "Time" => "qingwei.meng@yingxiong.com" }

s.platform     = :ios
s.platform     = :ios, "7.0"

s.source       = { :git => "http://github.com/hero-time/HeroTimeSDK.git", :tag => "#{s.version}" }

s.vendored_frameworks = "Classes/*.framework"

s.resource     = 'Assets/HeroCoinResources.bundle'
#s.resource     = 'Assets/HeroCoinResources.bundle/**/*.png', 'Assets/HeroCoinResources.bundle/*.text'

s.dependency "AFNetworking"
s.dependency "Masonry"
s.dependency "JGProgressHUD"
s.dependency "MJRefresh"
s.dependency "YYModel"
s.dependency "FBSDKLoginKit"
s.dependency "GoogleSignIn"
s.dependency "Toast"

end
