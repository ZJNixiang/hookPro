//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface GroupRegDataHolder : NSObject
{
    NSString *_strSiteType;
    NSString *_strSite;
    NSString *_strSiteID;
    NSString *_strGroupName;
    NSString *_strGroupInstr;
    UIImage *_groupIcon;
    NSString *_categoryName;
    NSString *_categoryID;
}

+ (id)defaultGroupRegDataHolder;
@property(retain, nonatomic) NSString *_categoryID; // @synthesize _categoryID;
@property(retain, nonatomic) NSString *_categoryName; // @synthesize _categoryName;
@property(retain, nonatomic) UIImage *_groupIcon; // @synthesize _groupIcon;
@property(retain, nonatomic) NSString *_strGroupInstr; // @synthesize _strGroupInstr;
@property(retain, nonatomic) NSString *_strGroupName; // @synthesize _strGroupName;
@property(retain, nonatomic) NSString *_strSiteID; // @synthesize _strSiteID;
@property(retain, nonatomic) NSString *_strSite; // @synthesize _strSite;
@property(retain, nonatomic) NSString *_strSiteType; // @synthesize _strSiteType;
- (void)reset;
- (void)dealloc;

@end
