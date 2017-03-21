Pod::Spec.new do |s|
  s.name             = 'RooftopTwitterUtils'
  s.version          = '0.0.1'
  s.summary          = "Rooftop Twitter utils for Apple platforms"
  s.description      = "Rooftop Twitter utils for Apple platforms."
  s.authors          = 'Rooftoptek'
  s.homepage         = 'https://www.rftp.io/'
  s.license          =  { :type => 'BSD', :file => "LICENSE" }
  s.source           = { :path => '../RooftopTwitterUtils-xOS', :tag => s.version.to_s }

  s.platform = :ios
  s.ios.deployment_target = '9.0'
  s.ios.vendored_framework = 'iOS/RooftopTwitterUtils.framework'

  s.dependency 'Rooftop', '~> 0.5.0'
  s.dependency 'TwitterCore', '~> 1.9'
  s.dependency 'TwitterKit', '~> 1.9'
  s.dependency 'Fabric', '~> 1.5'
  s.dependency 'Digits'
end
