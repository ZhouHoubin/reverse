//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGRenderable.h"

@class NSString;

@interface RNSVGUse : RNSVGRenderable
{
    NSString *_href;
    NSString *_width;
    NSString *_height;
}

@property(retain, nonatomic) NSString *height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;

@end

