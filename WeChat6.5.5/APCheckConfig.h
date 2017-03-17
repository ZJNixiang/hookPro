//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface APCheckConfig : MMObject <WCDBCoding>
{
    int version;
    unsigned int httpConnectTimeoutMillis;
    unsigned int httpReadTimeoutMillis;
    NSString *pingUrl;
    NSString *threeTwoBlackUrl;
    NSString *pingEnabled;
    NSString *echoStr;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_0e718273 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_0e718273 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_7a576766 *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *echoStr; // @synthesize echoStr;
@property(retain, nonatomic) NSString *pingEnabled; // @synthesize pingEnabled;
@property(retain, nonatomic) NSString *threeTwoBlackUrl; // @synthesize threeTwoBlackUrl;
@property(retain, nonatomic) NSString *pingUrl; // @synthesize pingUrl;
@property(nonatomic) unsigned int httpReadTimeoutMillis; // @synthesize httpReadTimeoutMillis;
@property(nonatomic) unsigned int httpConnectTimeoutMillis; // @synthesize httpConnectTimeoutMillis;
@property(nonatomic) int version; // @synthesize version;
- (void).cxx_destruct;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_echoStr;
- (const WCDBCondition_22fabacd *)db_pingEnabled;
- (const WCDBCondition_22fabacd *)db_threeTwoBlackUrl;
- (const WCDBCondition_22fabacd *)db_pingUrl;
- (const WCDBCondition_c6db074e *)db_httpReadTimeoutMillis;
- (const WCDBCondition_c6db074e *)db_httpConnectTimeoutMillis;
- (const WCDBCondition_9620f531 *)db_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
