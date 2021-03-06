//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMCustomSearchBarDelegate-Protocol.h"
#import "XMNoDataTableViewCellDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"

@class MBProgressHUD, NSMutableArray, NSString, UIButton, UIView, XMCustomSearchBar, XMNRequest, XMTableViewDataSource;
@protocol XMPLEditAddAlbumDelegate;

@interface XMPLEditSearchAlbumViewController : XMBaseTabelVC <XMTableViewDelegateProtocol, XMCustomSearchBarDelegate, XMNoDataTableViewCellDelegate>
{
    _Bool _isEdit;
    long long _pageId;
    long long _maxPageId;
    id <XMPLEditAddAlbumDelegate> _delegate;
    long long _selectedAlbumsCount;
    XMTableViewDataSource *_tableDataSource;
    XMCustomSearchBar *_searchBar;
    UIView *_searchView;
    UIButton *_finishButton;
    NSMutableArray *_addAlbumsArray;
    NSMutableArray *_searchArray;
    XMNRequest *_listRequest;
    XMNRequest *_repostRequest;
    long long _hearListId;
    NSString *_keyword;
    MBProgressHUD *_hud;
    unsigned long long _hearListType;
    long long _maxNumber;
}

@property(nonatomic) long long maxNumber; // @synthesize maxNumber=_maxNumber;
@property(nonatomic) unsigned long long hearListType; // @synthesize hearListType=_hearListType;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long hearListId; // @synthesize hearListId=_hearListId;
@property(retain, nonatomic) XMNRequest *repostRequest; // @synthesize repostRequest=_repostRequest;
@property(retain, nonatomic) XMNRequest *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) NSMutableArray *searchArray; // @synthesize searchArray=_searchArray;
@property(retain, nonatomic) NSMutableArray *addAlbumsArray; // @synthesize addAlbumsArray=_addAlbumsArray;
@property(retain, nonatomic) UIButton *finishButton; // @synthesize finishButton=_finishButton;
@property(retain, nonatomic) UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) XMCustomSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) long long selectedAlbumsCount; // @synthesize selectedAlbumsCount=_selectedAlbumsCount;
@property(nonatomic) __weak id <XMPLEditAddAlbumDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onNoDataActionButtonClicked:(id)arg1;
- (void)addRightButton;
- (void)setupSearchView;
- (void)customSearchBarClearDidClick:(id)arg1;
- (void)customSearchBarShouldBeginEditing:(id)arg1;
- (void)customSearchBarSearchButtonClicked:(id)arg1;
- (void)customSearchBarTextDidChange:(id)arg1;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (id)parseListObjsWithResponseData:(id)arg1;
- (void)finishButtonDidClick;
- (void)handleEmptyView:(id)arg1;
- (void)fetchSearchList:(long long)arg1;
- (void)updateRightButtonStatus;
- (void)loadMore;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEditStatus:(_Bool)arg1 listId:(long long)arg2 listType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

