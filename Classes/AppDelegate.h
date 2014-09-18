//
//  AppDelegate.h
//   Gem Poppers
//
//  Created by Alan on 3/23/10.
//   
//

#import <UIKit/UIKit.h>
#import "Flurry.h"
#import "GameKit/GameKit.h"
#import <AdColony/AdColony.h>
#import "StoreKit/StoreKit.h"
#import "RootViewController.h"
#import "ALSdk.h"
#import "ALInterstitialAd.h"
#import "GADInterstitial.h"
#import "Appirater.h"
#import "Chartboost/Chartboost.h"

#define ADMOB_INTERSTITIAL_ID @"ca-app-pub-6457514489984317/2115942839"

#define REVMOB_ID @"524965e7b9376aa2ea00005d"

#define CHARTBOOST_APPID @"541ad6e5c26ee40b64ed2afd"
#define CHARTBOOST_APPSIG @"f482651084df5ed61b2539fca966717a923e3e3e"

@class RootViewController;

    @interface AppDelegate : NSObject <UIApplicationDelegate, GKLeaderboardViewControllerDelegate, AdColonyDelegate,SKProductsRequestDelegate,SKPaymentTransactionObserver,ALAdDisplayDelegate,GADInterstitialDelegate,ChartboostDelegate> {
    
	UIWindow *window;
	RootViewController	*viewController;
    GADInterstitial *interstitial_;
    NSSet *productIdentifiers;
	NSSet *invalidProductIdentifiers;
	NSString *currentIdentifier;
    NSString *productPrice;
    NSString *title, *message, *buttonLabel;

    UIAlertView *msg;
    UIAlertView *promoMsg;

}

@property (nonatomic, retain) UIWindow *window;

-(void)displayGoogleAd:(CGSize)adSize;
-(void)removeGoogleAd;
-(void)displayTapjoyAd;
-(void)displayTwitter5;
-(void)displayTwitter6;
-(void)displayFacebook6;

@end
