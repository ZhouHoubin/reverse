//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMAnchorDeskMissionInfo : XMModel
{
    unsigned long long _missionId;
    unsigned long long _missionCode;
    NSString *_content;
    long long _type;
    unsigned long long _count;
    unsigned long long _doneCount;
    long long _status;
    unsigned long long _score;
    NSString *_icon;
    NSString *_buttonContent;
    NSString *_buttonLink;
    unsigned long long _uid;
}

@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *buttonLink; // @synthesize buttonLink=_buttonLink;
@property(retain, nonatomic) NSString *buttonContent; // @synthesize buttonContent=_buttonContent;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long score; // @synthesize score=_score;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long doneCount; // @synthesize doneCount=_doneCount;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long missionCode; // @synthesize missionCode=_missionCode;
@property(nonatomic) unsigned long long missionId; // @synthesize missionId=_missionId;
- (void).cxx_destruct;

@end

