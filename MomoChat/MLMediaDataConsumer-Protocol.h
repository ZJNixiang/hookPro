//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MLMediaDataConsumer <NSObject>

@optional
- (void)mediaSource:(id <MLMediaSource>)arg1 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)mediaSource:(id <MLMediaSource>)arg1 didOutputVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@end

