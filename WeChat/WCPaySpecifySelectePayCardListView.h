//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSMutableArray, UIImageView, WCPayBindCardInfo;

@interface WCPaySpecifySelectePayCardListView : MMUIView
{
    WCPayBindCardInfo *selectedPayCardInfo;
    NSArray *m_arrBindCard;
    NSMutableArray *m_arrButtonArray;
    UIImageView *m_backgroundView;
    id <WCPaySpecifySelectePayCardListViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)OnSelectedNewCard:(id)arg1;
- (void)OnSelectedCard:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)showAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andPayCardList:(id)arg2 BanlanceInfo:(id)arg3 Description:(id)arg4 delegate:(id)arg5;

@end
