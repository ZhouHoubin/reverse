//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WeiboCubeUGDixManager-Protocol.h"

@class NSString;

@interface WBUGBuinessCubeProvider : NSObject <WeiboCubeUGDixManager>
{
}

+ (id)sharedProvider;
- (void)getLoginTokenWithScene:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)getPreAuthWithScene:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)getPrecodeWithScene:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (long long)networkType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

