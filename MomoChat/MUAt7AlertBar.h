//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUAlertBar.h"

@class UIButton, UILabel, UIView;

@interface MUAt7AlertBar : MUAlertBar
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_closeButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)closeBar;
- (void)clickBar;
- (id)init;

@end

