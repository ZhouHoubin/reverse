//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView;

@interface XMTabCell : UICollectionViewCell
{
    UIView *_badgeView;
    UILabel *_tabLabel;
    UIView *_bottomTag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomTag; // @synthesize bottomTag=_bottomTag;
@property(retain, nonatomic) UILabel *tabLabel; // @synthesize tabLabel=_tabLabel;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

