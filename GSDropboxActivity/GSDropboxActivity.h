//
//  GSDropboxActivity.h
//
//  Created by Simon Whitaker on 19/11/2012.
//  Copyright (c) 2012 Goo Software Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString* const GSDropboxActivityLoginFailedNotification = @"GSDropboxActivityLoginFailedNotification";

@interface GSDropboxActivity : UIActivity

+ (NSString*)activityTypeString;

@end
