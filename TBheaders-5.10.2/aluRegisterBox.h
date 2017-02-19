//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, aluInputBox;
@protocol aluRegisterBoxDelegate;

@interface aluRegisterBox : UIView
{
    NSString *_country;	// 8 = 0x8
    aluInputBox *_phoneNumInputBox;	// 16 = 0x10
    UIImageView *_accessoryView;	// 24 = 0x18
    UIButton *_containerView;	// 32 = 0x20
    id <aluRegisterBoxDelegate> _delegate;	// 40 = 0x28
    UILabel *_countryLabel;	// 48 = 0x30
}

@property(nonatomic) __weak UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(nonatomic) id <aluRegisterBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak aluInputBox *phoneNumInputBox; // @synthesize phoneNumInputBox=_phoneNumInputBox;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (void)onClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
