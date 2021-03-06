//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UIImageView, UILabel;
@protocol XMUserQAFooterCellDelegate;

@interface XMUserQAFooterCell : XMTableViewCell
{
    id <XMUserQAFooterCellDelegate> _delegate;
    UIImageView *_QAIV;
    UILabel *_contentLB;
    UIButton *_askBtn;
}

+ (double)heightForCell;
@property(retain, nonatomic) UIButton *askBtn; // @synthesize askBtn=_askBtn;
@property(retain, nonatomic) UILabel *contentLB; // @synthesize contentLB=_contentLB;
@property(retain, nonatomic) UIImageView *QAIV; // @synthesize QAIV=_QAIV;
@property(nonatomic) __weak id <XMUserQAFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)askBtnTouchUpInside:(id)arg1;
- (void)initWithSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

