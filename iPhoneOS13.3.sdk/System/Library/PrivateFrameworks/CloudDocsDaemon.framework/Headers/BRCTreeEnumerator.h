//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCAppLibrary, BRCItemID, NSMutableIndexSet, brc_task_tracker;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface BRCTreeEnumerator : NSObject
{
    BRCAccountSession *_session;
    id /* CDUnknownBlockType */ _handler;
    BRCItemID *_parentID;
    BRCAppLibrary *_appLibrary;
    NSUInteger _rowID;
    NSMutableIndexSet *_seen;
    NSMutableIndexSet *_toVisit;
    brc_task_tracker *_tracker;
    NSObject<OS_dispatch_group> *_group;
    id _strongSelf;
    BOOL _isCancelled;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)_iterate:(NSUInteger)arg1;
- (NSUInteger)__iterate:(NSUInteger)arg1;
- (BOOL)_visitNewParent;
- (void)_scheduleAsync;
- (BOOL)finishIfCancelled;
- (void)enumerateBelow:(id)arg1 appLibrary:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)_doneWithError:(id)arg1;
- (void)cancel;
- (id)initWithSession:(id)arg1 group:(id)arg2;
- (id)initWithSession:(id)arg1 tracker:(id)arg2;
- (id)initWithSession:(id)arg1;

@end
