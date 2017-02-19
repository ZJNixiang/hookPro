//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BJProductCouponModel, JDImageView, NSString, UIButton, UILabel;

@interface CouponRecommendPieceView : UIView
{
    JDImageView *_goodsImage;
    UILabel *_goodsTitleLabel;
    UILabel *_goodsPriceLabel;
    UIButton *_similarButton;
    BJProductCouponModel *_model;
    NSString *_algorithm;
}

@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(retain, nonatomic) BJProductCouponModel *model; // @synthesize model=_model;
- (id)currentNavigationController;
- (void)setupUI;
- (id)safeObject:(id)arg1 AtIndex:(long long)arg2;
- (id)processPrice:(id)arg1;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
