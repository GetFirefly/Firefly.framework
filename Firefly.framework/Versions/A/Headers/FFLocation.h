//
//  FFLocation.h
//  Firefly
//
//  Created by Marcus Kida on 01.06.13.
//  Copyright (c) 2013 Marcus Kida. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FFEventData.h"

@interface FFLocation : NSObject

- (id) initWithDictionary:(NSDictionary *)dict;

@property (strong) NSString *name;
@property (strong) NSString *address;
@property (strong) NSString *city;
@property (strong) NSString *country;
@property (strong) NSString *description;
@property (strong) NSString *photoUrl;
@property (strong) NSString *state;
@property (strong) NSString *websiteUrl;

@property (strong) FFEventData *eventData;

@property (strong) NSDate *lastUpdate;
@property (assign) CLLocationCoordinate2D location;

@end
