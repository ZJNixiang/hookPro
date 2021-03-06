//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class FMSearchBar, GameCenterIndexTopBanner, MMWebImageView, NSArray;

@interface GameCenterHeaderView : MMUIView
{
    double _redDotMoveX;
    int _sourceScene;
    NSArray *_cellItems;
    FMSearchBar *_searchBar;
    GameCenterIndexTopBanner *_topBanner;
    MMWebImageView *_topBannerBackgroundView;
    MMWebImageView *_topBannerBigPicView;
    MMWebImageView *_topBannerSmallPicView;
    double _searchBarLastOriginY;
    id <GameCenterHeaderActionDelegate> _delegate;
}

@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) __weak id <GameCenterHeaderActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double searchBarLastOriginY; // @synthesize searchBarLastOriginY=_searchBarLastOriginY;
@property(retain, nonatomic) MMWebImageView *topBannerSmallPicView; // @synthesize topBannerSmallPicView=_topBannerSmallPicView;
@property(retain, nonatomic) MMWebImageView *topBannerBigPicView; // @synthesize topBannerBigPicView=_topBannerBigPicView;
@property(retain, nonatomic) MMWebImageView *topBannerBackgroundView; // @synthesize topBannerBackgroundView=_topBannerBackgroundView;
@property(retain, nonatomic) GameCenterIndexTopBanner *topBanner; // @synthesize topBanner=_topBanner;
@property(retain, nonatomic) FMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *cellItems; // @synthesize cellItems=_cellItems;
- (void).cxx_destruct;
- (void)topBannerBicPicExposureReport;
- (void)adjustLayout;
- (_Bool)pullUpToBigPic;
- (_Bool)scrollDownToSmallPic;
- (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
- (id)createItemView:(id)arg1;
- (void)onTopBannerBigPicClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (double)getRedDotMoveX:(id)arg1;
- (id)getRedDotView:(id)arg1;
- (void)addUserActionButtons;
- (void)initTopBannerBackgroupView;
- (double)setViewHeight;
- (void)setSearchBarBackground;
- (id)initWithItems:(id)arg1 SearchBar:(id)arg2 UserActionItem:(id)arg3 SourceScene:(int)arg4;

@end

