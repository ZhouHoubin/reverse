//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TBLiveStreamManager : NSObject
{
    _Bool _fromLiveHomeUrl;
    _Bool _useH265;
    _Bool _useNewPlayCtrl;
    _Bool _h265;
    _Bool _rateAdapte;
    NSString *_currentLiveStreamUrl;
    NSArray *_liveUrlList;
    unsigned long long _liveStreamCount;
    unsigned long long _liveStreamIndex;
    NSDictionary *_streamSEIData;
}

@property(retain, nonatomic) NSDictionary *streamSEIData; // @synthesize streamSEIData=_streamSEIData;
@property(nonatomic) unsigned long long liveStreamIndex; // @synthesize liveStreamIndex=_liveStreamIndex;
@property(nonatomic) unsigned long long liveStreamCount; // @synthesize liveStreamCount=_liveStreamCount;
@property(retain, nonatomic) NSArray *liveUrlList; // @synthesize liveUrlList=_liveUrlList;
@property(nonatomic) _Bool rateAdapte; // @synthesize rateAdapte=_rateAdapte;
@property(nonatomic) _Bool h265; // @synthesize h265=_h265;
@property(nonatomic) _Bool useNewPlayCtrl; // @synthesize useNewPlayCtrl=_useNewPlayCtrl;
@property(nonatomic) _Bool useH265; // @synthesize useH265=_useH265;
@property(copy, nonatomic) NSString *currentLiveStreamUrl; // @synthesize currentLiveStreamUrl=_currentLiveStreamUrl;
@property(nonatomic, getter=isFromLiveHomeUrl) _Bool fromLiveHomeUrl; // @synthesize fromLiveHomeUrl=_fromLiveHomeUrl;
- (void).cxx_destruct;
- (void)clearStreamSEIData;
- (id)getStreamSEIData;
- (void)cacheStreamSEIData:(id)arg1;
- (id)getTBMediaPlayerPlayUrl:(id)arg1;
- (void)downgradeLiveStreamUrlplayerType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeLiveStreamUrl:(long long)arg1 playerType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getLiveStreamItemModelWithIndex:(long long)arg1;
- (void)updateLiveStreamIndex:(long long)arg1;
- (id)getLiveStreamItemModel;
- (id)getCurrentLiveStreamName;
- (id)getCurrentLiveStreamUrl:(long long)arg1;
- (void)updateUrlList:(id)arg1;
- (void)dealloc;
- (id)initWithUrlList:(id)arg1 defaultIndex:(long long)arg2;
- (id)getLiveUrlList;

@end

