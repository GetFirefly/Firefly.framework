//
//  FFConnector.h
//  Firefly
//
//  Created by Marcus Kida on 21.08.13.
//  Copyright (c) 2013 Marcus Kida. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface FFConnector : NSObject

+ (id) sharedConnectorWithApiKey:(NSString *)apiKey;

- (void) fetchLocationsNearbyLocation:(CLLocation *)location atPage:(NSInteger)page withLimit:(NSInteger)limit andCompletion:(void(^)(NSError *error, NSArray *locations))completion;

@end
