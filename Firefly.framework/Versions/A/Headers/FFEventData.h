//
//  FFEventData.h
//  Firefly
//
//  Created by Marcus Kida on 01.06.13.
//  Copyright (c) 2013 Marcus Kida. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFEventData : NSObject

- (id) initWithDictionary:(NSDictionary *)dict;

@property (strong) NSArray *headlines;
@property (strong) NSArray *subtitles;

@end
