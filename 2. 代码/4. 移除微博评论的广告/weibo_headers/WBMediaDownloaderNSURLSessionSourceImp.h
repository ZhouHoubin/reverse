//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString, NSURLSessionTask, NSURLSessionTaskMetrics, WBMediaDownloaderURLSession;

@interface WBMediaDownloaderNSURLSessionSourceImp : NSObject <NSURLSessionDataDelegate>
{
    NSURLSessionTask *_task;
    WBMediaDownloaderURLSession *_session;
    NSURLSessionTaskMetrics *_metrics;
    struct WallTime _responseReceiveTime;
    weak_ptr_d24b1af3 _networkEngineClient;
    weak_ptr_c665b985 _networkEngineCaller;
    shared_ptr_eb682d9c _clientQueue;
}

@property(nonatomic) struct WallTime responseReceiveTime; // @synthesize responseReceiveTime=_responseReceiveTime;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) WBMediaDownloaderURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) shared_ptr_eb682d9c clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic) weak_ptr_c665b985 networkEngineCaller; // @synthesize networkEngineCaller=_networkEngineCaller;
@property(nonatomic) weak_ptr_d24b1af3 networkEngineClient; // @synthesize networkEngineClient=_networkEngineClient;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_collectMetricsIfAvailableFromTask:(id)arg1;
- (id)_collectMetricsIfAvailableFromTaskOS13:(id)arg1 fallback:(_Bool *)arg2;
- (unique_ptr_f0301644)networkEngineMetricsFromNSURLTaskMetrics:(id)arg1;
- (void)_didReceiveData:(id)arg1;
- (shared_ptr_ff53f722)errorFromNSError:(id)arg1;
- (unique_ptr_f0301644)collectMetrics;
- (void)callbackCompleteWithError:(const shared_ptr_ff53f722 *)arg1;
- (_Bool)performClientCallback:(function_4100d9f2)arg1;
- (void)cancel;
- (void)openWithRequest:(shared_ptr_cd65b9fd)arg1;
- (float)networkTaskPriorityFromQualityOfService:(int)arg1;
- (id)initWithSession:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

