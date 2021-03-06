//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDRVCIsAllowAccessResponse : NSObject
{
    int _accessLevel;
    int _authWay;
    int _resultCode;
    NSString *_bsid;
    NSString *_cookie;
    NSString *_content;
    NSString *_rsid;
    NSString *_userMsg1;
    NSString *_userMsg2;
    NSString *_toast;
}

@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSString *userMsg2; // @synthesize userMsg2=_userMsg2;
@property(retain, nonatomic) NSString *userMsg1; // @synthesize userMsg1=_userMsg1;
@property(retain, nonatomic) NSString *rsid; // @synthesize rsid=_rsid;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int authWay; // @synthesize authWay=_authWay;
@property(retain, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(retain, nonatomic) NSString *bsid; // @synthesize bsid=_bsid;
@property(nonatomic) int accessLevel; // @synthesize accessLevel=_accessLevel;
- (void).cxx_destruct;
- (void)authWayWithDelegate:(id)arg1;
- (void)responseWithDelegte:(id)arg1 didFinish:(CDUnknownBlockType)arg2;
- (void)dicToObj:(id)arg1;

@end

