//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBProgressHUD, MDNormalButtonItem, MDWebShareHandler, NSArray, NSMutableArray, NSString, UIWebView, WebViewJavascriptBridge;

@interface MDWebShareBridgePlugin : NSObject
{
    _Bool _usePopMenu;
    _Bool _webTriggeredShare;
    id <MDMomoBridgeDelegate> _controllerDelegate;
    MDNormalButtonItem *_shareItem;
    UIWebView *_webView;
    WebViewJavascriptBridge *_bridge;
    MDWebShareHandler *_shareHandler;
    MBProgressHUD *_hud;
    NSString *_rightItemTitle;
    NSMutableArray *_controlItemArray;
    NSArray *_availabelShareTypes;
}

@property(nonatomic, getter=isWebTriggeredShare) _Bool webTriggeredShare; // @synthesize webTriggeredShare=_webTriggeredShare;
@property(retain, nonatomic) NSArray *availabelShareTypes; // @synthesize availabelShareTypes=_availabelShareTypes;
@property(retain, nonatomic) NSMutableArray *controlItemArray; // @synthesize controlItemArray=_controlItemArray;
@property(nonatomic) _Bool usePopMenu; // @synthesize usePopMenu=_usePopMenu;
@property(copy, nonatomic) NSString *rightItemTitle; // @synthesize rightItemTitle=_rightItemTitle;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDWebShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) WebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) MDNormalButtonItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) __weak id <MDMomoBridgeDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
- (void).cxx_destruct;
- (void)shouldChangeCanShareStateToValue:(_Bool)arg1;
- (void)handleControlActionWithItem:(id)arg1;
- (void)shareAction;
- (void)handleDefaultShare;
- (void)handleDirectlyShareWithDictionary:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)resetShareItem;
- (void)handleShareActionWithInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)handleShareActionWithString:(id)arg1;
- (void)refreshButtonState;
- (void)refreshButtonStateWithString:(id)arg1;
- (void)registerHandlers;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 javaScriptBridge:(id)arg2;

@end
