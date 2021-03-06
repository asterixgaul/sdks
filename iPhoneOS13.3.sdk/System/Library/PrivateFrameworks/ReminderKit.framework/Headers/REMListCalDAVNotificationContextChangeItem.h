//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject
{
    REMListChangeItem *_listChangeItem;
}

@property(retain, nonatomic) REMListChangeItem *listChangeItem; // @synthesize listChangeItem=_listChangeItem;
// - (void).cxx_destruct;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)clearCalDAVNotifications;
- (void)removeCalDAVNotication:(id)arg1;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
@property(readonly, nonatomic) NSArray *calDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;

@end

