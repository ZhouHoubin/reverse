//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIViewControllerProtocolExtend-Protocol.h"
#import "XMToastViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIImageView, XMAppIntroViewController, XMDubShowSoundWaveRejectManager, XMFindTopViewController;

@interface XMMainTabBarController : UITabBarController <UIViewControllerProtocolExtend, CAAnimationDelegate, XMToastViewDelegate>
{
    long long _activeIndex;
    _Bool _showAPPIntro;
    _Bool _isHomeTabIconRefresh;
    long long state;
    NSMutableArray *tabBarButtons;
    UIImageView *customBackgroundImage;
    NSArray *rawTabControllers;
    XMAppIntroViewController *_introlCtrl;
    XMFindTopViewController *_findTopVc;
    XMDubShowSoundWaveRejectManager *_waveMng;
}

+ (_Bool)handleOpenURLWhenLaunch:(id)arg1;
@property(retain, nonatomic) XMDubShowSoundWaveRejectManager *waveMng; // @synthesize waveMng=_waveMng;
@property(nonatomic) __weak XMFindTopViewController *findTopVc; // @synthesize findTopVc=_findTopVc;
@property(retain, nonatomic) XMAppIntroViewController *introlCtrl; // @synthesize introlCtrl=_introlCtrl;
@property(nonatomic) _Bool isHomeTabIconRefresh; // @synthesize isHomeTabIconRefresh=_isHomeTabIconRefresh;
@property(retain, nonatomic) NSArray *rawTabControllers; // @synthesize rawTabControllers;
@property(retain, nonatomic) UIImageView *customBackgroundImage; // @synthesize customBackgroundImage;
@property(retain, nonatomic) NSMutableArray *tabBarButtons; // @synthesize tabBarButtons;
@property(nonatomic) long long state; // @synthesize state;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateAccountRemain;
- (void)presentNowPlayingWithSound:(id)arg1 inList:(id)arg2 withForce:(_Bool)arg3;
- (void)npViewOnClick;
- (void)onXMNPPlayerRefreshed:(long long)arg1;
- (void)updateIconForRadio:(id)arg1;
- (void)updateIconForTrack:(id)arg1;
- (void)updateNPPlayerIcon;
- (void)onXMNPStateChanged:(long long)arg1;
- (id)tabbarTexts;
- (id)tabbarAnimatonImageNames;
- (id)tabbarHighlightedIcons;
- (id)tabbarNormalIcons;
- (void)pchUpdateSuccess;
- (void)shareForFreeListenExpiredOrUnlockWithNotification:(id)arg1;
- (void)loginStateChange:(long long)arg1;
- (void)onNoCopyright;
- (void)onTrackWillChanged:(id)arg1;
- (void)showTrackBuyToast:(id)arg1;
- (void)onTrackBuyWithOutAuthrizedTrackSample:(id)arg1;
- (void)onTrackBuyWithOutAuthrizedAfterFree:(id)arg1;
- (void)onTrackBuyWithOutAuthrized:(id)arg1;
- (void)onToastClick;
- (void)removeToastViewWithForse:(_Bool)arg1;
- (void)showListenContinueToast:(id)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)handle3dTouchFromAppIcon:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)handleTokenExpired;
- (void)onTokenExpired;
- (void)handleRemoteNotificationWhenAppIsActive:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (void)willOpenPageByRemoteNotification;
- (void)requestValidateWithReuqest:(id)arg1 ParamStr:(id)arg2;
- (void)requestValidate:(id)arg1;
- (void)startShouldChinaUnionPhoneNetOrder;
- (void)popToRoot:(long long)arg1;
- (void)updateTag:(_Bool)arg1 forTab:(long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setAnimation:(id)arg1 forTab:(long long)arg2;
- (void)updateDiscoverBadgeValue;
- (void)setBadgeValue:(id)arg1 forTab:(long long)arg2;
- (void)onRegistSuccess;
- (void)onLoginSuccess;
- (void)onLoginButtonPressed:(id)arg1;
- (void)selectItem:(long long)arg1;
- (void)activeItem:(long long)arg1;
- (void)doSelectNewIndex:(long long)arg1;
- (void)doSelectTheSameIndex:(long long)arg1;
- (void)trackWithTabIndex:(long long)arg1;
- (void)onSelectItem:(id)arg1;
- (void)setTabImages:(id)arg1 selectedImages:(id)arg2 texts:(id)arg3 animationImagesNames:(id)arg4;
- (void)initTabBarItems;
- (void)removeSystemTabBarButton;
- (void)customizeInitForState:(long long)arg1;
- (void)customizeInit;
- (void)customizeLogoutInit;
- (void)viewDidUnload;
- (void)mainTabShowToast:(id)arg1 withDuration:(double)arg2 clickBlock:(CDUnknownBlockType)arg3;
- (void)serialCodeMainTabShowToast:(id)arg1 withDuration:(double)arg2 clickBlock:(CDUnknownBlockType)arg3;
- (void)showSerialCodeAlertWithTitle:(id)arg1 imageUrl:(id)arg2 scheme:(id)arg3 type:(long long)arg4 trackDic:(id)arg5;
- (void)showDubVideoRecorderWithSerialCodeAlertWithTitle:(id)arg1 imageUrl:(id)arg2 scheme:(id)arg3;
- (void)reportShareCommand:(id)arg1;
- (void)parseLink:(id)arg1;
- (_Bool)p_handleShareCommand:(id)arg1;
- (void)goToHomeSpecifcTab:(id)arg1;
- (void)p_checkSharePassWord:(id)arg1;
- (void)checkSharePassWord;
- (void)appDidEnterForeground;
- (void)appDidEnterBackground;
- (void)showPrivacyAuthorization;
- (void)appShowMainTab;
- (void)initUI;
- (void)fixJSCrash;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

