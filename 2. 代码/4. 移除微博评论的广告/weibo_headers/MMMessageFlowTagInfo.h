//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface MMMessageFlowTagInfo : WBModelObject
{
    NSString *_title;
    long long _tag_type;
    NSString *_tip_title;
    NSString *_tip_desc;
    NSString *_icon;
}

+ (_Bool)isEnableSettingType:(long long)arg1;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *tip_desc; // @synthesize tip_desc=_tip_desc;
@property(retain, nonatomic) NSString *tip_title; // @synthesize tip_title=_tip_title;
@property(nonatomic) long long tag_type; // @synthesize tag_type=_tag_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

