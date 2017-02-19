//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollisionBehaviorDelegate.h"

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIGravityBehavior, UIImageView, UIPushBehavior;

@interface MDSurpriseView : UIView <UICollisionBehaviorDelegate>
{
    UIPushBehavior *_push;
    UIImageView *_aniView;
    UIDynamicAnimator *_animator;
    UIAttachmentBehavior *_attachment;
    UIGravityBehavior *_gravity;
    UICollisionBehavior *_collision;
    UIDynamicItemBehavior *_itemDynamic;
}

@property(retain, nonatomic) UIDynamicItemBehavior *itemDynamic; // @synthesize itemDynamic=_itemDynamic;
@property(retain, nonatomic) UICollisionBehavior *collision; // @synthesize collision=_collision;
@property(retain, nonatomic) UIGravityBehavior *gravity; // @synthesize gravity=_gravity;
@property(retain, nonatomic) UIAttachmentBehavior *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIImageView *aniView; // @synthesize aniView=_aniView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)addCustumDynamic;
- (void)addBox;
- (void)addGravity;
- (void)dealTheEdge:(struct CGPoint)arg1;
- (void)pan:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refresh:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
