#
# Be sure to run `pod lib lint AliyunFace.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AliyunFace'
  s.version          = '0.1.0'
  s.summary          = 'A short description of AliyunFace.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/745611/AliyunFace'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '745611' => '524112470@qq.com' }
  s.source           = { :git => 'https://github.com/745611/AliyunFace.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '14.0'

  s.source_files = 'AliyunFace/Classes/**/*'
  s.public_header_files = 'AliyunFace/Classes/**/*.h'
#  s.platform = :ios, '14.0'

  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }

  # 实人认证SDK framework库
  s.vendored_frameworks = 'AliyunFace/Products/*.framework'
  s.resources = 'AliyunFace/Products/**/*.bundle'

  # 系统framework库
  s.frameworks = 'CoreGraphics', 'Accelerate', 'SystemConfiguration', 'AssetsLibrary',
                'CoreTelephony', 'QuartzCore', 'CoreFoundation', 'CoreLocation',
                'ImageIO', 'CoreMedia', 'CoreMotion', 'AVFoundation', 'WebKit',
                'AudioToolbox', 'CFNetwork', 'MobileCoreServices', 'AdSupport', 'ReplayKit'
  # 系统C库
  s.libraries = 'resolv', 'z', 'c++', 'c++.1', 'c++abi', 'z.1.2.8'
end
