//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface SearchActivityModel : JDModel
{
    _Bool _isMore;
    NSString *_title;
    NSString *_imgUrl;
    NSString *_actionUrl;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
