//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class MyCategoryButton, NSArray, NSString, UIImageView, UIView;

@interface MyCategoryScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *_maskLeft;	// 8 = 0x8
    UIImageView *_maskRight;	// 16 = 0x10
    UIView *_lockView;	// 24 = 0x18
    MyCategoryButton *_selectButton;	// 32 = 0x20
    NSArray *_buttons;	// 40 = 0x28
}

@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak MyCategoryButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak UIView *lockView; // @synthesize lockView=_lockView;
@property(retain, nonatomic) UIImageView *maskRight; // @synthesize maskRight=_maskRight;
@property(retain, nonatomic) UIImageView *maskLeft; // @synthesize maskLeft=_maskLeft;
- (void).cxx_destruct;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)doInitMask;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

