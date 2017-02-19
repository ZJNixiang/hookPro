//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying>
{
    NSMutableArray *_specifiers;
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    BOOL _wantsDebugCallbacks;
}

+ (id)groupIndexWithSpecifiers:(id)arg1;
+ (BOOL)_wantsDebuggingCallbacks;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)_groupSections;
- (unsigned int)indexOfGroupWithID:(id)arg1;
- (id)specifiersInGroupWithID:(id)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroupWithID:(id)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroup:(id)arg1;
- (BOOL)getGroup:(out unsigned int *)arg1 row:(out unsigned int *)arg2 ofSpecifierWithID:(id)arg3;
- (id)indexPathForSpecifierWithID:(id)arg1;
- (id)specifierAtIndexPath:(id)arg1;
- (void)_manuallyFindSection:(out unsigned int *)arg1 row:(out unsigned int *)arg2 forSpecifierAtIndex:(unsigned int)arg3;
- (unsigned int)numberOfRowsInGroupAtIndex:(unsigned int)arg1;
- (void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned int)arg3;
- (id)_tabStringOfDepth:(unsigned int)arg1;
- (unsigned int)indexOfGroupAtGroupIndex:(unsigned int)arg1;
- (id)specifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned int)arg1;
- (id)indexPathForSpecifierAtIndex:(unsigned int)arg1 forInsertion:(BOOL)arg2;
- (unsigned int)_indexOfSpecifierInSection:(unsigned int)arg1 row:(unsigned int)arg2 forInsertion:(BOOL)arg3;
- (void)_getSection:(out unsigned int *)arg1 row:(out unsigned int *)arg2 forSpecifierAtIndex:(unsigned int)arg3 forInsertion:(BOOL)arg4 allowGroupSpecifiers:(BOOL)arg5;
- (void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)_getSection:(out unsigned int *)arg1 row:(out unsigned int *)arg2 forSpecifierAtIndex:(unsigned int)arg3 forInsertion:(BOOL)arg4;
- (void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2;
- (void)reloadWithSpecifiers:(id)arg1;
- (id)_ungroupedPrefixSpecifiers;
- (id)_initForCopyWithGroupIndex:(id)arg1;
- (void)_createGroupIndex;
- (void)performSpecifierUpdatesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)groupIndexOfGroupWithID:(id)arg1;
- (unsigned int)groupIndexOfGroup:(id)arg1;
- (unsigned int)indexOfSpecifierAtIndexPath:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *groupSpecifiers;
- (struct _NSRange)rangeOfSpecifiersInGroupAtGroupIndex:(unsigned int)arg1;
- (unsigned int)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(BOOL)arg2;
- (void)performUpdateOperation:(id)arg1;
- (id)initWithSpecifiers:(id)arg1;
- (unsigned int)numberOfGroups;
- (void)performSpecifierUpdates:(id)arg1;
- (id)indexPathForSpecifier:(id)arg1;
- (BOOL)getGroup:(out unsigned int *)arg1 row:(out unsigned int *)arg2 ofSpecifier:(id)arg3;
- (id)specifiersInGroup:(id)arg1;
- (BOOL)getGroup:(out unsigned int *)arg1 row:(out unsigned int *)arg2 ofSpecifierAtIndex:(unsigned int)arg3;
@property(readonly, copy, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)description;
- (id)init;
- (void)dealloc;
- (unsigned int)indexOfGroup:(id)arg1;

@end
