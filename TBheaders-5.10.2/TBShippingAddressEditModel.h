//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBShippingAddressEditModel : NSObject
{
    _Bool _isLoading;	// 8 = 0x8
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)editAddressWithDeliverId:(id)arg1 fullName:(id)arg2 mobile:(id)arg3 post:(id)arg4 divisionCode:(id)arg5 townDivisionCode:(id)arg6 addressDetail:(id)arg7 setDefaultAddress:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;

@end
