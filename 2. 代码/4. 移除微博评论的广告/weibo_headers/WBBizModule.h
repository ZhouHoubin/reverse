//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMModule.h"

@class WBAdTrouserBeltAdEngine;

@interface WBBizModule : WBMModule
{
    WBAdTrouserBeltAdEngine *_trouserBeltEngine;
}

+ (id)debugPageItem;
@property(retain, nonatomic) WBAdTrouserBeltAdEngine *trouserBeltEngine; // @synthesize trouserBeltEngine=_trouserBeltEngine;
- (void).cxx_destruct;
- (void)moduleDidCombinedUIComponent:(id)arg1;
- (void)module:(id)arg1 registCube:(id)arg2;
- (void)module:(id)arg1 applicationWillEnterForeground:(id)arg2;
- (void)module:(id)arg1 lazySetupWithOptions:(id)arg2;
- (void)module:(id)arg1 setupWithOptions:(id)arg2;
- (void)wbm_pre_main;

@end

