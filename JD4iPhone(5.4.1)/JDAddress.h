//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface JDAddress : JDModel
{
    NSString *cityId;
    NSString *cityName;
    NSString *districtId;
    NSString *districtName;
    NSString *provinceId;
    NSString *provinceName;
}

@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName;
@property(retain, nonatomic) NSString *provinceId; // @synthesize provinceId;
@property(retain, nonatomic) NSString *districtName; // @synthesize districtName;
@property(retain, nonatomic) NSString *districtId; // @synthesize districtId;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
