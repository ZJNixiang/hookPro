//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, WareCommentDetailModel;

@protocol WareCommentDetailDelegate <NSObject>

@optional
- (void)gotoBigImageListWidthIndex:(long long)arg1 warecommentMode:(WareCommentDetailModel *)arg2;
- (void)requestClickUsefulWithParams:(NSDictionary *)arg1 responseBlock:(void (^)(id))arg2;
@end
