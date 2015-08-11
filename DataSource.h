//
//  DataSource.h
//  Blocstagram
//
//  Created by Jeffrey Isaray on 8/8/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
