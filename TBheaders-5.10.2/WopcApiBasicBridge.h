//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WopcApiBasicBridge : NSObject
{
    NSMutableDictionary *_apiDic;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *apiDic; // @synthesize apiDic=_apiDic;
- (void).cxx_destruct;
- (id)findServiceByTidaApi:(id)arg1 methodParam:(id)arg2;
- (id)getTopApiByTidaApi:(id)arg1 MethodParam:(id)arg2;

@end

