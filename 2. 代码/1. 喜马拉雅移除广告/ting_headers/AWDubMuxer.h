//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWDubMuxer : NSObject
{
    struct MuxState *_ms;
    CDUnknownBlockType _blockProgress;
    CDUnknownBlockType _blockCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType blockCompletion; // @synthesize blockCompletion=_blockCompletion;
@property(copy, nonatomic) CDUnknownBlockType blockProgress; // @synthesize blockProgress=_blockProgress;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelExport;
- (void)exportAsynchronouslyWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStreams:(id)arg1 outputPath:(id)arg2;

@end

