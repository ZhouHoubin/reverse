//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHCBModel.h"

@class NSString, NSURL, XMHCapPageOverLay;

@interface XMHCapPageStartModel : XMHCBModel
{
    _Bool _fullscreen;
    _Bool _newPage;
    NSURL *_url;
    NSString *_key;
    XMHCapPageOverLay *_overlay;
    NSString *_target;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)modelPropertyBlacklist;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) XMHCapPageOverLay *overlay; // @synthesize overlay=_overlay;
@property(nonatomic) _Bool newPage; // @synthesize newPage=_newPage;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)modelCustomWillTransformFromDictionary:(id)arg1;

@end

