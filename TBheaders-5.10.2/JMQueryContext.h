//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface JMQueryContext : NSObject
{
    NSMutableDictionary *globalConfigurationBlocksTable_;	// 8 = 0x8
    NSMutableDictionary *globalCompletionBlocksTable_;	// 16 = 0x10
}

+ (_Bool)hasGlobalQueryCompletionBlocks;
+ (id)sharedQueryContext;
@property(retain, nonatomic) NSMutableDictionary *globalCompletionBlocksTable; // @synthesize globalCompletionBlocksTable=globalCompletionBlocksTable_;
@property(retain, nonatomic) NSMutableDictionary *globalConfigurationBlocksTable; // @synthesize globalConfigurationBlocksTable=globalConfigurationBlocksTable_;
- (void).cxx_destruct;
- (void)removeGlobalQueryCompletionBlockForTag:(long long)arg1;
- (void)addGlobalQueryCompletionBlock:(CDUnknownBlockType)arg1 tag:(long long)arg2;
- (void)removeConfigurationBlockForTag:(long long)arg1;
- (void)addConfigurationBlock:(CDUnknownBlockType)arg1 forTag:(long long)arg2;

@end
