//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface HomePageViewNoUser4 : UIView
{
    id <HomePageViewNoUser4> _delegate;
    UIButton *_startBtn;
}

@property(retain, nonatomic) UIButton *startBtn; // @synthesize startBtn=_startBtn;
@property(nonatomic) id <HomePageViewNoUser4> delegate; // @synthesize delegate=_delegate;
- (void)mta_goRightNow;
- (void)mta_noBtnClick;
- (void)goMainpegeAnimation;
- (void)btnClick;
- (void)launch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
