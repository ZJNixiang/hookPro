//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CContact;

__attribute__((visibility("hidden")))
@interface WCWatchChatRoomImageView : UIImageView
{
    UIImageView *_imageView;
    CContact *_contact;
}

@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;

@end
