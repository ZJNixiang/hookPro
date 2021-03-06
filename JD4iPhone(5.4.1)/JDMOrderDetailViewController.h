//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDContentViewDataSource.h"

@class JDContentView, JDStoreNetwork, NSDictionary, NSMutableArray, NSString, RefreshTableHeaderView, UILabel, UIView;

@interface JDMOrderDetailViewController : JDViewController <JDContentViewDataSource>
{
    JDContentView *m_contentView;
    NSMutableArray *m_subViews;
    RefreshTableHeaderView *m_refreshView;
    UILabel *m_orderIdLab;
    long long m_orderState;
    UILabel *m_orderStateLab;
    UILabel *m_phoneLab;
    UILabel *m_cinemaNameLab;
    UILabel *m_movieNameLab;
    UILabel *m_ticketTypeLab;
    UILabel *m_playTimeLab;
    UILabel *m_seatInfoLab;
    UILabel *m_payTypeLab;
    UILabel *m_orderMoneyLab;
    UILabel *m_payMoneyLab;
    JDStoreNetwork *m_network;
    NSString *m_orderId;
    NSDictionary *m_dataDic;
    UIView *m_secondBgView;
    UIView *m_thirdBgView;
    UIView *m_firstBgView;
}

@property(retain, nonatomic) UIView *m_firstBgView; // @synthesize m_firstBgView;
@property(retain, nonatomic) UIView *m_thirdBgView; // @synthesize m_thirdBgView;
@property(retain, nonatomic) UIView *m_secondBgView; // @synthesize m_secondBgView;
@property(retain, nonatomic) NSDictionary *m_dataDic; // @synthesize m_dataDic;
@property(retain, nonatomic) NSString *m_orderId; // @synthesize m_orderId;
@property(retain, nonatomic) JDStoreNetwork *m_network; // @synthesize m_network;
@property(retain, nonatomic) UILabel *m_payMoneyLab; // @synthesize m_payMoneyLab;
@property(retain, nonatomic) UILabel *m_orderMoneyLab; // @synthesize m_orderMoneyLab;
@property(retain, nonatomic) UILabel *m_payTypeLab; // @synthesize m_payTypeLab;
@property(retain, nonatomic) UILabel *m_seatInfoLab; // @synthesize m_seatInfoLab;
@property(retain, nonatomic) UILabel *m_playTimeLab; // @synthesize m_playTimeLab;
@property(retain, nonatomic) UILabel *m_ticketTypeLab; // @synthesize m_ticketTypeLab;
@property(retain, nonatomic) UILabel *m_movieNameLab; // @synthesize m_movieNameLab;
@property(retain, nonatomic) UILabel *m_cinemaNameLab; // @synthesize m_cinemaNameLab;
@property(retain, nonatomic) UILabel *m_phoneLab; // @synthesize m_phoneLab;
@property(retain, nonatomic) UILabel *m_orderStateLab; // @synthesize m_orderStateLab;
@property(nonatomic) long long m_orderState; // @synthesize m_orderState;
@property(retain, nonatomic) UILabel *m_orderIdLab; // @synthesize m_orderIdLab;
@property(retain, nonatomic) RefreshTableHeaderView *m_refreshView; // @synthesize m_refreshView;
@property(retain, nonatomic) NSMutableArray *m_subViews; // @synthesize m_subViews;
@property(retain, nonatomic) JDContentView *m_contentView; // @synthesize m_contentView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)removeReloadView;
- (void)showReloadView;
- (void)reconnect;
- (void)jdmGoBack;
- (void)gotoPay:(id)arg1;
- (id)payTypeString:(long long)arg1;
- (void)fetchDetailData;
- (void)finishLoading;
- (void)refreshLoading;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)separatorViewOfSection:(long long)arg1;
- (id)contentView:(id)arg1 sectionAtIndex:(long long)arg2;
- (long long)numberOfSectionsInConentView:(id)arg1;
- (id)lastInfoView;
- (id)thirdInfoView;
- (id)secondInfoView;
- (id)firstInfoView;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

