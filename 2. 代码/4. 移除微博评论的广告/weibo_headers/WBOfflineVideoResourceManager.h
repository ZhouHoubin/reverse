//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, WBFResourceLoaderManager, WBOfflineVideoStatusCacheInfo;
@protocol OS_dispatch_queue;

@interface WBOfflineVideoResourceManager : NSObject
{
    _Bool _hasRead;
    NSString *_cacheDirectory;
    NSArray *_videoInfoArray;
    NSMutableDictionary *_statusCacheDict;
    WBOfflineVideoStatusCacheInfo *_statusCacheInfo;
    unsigned long long _maxCacheStatusCount;
    NSString *_expireTime;
    WBFResourceLoaderManager *_resourceLoader;
    NSMutableDictionary *_taskDict;
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
@property(retain, nonatomic) WBFResourceLoaderManager *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) NSString *expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned long long maxCacheStatusCount; // @synthesize maxCacheStatusCount=_maxCacheStatusCount;
@property(retain, nonatomic) WBOfflineVideoStatusCacheInfo *statusCacheInfo; // @synthesize statusCacheInfo=_statusCacheInfo;
@property(retain, nonatomic) NSMutableDictionary *statusCacheDict; // @synthesize statusCacheDict=_statusCacheDict;
@property(retain, nonatomic) NSArray *videoInfoArray; // @synthesize videoInfoArray=_videoInfoArray;
@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead=_hasRead;
- (void).cxx_destruct;
- (id)cacheKeysPath;
- (id)cachedVideoMidsPath;
- (id)statusDictPath;
- (id)fullPathWithRelativeDirectory:(id)arg1;
- (id)relativeCacheDirectory;
- (id)videoCacheKeysWithPath:(id)arg1;
- (void)updateCacheKeys:(id)arg1 path:(id)arg2;
- (id)latestCachedVideoMidsArray;
- (id)currentCachedVideoMidsArray;
- (id)cachedVidoeMidsArrayWithPath:(id)arg1;
- (id)latestCachedVideoMidsPath;
- (id)currentCachedVideoMidsPath;
- (id)cachedStatusDictionaryWithDirectoryPath:(id)arg1;
- (id)latestCachedStatusDictionary;
- (id)allCacheDirectories;
- (id)latestCachedStatusInfo;
- (id)latestCachedStatus;
- (void)deleteFileAtPath:(id)arg1;
- (void)createFileWithData:(id)arg1 path:(id)arg2;
- (_Bool)isValidTimeToPerformTask;
- (void)performTaskWithCurrentVideoInfoArray;
- (void)clearDirectoriesWithPath:(id)arg1;
- (void)clearAllDirectoriesExcept:(id)arg1;
- (void)clearLastDirectoryIfNeeded;
- (void)clearLastDirectory;
- (void)createDirectoryWithDict:(id)arg1;
- (void)updateVideoInfoCachedStatus;
- (void)updateStatusCacheDataToFile;
- (void)resumeOfflineCacheTasks;
- (void)_fetchData;
- (void)fetchDataIfNeeded;
- (void)updateOfflineVideoItem:(id)arg1;
- (id)cachedStatusesWithVideoCached;
- (id)cachedStatuses;
- (void)cleanAllCache;
- (_Bool)shouldFinishDownloadingWithStatus:(long long)arg1;
- (void)storageDidFinish:(id)arg1;
- (void)applicationEnterForgroundNotificaiton:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)didTrigerRefresh:(id)arg1;
- (void)accountChanged:(id)arg1;
- (id)init;
- (void)dealloc;

@end

