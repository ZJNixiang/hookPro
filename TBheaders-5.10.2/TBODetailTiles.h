//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBODetailTiles : TBJSONModel
{
    NSString *_topicId;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_subType;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
- (void).cxx_destruct;
- (double)getViewHeight;

@end
