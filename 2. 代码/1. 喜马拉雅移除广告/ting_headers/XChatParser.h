//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol OS_dispatch_semaphore;

@interface XChatParser : NSObject
{
    NSObject<OS_dispatch_semaphore> *semaphore;
    NSMutableData *_recvData;
}

@property(retain, nonatomic) NSMutableData *recvData; // @synthesize recvData=_recvData;
- (void).cxx_destruct;
- (id)report;
- (id)parseData:(id)arg1;
- (void)reset;
- (id)init;

@end

