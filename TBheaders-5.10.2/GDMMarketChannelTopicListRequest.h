//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OMKMtopRequest.h"

@class NSArray, NSString;

@interface GDMMarketChannelTopicListRequest : OMKMtopRequest
{
    NSString *_cursor;	// 8 = 0x8
    NSArray *_topicList;	// 16 = 0x10
}

@property(retain) NSArray *topicList; // @synthesize topicList=_topicList;
@property(retain) NSString *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (void)bottomLoadTopicListWithId:(id)arg1 cursor:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)topLoadTopicListWithId:(id)arg1 finsihBlock:(CDUnknownBlockType)arg2;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

