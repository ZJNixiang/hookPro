//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface JDFinderHomeHeaderResponse : NSObject
{
    NSString *_homePitTitle;
    NSString *_code;
    NSArray *_homePits;
    NSArray *_floorList;
    NSArray *_webViews;
    NSArray *_articleType;
    NSDictionary *_poz;
    NSArray *_content;
    NSString *_floorMoodImg;
    NSString *_floorFontColor;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *floorFontColor; // @synthesize floorFontColor=_floorFontColor;
@property(copy, nonatomic) NSString *floorMoodImg; // @synthesize floorMoodImg=_floorMoodImg;
@property(readonly, nonatomic) NSArray *content; // @synthesize content=_content;
@property(retain, nonatomic) NSDictionary *poz; // @synthesize poz=_poz;
@property(retain, nonatomic) NSArray *articleType; // @synthesize articleType=_articleType;
@property(retain, nonatomic) NSArray *webViews; // @synthesize webViews=_webViews;
@property(retain, nonatomic) NSArray *floorList; // @synthesize floorList=_floorList;
@property(retain, nonatomic) NSArray *homePits; // @synthesize homePits=_homePits;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *homePitTitle; // @synthesize homePitTitle=_homePitTitle;
- (void).cxx_destruct;
- (void)updatedRedDot:(id)arg1;
- (Class)getClassbyType:(id)arg1;
- (void)keyValuesDidFinishConvertingToObject;

@end
