//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SDImageCache;

@interface TBQREncoderCacheManager : NSObject
{
    SDImageCache *_cache;	// 8 = 0x8
}

+ (id)sharedManager;
@property(retain, nonatomic) SDImageCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)imageForKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (id)init;

@end
