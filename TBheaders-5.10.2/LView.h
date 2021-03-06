//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LVBundle, LVDebugConnection, LVRSA, UIViewController;
@protocol LVCallback;

@interface LView : UIView
{
    _Bool _runInSignModel;	// 8 = 0x8
    _Bool _contentViewIsWindow;	// 9 = 0x9
    _Bool _stateInited;	// 10 = 0xa
    _Bool _loadedDebugScript;	// 11 = 0xb
    id <LVCallback> _callback;	// 16 = 0x10
    UIViewController *_viewController;	// 24 = 0x18
    LVBundle *_bundle;	// 32 = 0x20
    LVDebugConnection *_debugConnection;	// 40 = 0x28
    UIView *_conentView;	// 48 = 0x30
    LView *_lv_lview;	// 56 = 0x38
    struct _LVUserDataInfo *_lv_userData;	// 64 = 0x40
    struct lv_State *_l;	// 72 = 0x48
    id _mySelf;	// 80 = 0x50
    long long _callLuaTimes;	// 88 = 0x58
    LVRSA *_rsa;	// 96 = 0x60
}

+ (void)downLoadPackage:(id)arg1 withInfo:(id)arg2;
@property(retain, nonatomic) LVRSA *rsa; // @synthesize rsa=_rsa;
@property long long callLuaTimes; // @synthesize callLuaTimes=_callLuaTimes;
@property(nonatomic) _Bool loadedDebugScript; // @synthesize loadedDebugScript=_loadedDebugScript;
@property(nonatomic) _Bool stateInited; // @synthesize stateInited=_stateInited;
@property(retain, nonatomic) id mySelf; // @synthesize mySelf=_mySelf;
@property(nonatomic) _Bool contentViewIsWindow; // @synthesize contentViewIsWindow=_contentViewIsWindow;
@property(nonatomic) struct lv_State *l; // @synthesize l=_l;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LView *lv_lview; // @synthesize lv_lview=_lv_lview;
@property(nonatomic) __weak UIView *conentView; // @synthesize conentView=_conentView;
@property(nonatomic) _Bool runInSignModel; // @synthesize runInSignModel=_runInSignModel;
@property(retain, nonatomic) LVDebugConnection *debugConnection; // @synthesize debugConnection=_debugConnection;
@property(retain, nonatomic) LVBundle *bundle; // @synthesize bundle=_bundle;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <LVCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)setPublicKeyFilePath:(id)arg1;
- (void)containerAddSubview:(id)arg1;
- (id)description;
- (id)argumentToObject:(int)arg1;
- (double)argumentToNumber:(int)arg1;
- (_Bool)argumentToBool:(int)arg1;
- (void)registerCustomPanel:(Class)arg1 boundName:(id)arg2;
- (void)unregisteObjectForName:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)registerObject:(id)arg1 forName:(id)arg2 weakMode:(_Bool)arg3;
- (void)registerObject:(id)arg1 forName:(id)arg2;
- (void)registerObject:(id)arg1 forName:(id)arg2 sel:(SEL)arg3 weakMode:(_Bool)arg4;
- (void)registerObject:(id)arg1 forName:(id)arg2 sel:(SEL)arg3;
- (id)getLuaBlock:(id)arg1;
- (id)callLua:(id)arg1 args:(id)arg2;
- (id)callLua:(id)arg1 environment:(id)arg2 args:(id)arg3;
- (id)callLua:(id)arg1 tag:(id)arg2 environment:(id)arg3 args:(id)arg4;
- (id)layer;
- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1;
- (struct CGPoint)center;
- (void)setCenter:(struct CGPoint)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (_Bool)clipsToBounds;
- (void)setClipsToBounds:(_Bool)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (void)layoutSubviews;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)viewDidDisAppear;
- (void)viewWillDisAppear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)freeMySelf;
- (void)releaseLuaView;
- (id)globalString:(const char *)arg1;
- (int)globalNumber:(const char *)arg1;
- (id)runData:(id)arg1 fileName:(id)arg2;
- (void)registeLibs;
- (void)callLuaToExecuteServerCmd;
- (id)loadData:(id)arg1 fileName:(id)arg2;
- (id)loadSignFile:(id)arg1;
- (id)loadFile:(id)arg1;
- (void)checkDebugOrNot:(const char *)arg1 length:(long long)arg2 fileName:(id)arg3;
- (id)runPackage:(id)arg1 args:(id)arg2;
- (id)runPackage:(id)arg1;
- (id)runSignFile:(id)arg1;
- (id)runFile:(id)arg1;
- (void)dealloc;
- (void)myInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

