Pod::Spec.new do |s|
s.name         = "GTCommonKit"
s.version      = "0.4.2"
s.summary      = "GTCommonKit"
s.description  = "GTCommonKit"
s.homepage     = "https://github.com/awesomedu/GTCommonKit.git"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "GTTeam" => "7277710@qq.com" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/awesomedu/GTCommonKit.git", :tag => "0.4.2" }
s.requires_arc = true #是否支持ARC
s.dependency 'MBProgressHUD', '~> 1.0.0'
s.dependency 'AFNetworking', '~> 3.1.0'
s.dependency 'SDWebImage', '~> 4.0.0'
s.dependency 'MJExtension','~> 3.0.10'
s.dependency 'IQKeyboardManager', '3.3.7'
s.dependency 'ActionSheetPicker-3.0'
s.dependency 'MJRefresh'
s.subspec "Category" do |cty|
cty.source_files = "Pod/Classes/Category/**/*.{h,m}"
end
s.subspec "Tools" do |tts|
tts.source_files = "Pod/Classes/Tools/**/*.{h,m}"
end


end



