//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface WBShopDetailListCell : WBTableViewCell
{
    UIImageView *_moreImg;
    NSString *_iconImg;
    NSString *_text;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) UIImageView *moreImg; // @synthesize moreImg=_moreImg;
- (void).cxx_destruct;
- (void)showList;

@end

