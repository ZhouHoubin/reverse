//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMCategoryMetadataModel, XMFindTabThemeModel;

@interface XMFindTabModel : NSObject
{
    _Bool _addToTop;
    _Bool _hideInReview;
    _Bool _defaultSelected;
    _Bool _hiddenInHome;
    _Bool _hiddenSearchBox;
    long long _itemType;
    long long _cornerMark;
    long long _recommendType;
    NSString *_tabId;
    NSString *_title;
    NSString *_unactiveCoverPath;
    NSString *_activeCoverPath;
    NSString *_url;
    NSString *_citycode;
    long long _categoryId;
    unsigned long long _itingIconStyle;
    NSString *_iting;
    NSString *_itingTitle;
    XMCategoryMetadataModel *_metadata;
    NSString *_specialHeaderColor;
    NSString *_specialTabTheme;
    XMFindTabThemeModel *_specialThemeModel;
    NSString *_headerBGColor;
    unsigned long long _themeStyle;
    XMFindTabThemeModel *_themeModel;
}

+ (id)findTabItemTypeMap;
@property(retain, nonatomic) XMFindTabThemeModel *themeModel; // @synthesize themeModel=_themeModel;
@property(nonatomic) unsigned long long themeStyle; // @synthesize themeStyle=_themeStyle;
@property(copy, nonatomic) NSString *headerBGColor; // @synthesize headerBGColor=_headerBGColor;
@property(retain, nonatomic) XMFindTabThemeModel *specialThemeModel; // @synthesize specialThemeModel=_specialThemeModel;
@property(copy, nonatomic) NSString *specialTabTheme; // @synthesize specialTabTheme=_specialTabTheme;
@property(copy, nonatomic) NSString *specialHeaderColor; // @synthesize specialHeaderColor=_specialHeaderColor;
@property(nonatomic) _Bool hiddenSearchBox; // @synthesize hiddenSearchBox=_hiddenSearchBox;
@property(nonatomic) _Bool hiddenInHome; // @synthesize hiddenInHome=_hiddenInHome;
@property(nonatomic) _Bool defaultSelected; // @synthesize defaultSelected=_defaultSelected;
@property(retain, nonatomic) XMCategoryMetadataModel *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool hideInReview; // @synthesize hideInReview=_hideInReview;
@property(copy, nonatomic) NSString *itingTitle; // @synthesize itingTitle=_itingTitle;
@property(copy, nonatomic) NSString *iting; // @synthesize iting=_iting;
@property(nonatomic) unsigned long long itingIconStyle; // @synthesize itingIconStyle=_itingIconStyle;
@property(nonatomic) _Bool addToTop; // @synthesize addToTop=_addToTop;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *activeCoverPath; // @synthesize activeCoverPath=_activeCoverPath;
@property(copy, nonatomic) NSString *unactiveCoverPath; // @synthesize unactiveCoverPath=_unactiveCoverPath;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(nonatomic) long long recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) long long cornerMark; // @synthesize cornerMark=_cornerMark;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)cacheTabVcKey;
- (id)itemTypeString;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)cornerMarkTypeWithString:(id)arg1;
- (long long)recTypeWithString:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;
- (id)headerCustomColor;
- (unsigned long long)tabThemeStyle;
- (id)tabThemeModel;

@end

