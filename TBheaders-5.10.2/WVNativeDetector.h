//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class NSString;

@interface WVNativeDetector : WVDynamicHandler
{
    NSString *_platform;	// 8 = 0x8
    NSString *_platformName;	// 16 = 0x10
    long long _year;	// 24 = 0x18
}

+ (id)nativeInfo;
+ (void)isHighPerformanceDevice:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getDeviceName:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getDeviceYear:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getCurrentUsage:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getModelInfo:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end
