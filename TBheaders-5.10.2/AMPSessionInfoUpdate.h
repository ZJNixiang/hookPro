//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPDataUpdate.h"

@class NSString;

@interface AMPSessionInfoUpdate : AMPDataUpdate
{
    _Bool _isRemind;	// 8 = 0x8
    NSString *_ccode;	// 16 = 0x10
}

@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
- (void).cxx_destruct;
- (id)parseMtopData:(id)arg1;
- (void)dbUpdateAfterNet:(id)arg1;
- (void)memoryUpdateAfterNet:(id)arg1;
- (id)generatePacket;
- (id)initWithSessionId:(id)arg1;

@end

