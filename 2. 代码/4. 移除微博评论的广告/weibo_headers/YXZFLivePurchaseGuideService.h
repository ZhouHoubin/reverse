//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YXZFLivePurchaseGuideViewDelegate-Protocol.h"

@class NSString, UIView, YXLiveRechargeView, YXLiveViewController, YXLiveZFTicketModel, YXZFLivePurchaseGuideView;

@interface YXZFLivePurchaseGuideService : NSObject <YXZFLivePurchaseGuideViewDelegate>
{
    _Bool _rechargeActionCausedByPay;
    _Bool _payActionDisabled;
    YXLiveViewController *_liveRoomController;
    UIView *_view;
    YXZFLivePurchaseGuideView *_guideView;
    UIView *_blurView;
    YXLiveRechargeView *_rechargeView;
    YXLiveZFTicketModel *_ticketModel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
}

@property(nonatomic) _Bool payActionDisabled; // @synthesize payActionDisabled=_payActionDisabled;
@property(nonatomic) _Bool rechargeActionCausedByPay; // @synthesize rechargeActionCausedByPay=_rechargeActionCausedByPay;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) YXLiveZFTicketModel *ticketModel; // @synthesize ticketModel=_ticketModel;
@property(retain, nonatomic) YXLiveRechargeView *rechargeView; // @synthesize rechargeView=_rechargeView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) YXZFLivePurchaseGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak YXLiveViewController *liveRoomController; // @synthesize liveRoomController=_liveRoomController;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *serviceView;
- (void)actionTriggeredInPurchaseGuideView:(id)arg1 forOperation:(unsigned long long)arg2;
- (void)jumpToOperate;
- (void)paySuccess;
- (void)payForLive;
- (void)showGuideView:(_Bool)arg1;
- (void)getOutOnRecharging;
- (void)showRechargeView;
- (void)rechargeCancel;
- (void)rechargeFinish:(_Bool)arg1;
- (void)initializeViews;
- (void)changeTicketType:(unsigned long long)arg1;
- (void)setupViews;
- (void)makeViewConstraints;
- (id)initWithTicketModel:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

