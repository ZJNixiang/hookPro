//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FeedCellDecoraterDelegate.h"
#import "MDEmojiLabelDelegate.h"
#import "MDPhotoPreviewControllerDelegate.h"
#import "TableBindViewDelegate.h"

@class FeedCellDecorater, MDEmojiLabel, MDFeedResourceView, MDFeedSiteInfoView, MDImageView, MDLBAShopFeed, MDPicturesGrid, MDTopicApi, MDUKView, MDUserIconsView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface MDShopFeedCell : UITableViewCell <FeedCellDecoraterDelegate, MDPhotoPreviewControllerDelegate, TableBindViewDelegate, MDEmojiLabelDelegate>
{
    _Bool _details;
    int feedSource;
    MDImageView *headImage;
    UIView *basicInfoContainerView;
    MDEmojiLabel *feedContentView;
    UIImageView *feedImage;
    UIImageView *imageBack;
    FeedCellDecorater *decorater;
    MDPicturesGrid *picturesGrid;
    long long feedListType;
    UILabel *userNameLabel;
    MDUserIconsView *userIconsView;
    MDLBAShopFeed *currentFeed;
    MDFeedResourceView *feedResourceView;
    UIButton *actionsButton;
    UIButton *imageCountTipView;
    UILabel *_distanceLabel;
    UILabel *_reasonLabel;
    UILabel *_creatTimeLabel;
    MDFeedSiteInfoView *_siteInfoView;
    UIImageView *_spreadIconView;
    MDUKView *_labelsView;
    id <MDActivityCellDelegate> _delegate;
    NSString *_currentContentString;
    MDTopicApi *_topicApi;
    UIImageView *_commentIconView;
}

+ (long long)cellHeightWithItem:(id)arg1 feed:(id)arg2 isDetail:(_Bool)arg3;
+ (long long)cellHeightWithItem:(id)arg1 feed:(id)arg2;
+ (double)feedDetailsEmotionHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *commentIconView; // @synthesize commentIconView=_commentIconView;
@property(retain, nonatomic) MDTopicApi *topicApi; // @synthesize topicApi=_topicApi;
@property(copy, nonatomic) NSString *currentContentString; // @synthesize currentContentString=_currentContentString;
@property(nonatomic) id <MDActivityCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MDUKView *labelsView; // @synthesize labelsView=_labelsView;
@property(retain, nonatomic) UIImageView *spreadIconView; // @synthesize spreadIconView=_spreadIconView;
@property(retain, nonatomic) MDFeedSiteInfoView *siteInfoView; // @synthesize siteInfoView=_siteInfoView;
@property(retain, nonatomic) UILabel *creatTimeLabel; // @synthesize creatTimeLabel=_creatTimeLabel;
@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(nonatomic) _Bool details; // @synthesize details=_details;
@property(retain, nonatomic) UIButton *imageCountTipView; // @synthesize imageCountTipView;
@property(retain, nonatomic) UIButton *actionsButton; // @synthesize actionsButton;
@property(retain, nonatomic) MDFeedResourceView *feedResourceView; // @synthesize feedResourceView;
@property(retain, nonatomic) MDLBAShopFeed *currentFeed; // @synthesize currentFeed;
@property(retain, nonatomic) MDUserIconsView *userIconsView; // @synthesize userIconsView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel;
@property(nonatomic) long long feedListType; // @synthesize feedListType;
@property(retain, nonatomic) MDPicturesGrid *picturesGrid; // @synthesize picturesGrid;
@property(nonatomic) int feedSource; // @synthesize feedSource;
@property(retain, nonatomic) FeedCellDecorater *decorater; // @synthesize decorater;
@property(retain, nonatomic) UIImageView *imageBack; // @synthesize imageBack;
@property(retain, nonatomic) UIImageView *feedImage; // @synthesize feedImage;
@property(retain, nonatomic) MDEmojiLabel *feedContentView; // @synthesize feedContentView;
@property(retain, nonatomic) UIView *basicInfoContainerView; // @synthesize basicInfoContainerView;
@property(retain, nonatomic) MDImageView *headImage; // @synthesize headImage;
- (void)dealloc;
- (void)bindModel:(id)arg1;
- (double)heightForAllContent:(_Bool)arg1;
- (double)heightForImageBack:(_Bool)arg1;
- (struct CGRect)toRect:(id)arg1 index:(long long)arg2;
- (int)feedSourceOfCell;
- (void)likeOrUnLikeFail:(id)arg1;
- (void)likeOrUnLikeSuccess:(id)arg1;
- (void)didClickLikeButton:(id)arg1;
- (void)didClickCommentButton:(id)arg1;
- (void)didClickActionsButton:(id)arg1;
- (void)showBigFeedEmotion:(id)arg1;
- (void)clickButtonCommentToGoToDetails:(_Bool)arg1;
- (void)clickToDo;
- (int)getCurrentPictureIndexWithTouch:(id)arg1;
- (void)showFeedImage:(long long)arg1 imageRect:(struct CGRect)arg2;
- (void)clickHeadGoProfile;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleSingleImageFeed:(id)arg1;
- (void)handleMutiPicture:(id)arg1;
- (void)setFeedPic:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)refreshEmojiLabelContent:(id)arg1;
- (id)setFeedDetails:(id)arg1;
- (void)reportFeed;
- (void)deleteFeed;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)updateFeedFooterViews;
- (void)updateFeedResourceView:(id)arg1;
- (void)updateFeedSiteInfoView:(id)arg1;
- (void)updateBasicInfoViews;
- (void)updateFeedCell:(id)arg1 details:(_Bool)arg2;
- (void)refreshFeedEmotion:(id)arg1 detail:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

