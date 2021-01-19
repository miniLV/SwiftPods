#
# Be sure to run `pod lib lint MNSwiftPods.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MNSwiftPods'
  s.version          = '0.1.1'
  s.summary          = 'A short description of MNSwiftPods.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/miniLV/MNSwiftPods'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'miniLV' => 'tyrion.liang@ringcentral.com' }
  s.source           = { :git => 'https://github.com/miniLV/SwiftPods.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'MNSwiftPods/Classes/**/*'
  
  # s.resource_bundles = {
    # 'MNSwiftPods' => ['MNSwiftPods/Classes/Framework/*.*']
  # }
  
  s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  # s.static_framework = true
  s.vendored_frameworks = 'MNSwiftPods/Classes/Framework/*.framework'

end
