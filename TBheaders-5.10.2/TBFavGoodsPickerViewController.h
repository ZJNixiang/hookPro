//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBFavPageControlDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, TBFavDetailedListTemplate, TBFavPageControl, TBFavoriteCategory, UIButton, UIScrollView, UISearchBar;

@interface TBFavGoodsPickerViewController : UIViewController <TBFavPageControlDelegate, UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate>
{
    _Bool _iOS8OrLaterVersion;	// 8 = 0x8
    TBFavoriteCategory *_category;	// 16 = 0x10
    TBFavDetailedListTemplate *_aTemplate;	// 24 = 0x18
    CDUnknownBlockType _tbFinishedNavigationHandler;	// 32 = 0x20
    NSArray *_collertionViewModels;	// 40 = 0x28
    TBFavPageControl *_pageControl;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    NSMutableArray *_collectionViews;	// 72 = 0x48
    NSMutableSet *_selectedGoodSet;	// 80 = 0x50
    UISearchBar *_searchBar;	// 88 = 0x58
    UIButton *_searchBarDismissButton;	// 96 = 0x60
    unsigned long long _selectMaximum;	// 104 = 0x68
}

@property(nonatomic) unsigned long long selectMaximum; // @synthesize selectMaximum=_selectMaximum;
@property(retain, nonatomic) UIButton *searchBarDismissButton; // @synthesize searchBarDismissButton=_searchBarDismissButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableSet *selectedGoodSet; // @synthesize selectedGoodSet=_selectedGoodSet;
@property(nonatomic) _Bool iOS8OrLaterVersion; // @synthesize iOS8OrLaterVersion=_iOS8OrLaterVersion;
@property(retain, nonatomic) NSMutableArray *collectionViews; // @synthesize collectionViews=_collectionViews;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TBFavPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *collertionViewModels; // @synthesize collertionViewModels=_collertionViewModels;
@property(copy, nonatomic) CDUnknownBlockType tbFinishedNavigationHandler; // @synthesize tbFinishedNavigationHandler=_tbFinishedNavigationHandler;
@property(retain, nonatomic) TBFavDetailedListTemplate *aTemplate; // @synthesize aTemplate=_aTemplate;
@property(retain, nonatomic) TBFavoriteCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (unsigned long long)detailedListRestCount;
- (_Bool)shouldSelectMore;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dismissSearchBar;
- (void)presentSearchBar;
- (void)triggerReloadWithKeywords:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarDismissButtonAction:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)confirmToPopViewController;
- (void)syncSelectionStateFrom:(id)arg1 byID:(id)arg2 withState:(_Bool)arg3;
- (void)displayCell:(id)arg1 with:(id)arg2;
- (void)leftBarButtonItemClicked:(id)arg1;
- (void)rightBarButtonItemClicked:(id)arg1;
- (void)setupLeftButtonItemState;
- (void)setupRightButtonItemState;
- (void)setupNavigationBar;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)currentPageButtonClickedAgain:(unsigned long long)arg1;
- (void)pageMovedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)backPanGestureRecoginzed;
- (void)dealloc;
- (void)setupSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
