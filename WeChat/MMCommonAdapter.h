//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMCommonAdapter : NSObject
{
    id <MMCommonAdapterDelegate> _m_delegate;
}

+ (id)SharedInstance;
+ (void)SetupWithDelegate:(id)arg1;
@property __weak id <MMCommonAdapterDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;

@end
