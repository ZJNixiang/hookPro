//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPSAdapterNavigationController.h"

#import "TBPSImagePickerViewControllerDelegate-Protocol.h"

@class NSString, TBPSAssetManager;
@protocol TBPSImagePickerViewControllerDelegate;

@interface TBPSImagePickerViewController : TBPSAdapterNavigationController <TBPSImagePickerViewControllerDelegate>
{
    TBPSAssetManager *_assetManager;	// 16 = 0x10
    id <TBPSImagePickerViewControllerDelegate> _delegateObj;	// 24 = 0x18
}

+ (void)showImagePickerWithViewController:(id)arg1;
@property(nonatomic) id <TBPSImagePickerViewControllerDelegate> delegateObj; // @synthesize delegateObj=_delegateObj;
@property(retain, nonatomic) TBPSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithAssetManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

