//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBOrderKitEventBridgeProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, StyleKitContext, TBOrderKitEventBridge, TBOrderServiceOperation, TBOrderTailView, UITableView;
@protocol TBAdaptationProtocol, TBOrderKitDataSourceProtocol;

@interface TBOrderKitDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, TBOrderKitEventBridgeProtocol>
{
    _Bool _isLoading;	// 8 = 0x8
    _Bool _requestFail;	// 9 = 0x9
    id <TBOrderKitDataSourceProtocol> _sourceTarget;	// 16 = 0x10
    UITableView *_orderTable;	// 24 = 0x18
    NSMutableArray *_dataArray;	// 32 = 0x20
    TBOrderKitEventBridge *_eventBridge;	// 40 = 0x28
    TBOrderServiceOperation *_orderOperation;	// 48 = 0x30
    TBOrderTailView *_tailView;	// 56 = 0x38
    id <TBAdaptationProtocol> _adapter;	// 64 = 0x40
    NSMutableDictionary *_cellMap;	// 72 = 0x48
    StyleKitContext *_styleKitContext;	// 80 = 0x50
}

@property(nonatomic, getter=isRequestFail) _Bool requestFail; // @synthesize requestFail=_requestFail;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) NSMutableDictionary *cellMap; // @synthesize cellMap=_cellMap;
@property(nonatomic) __weak id <TBAdaptationProtocol> adapter; // @synthesize adapter=_adapter;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TBOrderTailView *tailView; // @synthesize tailView=_tailView;
@property(retain, nonatomic) TBOrderServiceOperation *orderOperation; // @synthesize orderOperation=_orderOperation;
@property(retain, nonatomic) TBOrderKitEventBridge *eventBridge; // @synthesize eventBridge=_eventBridge;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak UITableView *orderTable; // @synthesize orderTable=_orderTable;
@property(nonatomic) __weak id <TBOrderKitDataSourceProtocol> sourceTarget; // @synthesize sourceTarget=_sourceTarget;
- (void).cxx_destruct;
- (void)processTailInfo:(id)arg1 cause:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)hideOperationPopView;
- (_Bool)isUseTips;
- (void)ctrlClicked:(id)arg1 orderId:(id)arg2 orderType:(id)arg3 isB2C:(_Bool)arg4;
- (void)doCancelOrderWithOperation:(id)arg1;
- (void)doAlertMtopWithOperation:(id)arg1;
- (void)processCheckEventWithResult:(id)arg1;
- (void)processCurrentViewURLEventWithResult:(id)arg1;
- (void)processURLEventWithResult:(id)arg1;
- (void)processNativeURLEventWithResult:(id)arg1;
- (void)processToastEventWithResult:(id)arg1;
- (void)processAlertEventWithResult:(id)arg1;
- (void)processMtopEventWithResult:(id)arg1;
- (void)processNativeEventWithResult:(id)arg1;
- (id)cellNameFromModel:(id)arg1;
- (Class)cellClassFromModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadStyleKit;
- (id)initWithTarget:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
