//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WVThreadSafeMutableDictionary;

@interface WVInjector : NSObject
{
    WVThreadSafeMutableDictionary *_context;	// 8 = 0x8
}

+ (id)getInstanceFromProtocol:(id)arg1;
+ (void)injectClass:(Class)arg1 toProtocol:(id)arg2;
+ (void)injectInstance:(id)arg1 toProtocol:(id)arg2;
+ (id)sharedInjector;
@property(retain, nonatomic) WVThreadSafeMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)init;

@end

