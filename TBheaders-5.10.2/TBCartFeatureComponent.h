//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCartFeatureComponent-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TBCartFeatureComponent : NSObject <TBCartFeatureComponent>
{
    NSMutableDictionary *_data;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(nonatomic, getter=isGzip) _Bool gzip;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
