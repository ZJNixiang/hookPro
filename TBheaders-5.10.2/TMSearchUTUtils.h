//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TMSearchUTUtils : NSObject
{
    NSDictionary *_utConfigDict;	// 8 = 0x8
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *utConfigDict; // @synthesize utConfigDict=_utConfigDict;
- (void).cxx_destruct;
- (void)ctrlClickedForModule:(id)arg1 biz:(id)arg2 rn:(id)arg3 otherArgs:(id)arg4;
- (void)ctrlClicked:(id)arg1 rn:(id)arg2 otherArgs:(id)arg3;
- (id)spos:(id)arg1;
- (id)init;

@end

