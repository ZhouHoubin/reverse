//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString;

@interface XMDubShowProgramDubbingCollectionCellModel : XMModel
{
    long long _followed;
    NSString *_avaterStr;
    NSString *_titleStr;
    unsigned long long _favorites;
    unsigned long long _uid;
    NSArray *_works;
}

+ (id)xmm_modelContainerPropertyGenericClass;
+ (id)xmm_modelCustomPropertyMapper;
@property(retain, nonatomic) NSArray *works; // @synthesize works=_works;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned long long favorites; // @synthesize favorites=_favorites;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(copy, nonatomic) NSString *avaterStr; // @synthesize avaterStr=_avaterStr;
@property(nonatomic) long long followed; // @synthesize followed=_followed;
- (void).cxx_destruct;

@end

