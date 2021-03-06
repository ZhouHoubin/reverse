//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CABasicAnimation, CAGradientLayer, CAShapeLayer, NSString, UIImageView, YXLiveTimerNew;
@protocol YXLCircularTimerViewDelegate;

@interface YXLCircularTimerView : UIView <CAAnimationDelegate>
{
    UIImageView *dotView;
    CAGradientLayer *gradientLayer;
    long long _type;
    double _curTime;
    double _tolTime;
    id <YXLCircularTimerViewDelegate> _delegate;
    double _time_left;
    YXLiveTimerNew *_timer;
    CAShapeLayer *_shapeLayer;
    CABasicAnimation *_pathAnima;
}

@property(retain, nonatomic) CABasicAnimation *pathAnima; // @synthesize pathAnima=_pathAnima;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) YXLiveTimerNew *timer; // @synthesize timer=_timer;
@property(nonatomic) double time_left; // @synthesize time_left=_time_left;
@property(nonatomic) __weak id <YXLCircularTimerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)getColors;
- (void)startTimer;
- (void)setTotalSecondTime:(double)arg1 andCurrentTime:(double)arg2;
- (void)setType:(long long)arg1;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

