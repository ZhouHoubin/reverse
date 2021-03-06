//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBUploadURLSession-Protocol.h"

@class NSString, WBNoBaseURLNetworkClient;

@interface WBQueueMediaUploadURLSession : NSObject <WBUploadURLSession>
{
    WBNoBaseURLNetworkClient *_client;
}

- (void).cxx_destruct;
- (void)redirectUrlRequest:(id)arg1;
- (_Bool)setHttpHeaderWithRedirectUrlRequest:(id)arg1;
- (void)redirectUrlRequestToFreeTrafficServerIfNeeded:(id)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1 progress:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configRequest:(id)arg1;
@property(readonly, nonatomic) _Bool reachable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

