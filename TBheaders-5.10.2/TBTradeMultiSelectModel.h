//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSDictionary, NSMutableArray;

@interface TBTradeMultiSelectModel : TBTradeComponentModel
{
    NSMutableArray *_groups;	// 8 = 0x8
    NSDictionary *_index;	// 16 = 0x10
}

@property(retain, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (_Bool)isEqualsToPrevSelectedIds:(id)arg1;
- (_Bool)isValidSelectedIds:(id)arg1;
- (_Bool)isInSameGroup:(id)arg1:(id)arg2;
- (_Bool)isInRequiredGroup:(id)arg1;
- (void)buildIndex:(id)arg1;
- (void)loadGroupArray:(id)arg1;
- (void)setSelectedIds:(id)arg1;
- (void)setSingleSelectedId:(id)arg1;
- (id)selectedIds;
- (id)title;
- (id)validate;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end

