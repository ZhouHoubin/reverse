//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBVideoPlaybackQualityHistoryDataSource : NSObject
{
    NSString *_url;
    NSString *_qualityLabel;
    NSString *_label;
    NSDictionary *_transcodeInfo;
    double _cumulativePlaybackDuration;
}

@property(nonatomic) double cumulativePlaybackDuration; // @synthesize cumulativePlaybackDuration=_cumulativePlaybackDuration;
@property(copy, nonatomic) NSDictionary *transcodeInfo; // @synthesize transcodeInfo=_transcodeInfo;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

