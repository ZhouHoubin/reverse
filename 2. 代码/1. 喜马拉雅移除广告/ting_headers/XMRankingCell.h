//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UILabel, XMRankItem, XMWebImageView;

@interface XMRankingCell : XMTableViewCell
{
    XMRankItem *_rank;
    XMWebImageView *_coverView;
    UILabel *_titleLab;
    UILabel *_firstResultLab;
    UILabel *_secondResualtLab;
}

+ (double)height;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UILabel *secondResualtLab; // @synthesize secondResualtLab=_secondResualtLab;
@property(retain, nonatomic) UILabel *firstResultLab; // @synthesize firstResultLab=_firstResultLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) XMRankItem *rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

