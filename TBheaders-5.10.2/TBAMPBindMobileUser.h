//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBAMPBindMobileUser-Protocol.h"

@class NSDate, NSString;

@interface TBAMPBindMobileUser : NSObject <TBAMPBindMobileUser>
{
    _Bool _taoTag;	// 8 = 0x8
    NSString *_phone;	// 16 = 0x10
    NSString *_userLogo;	// 24 = 0x18
    NSString *_uid;	// 32 = 0x20
    NSDate *_modifyTime;	// 40 = 0x28
}

@property(retain, nonatomic) NSDate *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *userLogo; // @synthesize userLogo=_userLogo;
@property(nonatomic) _Bool taoTag; // @synthesize taoTag=_taoTag;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)ampDeepCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

