//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork;

@interface JDChargeCenterNetworkManager : NSObject
{
    JDStoreNetwork *_net;
    JDStoreNetwork *_net_bind;
    JDStoreNetwork *_net_regular;
    JDStoreNetwork *_net_property;
    JDStoreNetwork *_net_getOilCart;
    JDStoreNetwork *_net_buyAgain;
    JDStoreNetwork *_net_pay;
}

+ (id)shareInstanceManager;
- (id)getMsg:(id)arg1;
- (id)getCodeMsg:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
- (id)getErrorMessge:(id)arg1 byType:(_Bool)arg2;
- (void)cancleAllRequest;
- (void)dealloc;
- (void)uploadCheckJsonResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMaxBuyNumb:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getGameDetailBuySkuID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getQQAndGameChargeDetailForPay:(id)arg1 orderType:(id)arg2;
- (void)getGameDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showQbPayView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitQBOrder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitPwd:(id)arg1 complettion:(CDUnknownBlockType)arg2;
- (void)getQBChargePayInfo:(id)arg1 strType:(id)arg2 strPrice:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getQBChargeType:(CDUnknownBlockType)arg1;
- (void)getQBCharegeCountAndDisCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getQBAdBannarViewList:(CDUnknownBlockType)arg1;
- (void)getFlowChargePayInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitFlowChargeOrder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)turn2ChargeViewController:(long long)arg1 MobileNoAndFaceValue:(id)arg2;
- (void)getMobileOrFlowChargeDetailForPay:(long long)arg1 orderType:(id)arg2 actionType:(id)arg3;
- (void)getMobileOrFlowChargeDetail:(long long)arg1 orderType:(long long)arg2;
- (void)getFlowChargeDetail:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFlowChargeList:(int)arg1 pageSize:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getFLowProductList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)turn2webView:(id)arg1;
- (void)getOilCardLink;
- (void)getUsedAreaAndHelpTip:(CDUnknownBlockType)arg1;
- (void)getUserRegistedPhone:(CDUnknownBlockType)arg1;
- (void)getTelBillHistoryList:(CDUnknownBlockType)arg1;
- (void)submitOrder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getJDBeansAndCoupneInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPriceAndAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMobileChargeProductLists:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getMobileNumberProperty:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getTelBillCurrentUnPayOrder:(CDUnknownBlockType)arg1;
- (void)getTelBillBaitiaoConfig:(CDUnknownBlockType)arg1;
- (void)queryGuideImg:(CDUnknownBlockType)arg1;
- (void)queryPriceConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryPczBanners:(CDUnknownBlockType)arg1;
- (void)getTelBillAdBannarViewList:(CDUnknownBlockType)arg1;
- (id)init;

@end
