Pod::Spec.new do |s|
s.name         = "GTCommonKit"
s.version      = "0.5.5"
s.summary      = "GTCommonKit"
s.description  = "GTCommonKit"
s.homepage     = "https://github.com/awesomedu/GTCommonKit.git"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "GTTeam" => "7277710@qq.com" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/awesomedu/GTCommonKit.git", :tag => "0.5.5" }
s.requires_arc = true #是否支持ARC
s.dependency 'MBProgressHUD', '~> 1.0.0'
s.dependency 'AFNetworking', '~> 3.1.0'
s.dependency 'SDWebImage', '~> 4.0.0'
s.dependency 'MJExtension','~> 3.0.10'
s.dependency 'IQKeyboardManager', '3.3.7'
s.dependency 'ActionSheetPicker-3.0'
s.dependency 'MJRefresh'
s.dependency 'FMDB', '~> 2.7.5'



#头文件
s.source_files = "Pod/Classes/GTCommonKit.h"

#三级目录 NSString
s.subspec "NSString" do |string|
string.source_files = "Pod/Classes/Category/NSString/*.{h,m}"
end

#NSDictionary
s.subspec "NSDictionary" do |dic|
dic.source_files = "Pod/Classes/Category/NSDictionary/*.{h,m}"
end

#slidingKit
s.subspec "SlidingKit" do |skt|
skt.source_files = "Pod/Classes/Tools/SlidingKit/*.{h,m}"
end

#dbmanager
s.subspec "DBManager" do |dm|
dm.source_files = "Pod/Classes/Tools/DBManager/*.{h,m}"
end


#NSArray
s.subspec "NSArray" do |arr|
arr.source_files = "Pod/Classes/Category/NSArray/*.{h,m}"
end

#UIScrollView
s.subspec "UIScrollView+" do |scr|
scr.source_files = "Pod/Classes/Category/UIScrollView+/*.{h,m}"
end

#UIController
s.subspec "UIAlertController" do |scr|
scr.source_files = "Pod/Classes/Category/UIAlertController/*.{h,m}"
end


#Macros
s.subspec "Macros" do |mcr|
mcr.source_files = "Pod/Classes/Macros/GTMacros.h"
end




end



