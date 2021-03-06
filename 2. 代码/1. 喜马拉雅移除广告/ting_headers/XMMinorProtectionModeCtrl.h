//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class UIButton, UIView, XMMPMPasswordView, XMMPMReportDisplayView, XMMPMStatusView;

@interface XMMinorProtectionModeCtrl : XMSubLevelViewController
{
    _Bool _isAutoBack;
    _Bool _isOn;
    UIView *_tableHeader;
    XMMPMStatusView *_statusView;
    XMMPMPasswordView *_setView;
    XMMPMPasswordView *_reconfigView;
    XMMPMPasswordView *_verifyView;
    XMMPMReportDisplayView *_reportView;
    unsigned long long _stage;
    UIButton *_rightBtn;
}

@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) unsigned long long stage; // @synthesize stage=_stage;
@property(retain, nonatomic) XMMPMReportDisplayView *reportView; // @synthesize reportView=_reportView;
@property(retain, nonatomic) XMMPMPasswordView *verifyView; // @synthesize verifyView=_verifyView;
@property(retain, nonatomic) XMMPMPasswordView *reconfigView; // @synthesize reconfigView=_reconfigView;
@property(retain, nonatomic) XMMPMPasswordView *setView; // @synthesize setView=_setView;
@property(retain, nonatomic) XMMPMStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *tableHeader; // @synthesize tableHeader=_tableHeader;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(nonatomic) _Bool isAutoBack; // @synthesize isAutoBack=_isAutoBack;
- (void).cxx_destruct;
- (void)back;
- (void)onAction:(id)arg1;
- (void)addRightButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

