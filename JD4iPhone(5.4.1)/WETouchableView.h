//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface WETouchableView : UIView
{
    _Bool touchForwardingDisabled;
    id <WETouchableViewDelegate> delegate;
    NSArray *passthroughViews;
    _Bool testHits;
}

@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews;
@property(nonatomic) __weak id <WETouchableViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool touchForwardingDisabled; // @synthesize touchForwardingDisabled;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (_Bool)isPassthroughView:(id)arg1;

@end
