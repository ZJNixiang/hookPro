//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface TBAddressBookGuideView : UIView
{
    UILabel *_taoLabel;	// 8 = 0x8
    UILabel *_phoneLabel;	// 16 = 0x10
    UIImageView *_taoImageView;	// 24 = 0x18
    UILabel *_taoShareLabel;	// 32 = 0x20
    UIButton *_closeButton;	// 40 = 0x28
    CDUnknownBlockType _block;	// 48 = 0x30
}

+ (void)showGuideViewOnView:(id)arg1 tapCloseButtonBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *taoShareLabel; // @synthesize taoShareLabel=_taoShareLabel;
@property(retain, nonatomic) UIImageView *taoImageView; // @synthesize taoImageView=_taoImageView;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *taoLabel; // @synthesize taoLabel=_taoLabel;
- (void).cxx_destruct;
- (void)hide;
- (void)tapClose:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withTapCloseButtonBlock:(CDUnknownBlockType)arg2;

@end

