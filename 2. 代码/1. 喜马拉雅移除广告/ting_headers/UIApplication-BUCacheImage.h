//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSMutableDictionary;

@interface UIApplication (BUCacheImage)
- (void)bu_zf_cacheImage:(id)arg1 forRequest:(id)arg2;
- (void)bu_zf_cacheFailRequest:(id)arg1;
- (unsigned long long)bu_zf_failTimesForRequest:(id)arg1;
- (id)bu_zf_cacheImageForRequest:(id)arg1;
- (void)zf_clearDiskCaches;
- (void)zf_clearCache;
- (void)setBu_zf_cacheFaileTimes:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *bu_zf_cacheFaileTimes;
@end

