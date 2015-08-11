//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Jeffrey Isaray on 8/9/15.
//  Copyright (c) 2015 Jeffrey Isaray. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
