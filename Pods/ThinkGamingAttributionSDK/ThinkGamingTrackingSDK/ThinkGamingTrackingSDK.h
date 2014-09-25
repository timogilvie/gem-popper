//
//  ThinkGamingTrackingSDK.h
//  ThinkGamingTrackingSDK
//
//  Created by Aaron Junod on 5/20/14.
//  Copyright (c) 2014 ThinkGaming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppsFlyerTracker.h"

@interface ThinkGamingTrackingSDK : NSObject <AppsFlyerTrackerDelegate>

+ (ThinkGamingTrackingSDK *) startSessionWithDevKey:(NSString *)appsFlyerDevKey appId:(NSString *)appId;
+ (ThinkGamingTrackingSDK *) startSessionWithDevKey:(NSString *)appsFlyerDevKey appId:(NSString *)appId andDelegate:(id<AppsFlyerTrackerDelegate>)delegate;

@end
