//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, NSString, SKBuiltinBuffer_t;
@protocol StoreEmotionGetDonorListCgiDelegate;

__attribute__((visibility("hidden")))
@interface StoreEmotionGetDonorListCgi : MMObject <PBMessageObserverDelegate>
{
    NSString *m_pid;
    NSMutableArray *m_donorList;
    SKBuiltinBuffer_t *m_reqBuf;
    _Bool m_hasMore;
    unsigned int m_eventID;
    id <StoreEmotionGetDonorListCgiDelegate> _delegate;
}

@property(retain) id <StoreEmotionGetDonorListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequest;
- (id)initWithPid:(id)arg1;

@end
