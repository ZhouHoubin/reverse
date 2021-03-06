//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKVideoEditorDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableString, NSString;

@interface WBVideoEditorLog : NSObject <CKVideoEditorDelegate>
{
    NSMutableDictionary *_dict;
    _Bool _catchException;
    double _start_time;
    unsigned long long _render_frame_count;
    double _render_frame_start_time;
    unsigned long long _render_frame_lag_count;
    NSMutableString *_render_frame_lag_index;
    _Bool _isFirstFrame;
    double _render_total_time;
    _Bool _pause;
    double _pauseDuration;
    double _pauseStartTime;
    _Bool _empty;
}

@property(readonly, nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
- (void).cxx_destruct;
- (id)log;
- (void)videoEditor:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)videoEditor:(id)arg1 willRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
- (void)resume;
- (void)pause;
- (void)updateTimeline:(id)arg1 item:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

