//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMActivityInfos, XMHearListDetailHeadViewModel;

@protocol XMHearListDetailHeadViewDelegate <NSObject>

@optional
- (void)XMHearListDetailHeadViewCollectedList;
- (void)XMHearListDetailHeadViewDidClickActivityAction:(XMActivityInfos *)arg1;
- (void)XMHearListDetailHeadViewDidClickUserAction:(XMHearListDetailHeadViewModel *)arg1;
- (void)XMHearListDetailHeadViewCollectAction:(XMHearListDetailHeadViewModel *)arg1;
- (void)XMHearListDetailHeadViewFollowAction:(XMHearListDetailHeadViewModel *)arg1;
- (void)XMHearListDetailHeadViewChangeOpenState:(_Bool)arg1;
@end

