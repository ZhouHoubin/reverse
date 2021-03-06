//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, YXLiveLoginUser, YXTimeoutHandler;
@protocol OS_dispatch_semaphore, YXLiveChatManagerDelegate;

@interface YXLiveChatManager : NSObject
{
    _Bool requestingHost;
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _needRestart;
    id <YXLiveChatManagerDelegate> _liveDelegate;
    id <YXLiveChatManagerDelegate> _chatDelegate;
    id <YXLiveChatManagerDelegate> _peDelegate;
    id <YXLiveChatManagerDelegate> _taskDelegate;
    YXLiveLoginUser *_loginUser;
    NSDate *_enterBackgroundDate;
    NSDate *_enterForgroundDate;
    NSString *_fromeConnect;
    long long _connectFailedCount;
    NSMutableArray *_hostArray;
    NSDictionary *_hostData;
    NSString *_currentHost;
    NSMutableDictionary *_requestCountDict;
    YXTimeoutHandler *_timeoutHandler;
}

+ (id)getSharedInstance;
@property(retain, nonatomic) YXTimeoutHandler *timeoutHandler; // @synthesize timeoutHandler=_timeoutHandler;
@property(retain, nonatomic) NSMutableDictionary *requestCountDict; // @synthesize requestCountDict=_requestCountDict;
@property(retain, nonatomic) NSString *currentHost; // @synthesize currentHost=_currentHost;
@property(retain, nonatomic) NSDictionary *hostData; // @synthesize hostData=_hostData;
@property(retain, nonatomic) NSMutableArray *hostArray; // @synthesize hostArray=_hostArray;
@property(nonatomic) long long connectFailedCount; // @synthesize connectFailedCount=_connectFailedCount;
@property(retain, nonatomic) NSString *fromeConnect; // @synthesize fromeConnect=_fromeConnect;
@property(retain, nonatomic) NSDate *enterForgroundDate; // @synthesize enterForgroundDate=_enterForgroundDate;
@property(retain, nonatomic) NSDate *enterBackgroundDate; // @synthesize enterBackgroundDate=_enterBackgroundDate;
@property(retain, nonatomic) YXLiveLoginUser *loginUser; // @synthesize loginUser=_loginUser;
@property(nonatomic) __weak id <YXLiveChatManagerDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
@property(nonatomic) __weak id <YXLiveChatManagerDelegate> peDelegate; // @synthesize peDelegate=_peDelegate;
@property(nonatomic) _Bool needRestart; // @synthesize needRestart=_needRestart;
@property(nonatomic) __weak id <YXLiveChatManagerDelegate> chatDelegate; // @synthesize chatDelegate=_chatDelegate;
@property(nonatomic) __weak id <YXLiveChatManagerDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
- (void).cxx_destruct;
- (void)clearHostArray;
- (void)startChatManagerWithHost:(id)arg1 data:(id)arg2;
- (void)getHostStartChatManager;
- (void)startChatServerWithResponseObject:(id)arg1;
- (void)delayInSecondsRequestHost;
- (void)requestHost;
- (void)onQueuingShow:(id)arg1;
- (void)onServiceValidateTime:(id)arg1;
- (_Bool)getNetworkReachable;
- (void)onServiceStatusConnectChanged:(long long)arg1;
- (void)reportHeartBeatPushStatus;
- (void)onReceivePing;
- (void)retryRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stopTimer;
- (void)startDelayHandle:(CDUnknownBlockType)arg1;
- (void)clearRequestCount:(id)arg1;
- (void)addRequestCount:(id)arg1;
- (long long)getRequestCount:(id)arg1;
- (_Bool)sendGift:(id)arg1 memberid:(long long)arg2 giftId:(long long)arg3 giftNum:(long long)arg4;
- (_Bool)sendPraise:(id)arg1 memberid:(long long)arg2 praises:(long long)arg3;
- (_Bool)sendComment:(id)arg1 memberid:(long long)arg2 content:(id)arg3 ts:(long long)arg4;
- (_Bool)sendLiveInfo:(id)arg1 liveMemberID:(id)arg2 status:(long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (_Bool)sendLiveInfo:(id)arg1 liveMemberID:(id)arg2 status:(long long)arg3;
- (void)requestHistoryMessage:(id)arg1 success:(CDUnknownBlockType)arg2;
- (_Bool)logoutLiveRoom;
- (void)setCurrentLiveId:(id)arg1;
- (_Bool)loginLiveRoom:(id)arg1;
- (void)stopChatServer;
- (_Bool)hasConnectServer;
- (void)reconnect;
- (void)startChatServer;
- (void)setChatTextHost:(id)arg1;
- (void)restartIfNeeded;
- (void)startIfLogin;
- (void)p_handlerNetChange:(id)arg1;
- (id)init;

@end

