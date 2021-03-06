//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineItemViewModel.h"

@class NSMutableArray, UIColor, WBStatus, WBStatusAboveContentViewModel, WBStatusBelowContentViewModel, WBStatusContentViewModel, WBStatusFooterViewModel, WBStatusHeaderViewModel, WBStatusVirtualCell;

@interface WBStatusViewModel : WBTimelineItemViewModel
{
    _Bool _useInSeperateCell;
    _Bool _itemTypeBgImageViewHidden;
    _Bool _deleted;
    WBStatus *_status;
    WBStatusVirtualCell *_virtualCell;
    WBStatusHeaderViewModel *_headerViewModel;
    WBStatusAboveContentViewModel *_aboveContentViewModel;
    WBStatusContentViewModel *_contentViewModel;
    WBStatusBelowContentViewModel *_belowContentViewModel;
    WBStatusFooterViewModel *_footerViewModel;
    UIColor *_backgroudColorForItemTypeBgImageView;
    UIColor *_highLightedBackgroudColorForItemTypeBgImageView;
    UIColor *_backgroundColorForLineOfItemTypeBgImageView;
    UIColor *_highLightedBackgroundColorForItemContentBgImageView;
    unsigned long long _internalRenderVersion;
    NSMutableArray *_internalSubViewModels;
    struct CGRect _itemTypeBgImageViewFrame;
    struct CGRect _topLineOfItemTypeBgImageViewFrame;
    struct CGRect _actionButtonsViewFrame;
    struct CGRect _actionButtonBottomLineFrame;
    struct CGRect _itemContentBgImageViewFrame;
}

+ (void)statusesGroup:(id)arg1;
+ (id)statusViewModelsWithStatus:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3;
+ (Class)textContentViewClass;
+ (Class)contentViewClass;
+ (void)setSpecialBackgroundServerConfigs:(id)arg1;
+ (id)viewModelWithModel:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3;
@property(retain, nonatomic) NSMutableArray *internalSubViewModels; // @synthesize internalSubViewModels=_internalSubViewModels;
@property(nonatomic) unsigned long long internalRenderVersion; // @synthesize internalRenderVersion=_internalRenderVersion;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) UIColor *highLightedBackgroundColorForItemContentBgImageView; // @synthesize highLightedBackgroundColorForItemContentBgImageView=_highLightedBackgroundColorForItemContentBgImageView;
@property(nonatomic) struct CGRect itemContentBgImageViewFrame; // @synthesize itemContentBgImageViewFrame=_itemContentBgImageViewFrame;
@property(nonatomic) struct CGRect actionButtonBottomLineFrame; // @synthesize actionButtonBottomLineFrame=_actionButtonBottomLineFrame;
@property(nonatomic) struct CGRect actionButtonsViewFrame; // @synthesize actionButtonsViewFrame=_actionButtonsViewFrame;
@property(retain, nonatomic) UIColor *backgroundColorForLineOfItemTypeBgImageView; // @synthesize backgroundColorForLineOfItemTypeBgImageView=_backgroundColorForLineOfItemTypeBgImageView;
@property(nonatomic) struct CGRect topLineOfItemTypeBgImageViewFrame; // @synthesize topLineOfItemTypeBgImageViewFrame=_topLineOfItemTypeBgImageViewFrame;
@property(retain, nonatomic) UIColor *highLightedBackgroudColorForItemTypeBgImageView; // @synthesize highLightedBackgroudColorForItemTypeBgImageView=_highLightedBackgroudColorForItemTypeBgImageView;
@property(retain, nonatomic) UIColor *backgroudColorForItemTypeBgImageView; // @synthesize backgroudColorForItemTypeBgImageView=_backgroudColorForItemTypeBgImageView;
@property(nonatomic) struct CGRect itemTypeBgImageViewFrame; // @synthesize itemTypeBgImageViewFrame=_itemTypeBgImageViewFrame;
@property(nonatomic) _Bool itemTypeBgImageViewHidden; // @synthesize itemTypeBgImageViewHidden=_itemTypeBgImageViewHidden;
@property(retain, nonatomic) WBStatusFooterViewModel *footerViewModel; // @synthesize footerViewModel=_footerViewModel;
@property(retain, nonatomic) WBStatusBelowContentViewModel *belowContentViewModel; // @synthesize belowContentViewModel=_belowContentViewModel;
@property(retain, nonatomic) WBStatusContentViewModel *contentViewModel; // @synthesize contentViewModel=_contentViewModel;
@property(retain, nonatomic) WBStatusAboveContentViewModel *aboveContentViewModel; // @synthesize aboveContentViewModel=_aboveContentViewModel;
@property(retain, nonatomic) WBStatusHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(readonly, nonatomic) WBStatusVirtualCell *virtualCell; // @synthesize virtualCell=_virtualCell;
@property(readonly, nonatomic) _Bool useInSeperateCell; // @synthesize useInSeperateCell=_useInSeperateCell;
@property(nonatomic) __weak WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)reusableCellOfTableView:(id)arg1;
- (Class)tableViewCellClass;
- (_Bool)shouldShowSmallCardForcily;
- (id)user;
- (id)accessibilityQuotedItemValue;
- (id)accessibilityItemValue;
- (id)readableTimeText;
- (_Bool)isShowTime;
- (id)displayTimeLineTimeTextWithColor:(struct CGColor **)arg1;
- (id)displayTimeText;
- (id)displayTimeTextWithTextColor:(struct CGColor **)arg1;
- (_Bool)shouldShowAttitudeBar;
- (_Bool)shouldShowCard;
- (_Bool)shouldShowLikeTags;
- (_Bool)shouldShowDarwinTags;
- (_Bool)shouldShowItemTypes;
- (_Bool)noBottomInset;
- (_Bool)shouldShowSrcTextContent;
- (_Bool)shouldShowRtFalseInfo;
- (_Bool)shouldShowSrcFalseInfo;
- (_Bool)shouldShowAvatar;
- (_Bool)shouldShowHeader;
- (id)displayTopRightCommonButton;
- (_Bool)showsReadCount;
- (id)actionButtonTypes;
- (_Bool)shouldShowContentAuth;
- (_Bool)shouldShowExtendCards;
- (_Bool)shouldShowFollowingCards;
- (_Bool)shouldShowSpecialBgImageView;
- (_Bool)shouldShowRollingUnionArea;
- (_Bool)shouldShowUnionArea;
- (_Bool)shouldShowThreeComments;
- (_Bool)shouldShowProducts;
- (_Bool)shouldShowQuotedItemProducts;
- (_Bool)shouldShowItemProducts;
- (_Bool)shouldShowImageIndicator;
- (_Bool)shouldShowImages;
- (_Bool)shouldShowQuotedItemImages;
- (_Bool)shouldShowItemImages;
- (_Bool)shouldShowMapImage;
- (_Bool)showQuotedVideo;
- (_Bool)shouldShowQuotedHeader;
- (_Bool)showVideo;
- (_Bool)shouldShowVideoExtLabel;
- (_Bool)shouldShowQuotedItemActionButtons;
- (_Bool)shouldShowActionButtons;
- (_Bool)shouldShowRetweetEditFlag;
- (_Bool)shouldShowEditedFlag;
- (_Bool)shouldShowSourceText;
- (id)displaySourceScheme;
- (int)displaySourceType;
- (id)displaySourceWithFrom;
- (id)displaySource;
- (id)specialBackgroundImage;
@property(readonly, nonatomic) struct WBStatusViewModelRenderVersion renderVersion;
- (void)updateRenderVersion;
- (void)updateVipReminderRelatedData;
- (struct CGRect)itemContentBgImageViewButtomLineFrmaeForLineStyle:(unsigned long long)arg1;
- (struct CGRect)itemContentBgImageViewTopLineFrmaeForLineStyle:(unsigned long long)arg1;
- (id)statusTypeTextColors;
- (id)statusTypeTexts;
- (_Bool)shouldShowRtStatus;
- (_Bool)shouldShowRtTextContent;
- (_Bool)shouldShowStatusTextContent;
- (_Bool)shouldShowExtraActionButton;
- (void)buildSubViewModelsIfNeed;
- (id)subViewModels;
@property(nonatomic) unsigned long long drawingOption;
- (void)updateViewModel;
- (void)setViewModelStateRecursively:(unsigned long long)arg1;
- (double)cellHeight;
- (double)contentHeight;
- (void)addSubViewModel:(id)arg1;
- (void)updateWithTimelineItem:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3;
- (id)initWithTimelineItem:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3;
- (id)initWithTimelineItem:(id)arg1 contentWidth:(double)arg2 extraInfo:(id)arg3 useInSeperateCell:(_Bool)arg4;

@end

