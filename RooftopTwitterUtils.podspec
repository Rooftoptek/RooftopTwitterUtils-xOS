Pod::Spec.new do |s|
  s.name             = 'RooftopTwitterUtils'
  s.version          = '0.0.1'
  s.summary          = "Rooftop Twitter utils for Apple platforms"
  s.description      = "Rooftop Twitter utils for Apple platforms."
  s.authors          = 'Rooftoptek'
  s.homepage         = 'https://www.rooftop.com/'
  s.license          =  { :type => 'BSD', :file => "LICENSE" }
  s.source           = { :git => "https://github.com/Rooftoptek/RooftopTwitterUtils-xOS.git", :tag => s.version.to_s }

  s.platform = :ios
  s.ios.deployment_target = '9.0'
  s.ios.vendored_framework = 'iOS/ParseTwitterUtils.framework'

  s.dependency 'Rooftop', '~> 0.0.1'
end
