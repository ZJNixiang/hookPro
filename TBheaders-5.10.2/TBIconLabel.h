//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBIconLabel : UIView
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)generateIconText:(id)arg1 generateMainText:(id)arg2 withSize:(double)arg3 withBackgroundColor:(id)arg4 withTextColor:(id)arg5 withBorderColor:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end
