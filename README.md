# Firefly.framework for iOS

### Please note, this framework is in a highly experimental alpha-state.

Firefly is a Service to server you with the hottest parties around. Please note: At the moment of this release, there are only a few locations available for testing purpose.

To use this framework, your in need af an API Key which can be retrieved by sending a mail to we@getfirefly.net. We will then, as soon as possible, send you an API Key, in the near future, this mechanism will, of couse, be automated.

An example as well code-docuemntation will follow in the next release.

To use this framework, just add it to your Xcode Projects Framework's sections then:

```objective-c
#import <Firefly/Firefly>
```

Set your API Key and retrieve Locations like this:

```objective-c
FFConnector *connector = [FFConnector sharedConnectorWithApiKey:@"your-api-key-here"];
    [connector fetchLocationsNearbyLocation:location
                                     atPage:0
                                  withLimit:20
                              andCompletion:^(NSError *error, NSArray *locations) {
                                  FFLocation *firstLocation = (FFLocation *)locations[0];
                                  NSLog(@"First Location Name: %@", [firstLocation name]);
                                  NSLog(@"First Location Website: %@", [firstLocation websiteUrl]);
                                  NSLog(@"First Location Headlines: %@", [[firstLocation eventData] headlines]);
                                  NSLog(@"First Location Subtitles: %@", [[firstLocation eventData] subtitles]);
                              }];
```

The response should be something like this:

```
First Location Name: Béi Chéz Héinz
2013-08-21 21:14:52.179 FireflyFrameworkTest[14781:907] First Location Website: http://beichezheinz.de/programm/index.php
2013-08-21 21:14:52.180 FireflyFrameworkTest[14781:907] First Location Headlines: (
    "KKC [ka'ka'ze']",
    "Disco Total!",
    "Dein Mixtape",
    ….
2013-08-21 21:14:52.183 FireflyFrameworkTest[14781:907] First Location Subtitles: (
    "Mittwoch \U00a0 \U00a0 21. August 2013 \U00a0 \U00a0 19:30 Uhr",
    "Donnerstag \U00a0 \U00a0 22. August 2013 \U00a0 \U00a0 23:00 Uhr \U00a0 \U00a0 3.00 Euro",
    "Freitag \U00a0 \U00a0 23. August 2013 \U00a0 \U00a0 23:00 Uhr \U00a0 \U00a0 4.00 Euro",
    ...

```