//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AbstractHotspot-Protocol.h"

@class NSString;

@interface SiftCondition : NSObject <AbstractHotspot>
{
    _Bool _isSelected;	// 8 = 0x8
    NSString *_sId;	// 16 = 0x10
    NSString *_sName;	// 24 = 0x18
    NSString *_sImageUrl;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    long long _line;	// 48 = 0x30
}

@property(nonatomic) long long line; // @synthesize line=_line;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *sImageUrl; // @synthesize sImageUrl=_sImageUrl;
@property(retain, nonatomic) NSString *sName; // @synthesize sName=_sName;
@property(retain, nonatomic) NSString *sId; // @synthesize sId=_sId;
- (void).cxx_destruct;
- (id)initWithSid:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
