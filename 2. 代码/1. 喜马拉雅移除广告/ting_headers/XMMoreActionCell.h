//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, UIImageView, UILabel, UIView, XMMoreActionItem;

@interface XMMoreActionCell : UIButton
{
    XMMoreActionItem *_item;
    UIImageView *_titleIcon;
    UILabel *_titleTextLabel;
    UILabel *_subTitleTextLabel;
    UIImageView *_arrow;
    UIView *_divideLine;
    CAShapeLayer *_lineShapeLayer;
}

+ (id)moreActionCellWithItem:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *lineShapeLayer; // @synthesize lineShapeLayer=_lineShapeLayer;
@property(retain, nonatomic) UIView *divideLine; // @synthesize divideLine=_divideLine;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *subTitleTextLabel; // @synthesize subTitleTextLabel=_subTitleTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(retain, nonatomic) UIImageView *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(retain, nonatomic) XMMoreActionItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setup;

@end

