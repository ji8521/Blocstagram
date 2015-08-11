//
//  Comment.h
//  Blocstagram
//
//  Created by Jeffrey Isaray on 8/8/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end
