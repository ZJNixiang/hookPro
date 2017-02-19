//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class NSArray, UIImageView, UILabel;

@interface OrderGridView : JDContentItem
{
    NSArray *items_;
    UIImageView *backgroundView_;
    UILabel *titleLabel_;
    UILabel *valueLabel_;
    UIImageView *accessoryView_;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=items_;
- (id)getTitle;
- (id)getValue;
- (void)setValue:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)showAccessoryView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
