#import <Cordova/CDV.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "GADBannerViewDelegate.h"

#pragma mark - JS requestAd options

#define PUBLISHER_ID_ARG_INDEX    0
#define AD_SIZE_ARG_INDEX         1
#define BANNER_AT_TOP_ARG_INDEX   2

#define IS_TESTING_ARG_INDEX      0
#define EXTRAS_ARG_INDEX          1

#define SHOW_AD_ARG_INDEX    0

@class GADBannerView;

#pragma mark AdMob Plugin

// This version of the AdMob plugin has been tested with Cordova version 2.5.0.
@interface CDVAdMob : CDVPlugin <GADBannerViewDelegate> {
}

@property(nonatomic, retain) GADBannerView *bannerView;
@property (assign) BOOL bannerAtTop;

- (void)createBannerView:(CDVInvokedUrlCommand *)command;
- (void)destroyBannerView:(CDVInvokedUrlCommand *)command;
- (void)requestAd:(CDVInvokedUrlCommand *)command;
- (void)showAd:(CDVInvokedUrlCommand *)command;

@end
