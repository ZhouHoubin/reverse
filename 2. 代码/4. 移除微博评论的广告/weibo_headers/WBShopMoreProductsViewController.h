//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SNHTTPRequestOperationWrapper, WBPRLMTableViewWrapper, WBTableView;

@interface WBShopMoreProductsViewController : WBViewController <UITableViewDelegate, UITableViewDataSource, PRLMTableViewWrapperDelegate>
{
    SNHTTPRequestOperationWrapper *_dataWrapper;
    _Bool _isLoadingMore;
    _Bool _hasMore;
    NSString *_pid;
    NSString *_extparam;
    NSString *_lfid;
    NSString *_fid;
    WBViewController *_baseController;
    CDUnknownBlockType _moreScrollBlock;
    WBTableView *_tableView;
    NSMutableArray *_products;
    unsigned long long _page;
    WBPRLMTableViewWrapper *_wrapper;
}

@property(retain, nonatomic) WBPRLMTableViewWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
@property(retain, nonatomic) SNHTTPRequestOperationWrapper *dataWrapper; // @synthesize dataWrapper=_dataWrapper;
@property(retain, nonatomic) WBTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType moreScrollBlock; // @synthesize moreScrollBlock=_moreScrollBlock;
@property(nonatomic) __weak WBViewController *baseController; // @synthesize baseController=_baseController;
@property(retain, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(retain, nonatomic) NSString *lfid; // @synthesize lfid=_lfid;
@property(retain, nonatomic) NSString *extparam; // @synthesize extparam=_extparam;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)fetchMore;
- (void)fetchData;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

