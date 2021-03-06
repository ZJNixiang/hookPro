//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MLRoomDecorationMovableSticker, UIImageView, UILabel;

@interface MLRoomDecorationMSTextStickerCVCell : UICollectionViewCell
{
    MLRoomDecorationMovableSticker *_sticker;
    UILabel *_placeHolderTextLabel;
    UIImageView *_iconImageView;
    UILabel *_titleTextLabel;
}

+ (id)cellWithCollectionView:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) __weak UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *placeHolderTextLabel; // @synthesize placeHolderTextLabel=_placeHolderTextLabel;
@property(retain, nonatomic) MLRoomDecorationMovableSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end

