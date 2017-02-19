//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageCenterCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface MessageCompositeCell : MessageCenterCell
{
    id <MessageCompositeCellDelegate> _subMesDelegate;
    UIImageView *_mainActImgV;
    UIView *_mainActLalBack;
    UILabel *_mainActLal;
    UIView *_mainTextBottomLine;
    UILabel *_mainActMaskView;
    UIButton *_mainActView;
    UIView *_subActsListView;
}

+ (double)calCellHeight:(id)arg1;
+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIView *subActsListView; // @synthesize subActsListView=_subActsListView;
@property(retain, nonatomic) UIButton *mainActView; // @synthesize mainActView=_mainActView;
@property(retain, nonatomic) UILabel *mainActMaskView; // @synthesize mainActMaskView=_mainActMaskView;
@property(retain, nonatomic) UIView *mainTextBottomLine; // @synthesize mainTextBottomLine=_mainTextBottomLine;
@property(retain, nonatomic) UILabel *mainActLal; // @synthesize mainActLal=_mainActLal;
@property(retain, nonatomic) UIView *mainActLalBack; // @synthesize mainActLalBack=_mainActLalBack;
@property(retain, nonatomic) UIImageView *mainActImgV; // @synthesize mainActImgV=_mainActImgV;
@property(nonatomic) __weak id <MessageCompositeCellDelegate> subMesDelegate; // @synthesize subMesDelegate=_subMesDelegate;
- (void).cxx_destruct;
- (void)resetSelectedState;
- (void)tapMainMessageAction:(id)arg1;
- (void)tapSubMessageAction:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)subMessageViewWithCompositeModel:(id)arg1 index:(long long)arg2;
- (void)setWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)createMainCellView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
