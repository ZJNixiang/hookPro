//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TBChatFriendModel : NSObject
{
    _Bool _selected;	// 8 = 0x8
    _Bool _available;	// 9 = 0x9
    NSString *_userId;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSURL *_photo;	// 32 = 0x20
}

@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSURL *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
