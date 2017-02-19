//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "AMPMobileContactBiz-Protocol.h"

@class AMPBindMobileUserBlockTask, AMPBlockQueue, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AMPMobileContactBiz : AMPMsgBusHelp <AMPMobileContactBiz>
{
    _Bool _hasMobileContactDictCache;	// 8 = 0x8
    _Bool _needUpload;	// 9 = 0x9
    _Bool _isUploadingAB;	// 10 = 0xa
    _Bool _needRequestTaobaoUser;	// 11 = 0xb
    NSObject<OS_dispatch_queue> *_proccessQueue;	// 16 = 0x10
    NSMutableDictionary *_mobileContactDict;	// 24 = 0x18
    NSString *_currentNickAndDeviceID;	// 32 = 0x20
    NSMutableDictionary *_allUploadedNickAndDeviceIDs;	// 40 = 0x28
    NSMutableSet *_taobaoUserSet;	// 48 = 0x30
    AMPBindMobileUserBlockTask *_currentTask;	// 56 = 0x38
    AMPBlockQueue *_taobaoUserRequestTaskQueue;	// 64 = 0x40
}

@property(retain, nonatomic) AMPBlockQueue *taobaoUserRequestTaskQueue; // @synthesize taobaoUserRequestTaskQueue=_taobaoUserRequestTaskQueue;
@property(retain, nonatomic) AMPBindMobileUserBlockTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain, nonatomic) NSMutableSet *taobaoUserSet; // @synthesize taobaoUserSet=_taobaoUserSet;
@property(nonatomic) _Bool needRequestTaobaoUser; // @synthesize needRequestTaobaoUser=_needRequestTaobaoUser;
@property(retain, nonatomic) NSMutableDictionary *allUploadedNickAndDeviceIDs; // @synthesize allUploadedNickAndDeviceIDs=_allUploadedNickAndDeviceIDs;
@property(copy, nonatomic) NSString *currentNickAndDeviceID; // @synthesize currentNickAndDeviceID=_currentNickAndDeviceID;
@property(nonatomic) _Bool isUploadingAB; // @synthesize isUploadingAB=_isUploadingAB;
@property(nonatomic) _Bool needUpload; // @synthesize needUpload=_needUpload;
@property(retain, nonatomic) NSMutableDictionary *mobileContactDict; // @synthesize mobileContactDict=_mobileContactDict;
@property(nonatomic) _Bool hasMobileContactDictCache; // @synthesize hasMobileContactDictCache=_hasMobileContactDictCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *proccessQueue; // @synthesize proccessQueue=_proccessQueue;
- (void).cxx_destruct;
- (void)handleRequestTaobaoUserBlockTask:(id)arg1 withIsSuccess:(_Bool)arg2 error:(id)arg3;
- (void)requestTaobaoUserWithPhones:(id)arg1;
- (void)requestTaobaoUserWithMobileContact:(id)arg1;
- (id)getMD5ForSectionFromMobileContact:(id)arg1;
- (id)absToUploadJSONFromCompareOldMobileContactWithCurrentMobileContact:(id)arg1;
- (void)writeMobileContact:(id)arg1 withCurrentNickAndDeviceID:(id)arg2;
- (void)cleanUploadedProperty;
- (void)uploadMobileContactFail;
- (void)uploadMobileContactSuccess:(id)arg1;
- (void)innerUploadJSON:(id)arg1 withNowMobileContact:(id)arg2;
- (void)deltaUploadAddressBook:(id)arg1;
- (void)allUploadAddressBook:(id)arg1;
- (void)uploadMobileContact:(id)arg1;
- (_Bool)needUploadContactWithTimeInternal:(id)arg1;
- (id)uploadContactTimeInternal;
- (id)uploadContactSwitch;
- (_Bool)checkShouldUploadNeedCompareTimeInternal:(_Bool)arg1;
- (void)startUploadContact;
- (void)setMobileContactDictValueWithMobileContact:(id)arg1;
- (id)filtePhone:(id)arg1;
- (void)processMobileContactDict;
- (void)genMobileContactForPhoneWithMobileContact:(id)arg1 person:(void *)arg2;
- (void)assembleModifiedDateWithMobileContact:(id)arg1 person:(void *)arg2;
- (void)assemblePinyinWithMobileContact:(id)arg1;
- (void)assembleNameWithMobileContact:(id)arg1 person:(void *)arg2;
- (void)getABDataWith:(void *)arg1;
- (void)innerReadMobileContactWithNeedUpload:(_Bool)arg1 needRequestTaobaoUser:(_Bool)arg2;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)readMobileContactAndUploadMobileContactAndRequestTaobaoUserWithMobileContact;
- (long long)abAddressBookGetAuthorizationStatus;
- (void)initInfo;
- (void)stopBiz;
- (void)resetBiz;
- (void)startBiz;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
