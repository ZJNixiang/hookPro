//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableArray, NSString;

@interface WXGScrollViewPerformanceMonitor : NSObject
{
    struct WXGAnimationPerformanceTrackerConfig _config;
    _Bool _tracking;
    _Bool _firstUpdate;
    double _previousFrameTimestamp;
    CADisplayLink *_displayLink;
    _Bool _prepared;
    double _durationTotal;
    double _maxFrameTime;
    double _smallDrops;
    double _largeDrops;
    double _totalTimeRunning;
    NSString *_lastStackData;
    NSString *_lastTwoStackData;
    double _beginTime;
    NSMutableArray *_differentStackArray;
    unsigned long long _filterCount;
    unsigned long long _dropFrameCount;
    unsigned long long _dropLargeFrameCount;
    unsigned long long _dumpToday;
    unsigned long long m_blockTime;
    _Bool _monitorABTestOpen;
    unsigned long long _deviceModel;
}

+ (id)getStringFromFormattedCallStackArray:(id)arg1;
+ (_Bool)formattedCallStackArray:(id)arg1 IsSameWith:(id)arg2;
+ (void)_trakerLoop;
+ (struct WXGAnimationPerformanceTrackerConfig)standardConfig;
- (void).cxx_destruct;
- (void)checkABTest;
- (_Bool)isHightStandDevice;
- (unsigned long long)getMarkDifferentWechatStackCount;
- (unsigned long long)getDifferentFilterCount;
- (unsigned long long)getTodayUploadCount;
- (unsigned long long)getMaxUploadCountDaily;
- (_Bool)whetherSignal;
- (id)getLastTwoFrameDropStack;
- (id)getLastFrameDropStack;
- (unsigned long long)getLargeFrameDropCount;
- (unsigned long long)getSmallFrameDropCount;
- (double)getMonitorPerformTime;
- (void)reportIDKeyOneDump;
- (id)getDifferentWechatStackDataPath;
- (void)_reportStackTraceWithCallStackArray:(id)arg1 WithWeakSelf:(id)arg2;
- (void)saveDifferentStackArray;
- (_Bool)_filteredStackArray:(id)arg1;
- (void)_update;
- (void)_addFrameTime:(double)arg1 singleFrameTime:(double)arg2;
- (void)_tearDownCADisplayLink;
- (void)_setUpCADisplayLink;
- (_Bool)prepare;
- (void)stopTrack;
- (void)startTrack;
- (void)_setupSymbolication;
- (void)_setupSignal;
- (void)_reset;
- (void)dealloc;
- (id)init;

@end
