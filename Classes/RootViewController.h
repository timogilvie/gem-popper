//
//  RootViewController.h
//  test5
//
//  Created by Alan on 6/17/11.
//  Copyright Trippin' Software 2011. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GADBannerView.h"
#import <AdColony/AdColony.h>
#import "AppDelegate.h"
#import "GADInterstitial.h"

@interface RootViewController : UIViewController <GADInterstitialDelegate> {

    GADBannerView *gADBbannerView;
    GADInterstitial *interstitial_;
}

- (BOOL) prefersStatusBarHidden;
-(void) addAdMobBanner:(CGSize)adSize;
-(void)removeAdMobBanner;
-(void)shareTwitter5;
-(void)shareTwitter6;
-(void)shareFacebook6;
-(void)showLeadboltAd;

-(void)showAdmobInterstitial;

@end

