//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TBLiveAVPlayerControllerDelegate <NSObject>
- (void)onAVPlayerStatus:(long long)arg1;

@optional
- (void)onAVPlayerProgress:(unsigned long long)arg1 currentTime:(unsigned long long)arg2;
@end
