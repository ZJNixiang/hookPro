//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SecKillObserverModel : NSObject
{
    double _interval;
    id _target;
    SEL _aSelector;
    _Bool _isRep;
    double _nowInterval;
}

- (void).cxx_destruct;
- (_Bool)timerFired;
- (id)initWithObserver:(double)arg1 target:(id)arg2 selector:(SEL)arg3 isRepeat:(_Bool)arg4;

@end

