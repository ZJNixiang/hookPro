//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBICameraSetting : NSObject
{
    _Bool _mutiSelection;	// 8 = 0x8
    _Bool _needsThumbnail;	// 9 = 0x9
    _Bool _autoSaveToAlbum;	// 10 = 0xa
    _Bool _isIncrementalSelection;	// 11 = 0xb
    int _maxSelection;	// 12 = 0xc
    int _maxWaterMark;	// 16 = 0x10
    long long _cropOption;	// 24 = 0x18
    long long _filterOption;	// 32 = 0x20
    long long _waterMarkOption;	// 40 = 0x28
    NSArray *_selectedArray;	// 48 = 0x30
    struct CGSize _cropRatio;	// 56 = 0x38
    struct CGSize _imageMaxSize;	// 72 = 0x48
    struct CGSize _thumenailSize;	// 88 = 0x58
}

@property(retain, nonatomic) NSArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(nonatomic) _Bool isIncrementalSelection; // @synthesize isIncrementalSelection=_isIncrementalSelection;
@property(nonatomic) _Bool autoSaveToAlbum; // @synthesize autoSaveToAlbum=_autoSaveToAlbum;
@property(nonatomic) struct CGSize thumenailSize; // @synthesize thumenailSize=_thumenailSize;
@property(nonatomic) _Bool needsThumbnail; // @synthesize needsThumbnail=_needsThumbnail;
@property(nonatomic) int maxWaterMark; // @synthesize maxWaterMark=_maxWaterMark;
@property(nonatomic) long long waterMarkOption; // @synthesize waterMarkOption=_waterMarkOption;
@property(nonatomic) long long filterOption; // @synthesize filterOption=_filterOption;
@property(nonatomic) struct CGSize imageMaxSize; // @synthesize imageMaxSize=_imageMaxSize;
@property(nonatomic) struct CGSize cropRatio; // @synthesize cropRatio=_cropRatio;
@property(nonatomic) long long cropOption; // @synthesize cropOption=_cropOption;
@property(nonatomic) int maxSelection; // @synthesize maxSelection=_maxSelection;
@property(nonatomic) _Bool mutiSelection; // @synthesize mutiSelection=_mutiSelection;
- (void).cxx_destruct;
- (id)init;

@end

