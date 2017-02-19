//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "TBIMMobileContactServiceAdapter-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMMobileContactServiceDelegate;

@interface TBIMMobileContactService : AMPMsgBusHelp <TBIMMobileContactServiceAdapter>
{
    YHMuticastDelegate<TBIMMobileContactServiceDelegate> *_mutiCastDelegate;	// 8 = 0x8
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMMobileContactServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)ampRequestTaobaoUserWithMobileContact:(id)arg1;
- (void)ampReadMobileContactFail:(id)arg1;
- (void)ampReadMobileContact:(id)arg1;
- (void)readMobileContact;
- (long long)abAddressBookGetAuthorizationStatus;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
