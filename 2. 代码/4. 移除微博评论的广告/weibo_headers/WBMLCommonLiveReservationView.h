//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WBMLCommonReservationModel, WBMLVideoAnchorFollowView, WBMLVideoGradientControl;
@protocol WBMLCommonLiveReservationDelegate;

@interface WBMLCommonLiveReservationView : UIView
{
    _Bool _isPortraitOrientation;
    _Bool _isfloat;
    id <WBMLCommonLiveReservationDelegate> _delegate;
    WBMLVideoAnchorFollowView *_anchorFollowView;
    WBMLCommonReservationModel *_model;
    CDUnknownBlockType _clickBlock;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    WBMLVideoGradientControl *_reserveButton;
    UIButton *_closeButton;
    UIButton *_landscapeButton;
    UIButton *_backButton;
    UIImageView *_coverImageView;
    UIView *_coverView;
    UIButton *_floatButton;
}

@property(nonatomic) _Bool isfloat; // @synthesize isfloat=_isfloat;
@property(retain, nonatomic) UIButton *floatButton; // @synthesize floatButton=_floatButton;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *landscapeButton; // @synthesize landscapeButton=_landscapeButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WBMLVideoGradientControl *reserveButton; // @synthesize reserveButton=_reserveButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isPortraitOrientation; // @synthesize isPortraitOrientation=_isPortraitOrientation;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) WBMLCommonReservationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WBMLVideoAnchorFollowView *anchorFollowView; // @synthesize anchorFollowView=_anchorFollowView;
@property(nonatomic) __weak id <WBMLCommonLiveReservationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getDateStringWithStartTime:(id)arg1;
- (void)delegateRespondsToEvent:(long long)arg1;
- (void)floatButtonTapped:(id)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)landscapeButtonTapped:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)reserveAction:(id)arg1;
- (void)setStatusWithFloatStatus:(_Bool)arg1;
- (void)layoutLandscapeViews;
- (void)layoutPortraitViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

