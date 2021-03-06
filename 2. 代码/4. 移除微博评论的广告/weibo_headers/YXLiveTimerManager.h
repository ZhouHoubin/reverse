//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_source;

@interface YXLiveTimerManager : NSObject
{
    NSMutableArray *_timers_level1;
    NSObject<OS_dispatch_source> *_timer_source_level1;
    _Bool _queueIsRunning_level1;
    NSMutableArray *_timers_level2;
    NSObject<OS_dispatch_source> *_timer_source_level2;
    _Bool _queueIsRunning_level2;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)hitsTimerHandlerLeve2;
- (void)hitsTimerHandlerLeve1;
- (void)stopTimerSource:(long long)arg1;
- (void)startTimerSource:(long long)arg1;
- (void)unRegisterTimer:(id)arg1;
- (void)registerTimer:(id)arg1;
- (_Bool)checkTimerRegistered:(id)arg1;
- (id)findTimersArr:(long long)arg1;
- (id)findTimerSource:(long long)arg1;
- (long long)findTimerLevel:(id)arg1;
- (id)init;

@end

