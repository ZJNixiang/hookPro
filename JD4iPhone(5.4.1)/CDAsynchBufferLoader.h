//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CDSoundEngine, NSArray;

@interface CDAsynchBufferLoader : NSOperation
{
    NSArray *_loadRequests;
    CDSoundEngine *_soundEngine;
}

- (void)dealloc;
- (void)main;
- (id)init:(id)arg1 soundEngine:(id)arg2;

@end
