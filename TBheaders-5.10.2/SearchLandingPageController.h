//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMViewController.h"

@class ItemSearchViewModel, NSString;

@interface SearchLandingPageController : TMViewController
{
    ItemSearchViewModel *_itemSearchVM;	// 16 = 0x10
    float _navigationBarHeight;	// 24 = 0x18
    NSString *_q;	// 32 = 0x20
    NSString *_extendKey;	// 40 = 0x28
    NSString *_extendValue;	// 48 = 0x30
    NSString *_pageID;	// 56 = 0x38
}

@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *extendValue; // @synthesize extendValue=_extendValue;
@property(copy, nonatomic) NSString *extendKey; // @synthesize extendKey=_extendKey;
@property(copy, nonatomic) NSString *q; // @synthesize q=_q;
@property(nonatomic) float navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
- (void).cxx_destruct;
- (void)ajustLayout:(id)arg1;
- (void)buildPage;
- (void)viewDidLoad;

@end

