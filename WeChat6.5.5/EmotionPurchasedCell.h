//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"

@class EmoticonStoreItem, EmotionProgressView, UIButton;

__attribute__((visibility("hidden")))
@interface EmotionPurchasedCell : MMTableViewCell <IEmoticonPackageStateMgrExt, IEmoticonPackageMgrExt>
{
    EmoticonStoreItem *_item;
    UIButton *_button;
    EmotionProgressView *_progressView;
    UIButton *_downloadedView;
}

@property(retain, nonatomic) UIButton *downloadedView; // @synthesize downloadedView=_downloadedView;
@property(retain, nonatomic) EmotionProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)checkMode;
- (void)onState:(int)arg1;
- (void)layoutSubviews;
- (void)ceilAllSubviews;
- (void)makeDownloadButton;
- (struct CGPoint)makeTimeLabel:(id)arg1 andMarginPoint:(struct CGPoint)arg2 andLabelMaxWidth:(double)arg3;
- (struct CGPoint)makePriceLabelWith:(id)arg1 andMarginPoint:(struct CGPoint)arg2 andLabelMaxWidth:(double)arg3;
- (struct CGPoint)makePackNameLabelWithItem:(id)arg1 andMargin:(struct CGPoint)arg2 andLabelMaxWidth:(double)arg3;
- (struct CGPoint)makeImageViewWithItem:(id)arg1 andMargin:(struct CGPoint)arg2;
- (void)setDownloadedImageView;
- (void)dealloc;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)configureCellWithItem:(id)arg1 andLabelMaxWidth:(double)arg2;
- (void)setEmotionStoreItem:(id)arg1;
- (void)downloadEmotion;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
