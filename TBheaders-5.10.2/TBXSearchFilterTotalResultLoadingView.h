//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBAnnularIndicatorView, UILabel;

@interface TBXSearchFilterTotalResultLoadingView : UIView
{
    TBAnnularIndicatorView *_animationView;	// 8 = 0x8
    UILabel *_showLabel;	// 16 = 0x10
}

@property(retain, nonatomic) UILabel *showLabel; // @synthesize showLabel=_showLabel;
@property(retain, nonatomic) TBAnnularIndicatorView *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)adjustViews;
- (void)stop;
- (void)start;
- (id)initWithFrame:(struct CGRect)arg1;

@end

