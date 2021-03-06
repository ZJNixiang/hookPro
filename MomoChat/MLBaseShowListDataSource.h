//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString;

@interface MLBaseShowListDataSource : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _hasNextPage;
    _Bool _isTopRefresh;
    _Bool _isCurrentShow;
    _Bool _scrolling;
    int _indexShowListType;
    int _recommendShowType;
    int _tabType;
    long long _currentIndex;
    long long _rowItemCount;
    NSMutableArray *_bannerArray;
    double _cellHorizontalInterval;
    double _emptyCellHeight;
    double _isAuto;
    NSString *_logAction;
    NSString *_sexType;
    double _oldY;
    NSMutableArray *_dataArray;
    CDUnknownBlockType _getDataSuccessHandler;
    CDUnknownBlockType _getDataFailuerHandler;
    CDUnknownBlockType _setTitleBlock;
    CDUnknownBlockType _scrollViewDidEndDeceleratingBlock;
    CDUnknownBlockType _onDidScroll;
    CDUnknownBlockType _onScrollEnd;
    NSString *_requestURL;
    long long _indexPostion;
    NSString *_nextTime;
}

+ (double)getCellHeight;
+ (double)getCellWidth;
@property(retain, nonatomic) NSString *nextTime; // @synthesize nextTime=_nextTime;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) long long indexPostion; // @synthesize indexPostion=_indexPostion;
@property(retain, nonatomic) NSString *requestURL; // @synthesize requestURL=_requestURL;
@property(copy, nonatomic) CDUnknownBlockType onScrollEnd; // @synthesize onScrollEnd=_onScrollEnd;
@property(copy, nonatomic) CDUnknownBlockType onDidScroll; // @synthesize onDidScroll=_onDidScroll;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidEndDeceleratingBlock; // @synthesize scrollViewDidEndDeceleratingBlock=_scrollViewDidEndDeceleratingBlock;
@property(copy, nonatomic) CDUnknownBlockType setTitleBlock; // @synthesize setTitleBlock=_setTitleBlock;
@property(copy, nonatomic) CDUnknownBlockType getDataFailuerHandler; // @synthesize getDataFailuerHandler=_getDataFailuerHandler;
@property(copy, nonatomic) CDUnknownBlockType getDataSuccessHandler; // @synthesize getDataSuccessHandler=_getDataSuccessHandler;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) double oldY; // @synthesize oldY=_oldY;
@property(retain, nonatomic) NSString *sexType; // @synthesize sexType=_sexType;
@property(nonatomic) int recommendShowType; // @synthesize recommendShowType=_recommendShowType;
@property(retain, nonatomic) NSString *logAction; // @synthesize logAction=_logAction;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) double isAuto; // @synthesize isAuto=_isAuto;
@property(nonatomic) double emptyCellHeight; // @synthesize emptyCellHeight=_emptyCellHeight;
@property(nonatomic) _Bool isCurrentShow; // @synthesize isCurrentShow=_isCurrentShow;
@property(nonatomic) int indexShowListType; // @synthesize indexShowListType=_indexShowListType;
@property(nonatomic) double cellHorizontalInterval; // @synthesize cellHorizontalInterval=_cellHorizontalInterval;
@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(nonatomic) long long rowItemCount; // @synthesize rowItemCount=_rowItemCount;
@property(nonatomic) _Bool isTopRefresh; // @synthesize isTopRefresh=_isTopRefresh;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)refreshViewWithDataDictionary:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)getCell:(id)arg1 collectionView:(id)arg2 cellForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reloadLocalData;
- (id)getCacheData;
- (void)saveData:(id)arg1;
- (void)pushRoomByModel:(id)arg1;
- (void)addLog:(id)arg1 index:(long long)arg2;
- (void)bulidBannerDataArray:(long long)arg1;
- (void)getDataFail:(id)arg1;
- (void)getDataError:(id)arg1;
- (void)getDataSuccess:(id)arg1;
- (void)getDataByRefresh:(_Bool)arg1 isAutoRefresh:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)requestParam;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

