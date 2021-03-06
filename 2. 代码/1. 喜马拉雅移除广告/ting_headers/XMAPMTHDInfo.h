//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface XMAPMTHDInfo : NSObject
{
    double _startTime;
    double _terminateTime;
    unsigned long long _thread_id;
    NSString *_threadName;
    NSString *_poolName;
    NSMutableArray *_tasks;
}

@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(copy, nonatomic) NSString *poolName; // @synthesize poolName=_poolName;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(nonatomic) unsigned long long thread_id; // @synthesize thread_id=_thread_id;
@property(nonatomic) double terminateTime; // @synthesize terminateTime=_terminateTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)timeSlice;
- (void)removeAllTimeSlice;
- (void)addTimeSlice:(id)arg1;

@end

