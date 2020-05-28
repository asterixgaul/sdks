//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCServerChangeState;

__attribute__((visibility("hidden")))
@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCServerChangeState *_changeState;
}

+ (id)queue;
// - (void).cxx_destruct;
- (void)main;
- (void)_performFetchChangedZones;
- (void)_performAfterRegisteringForPushes:(id /* CDUnknownBlockType */)arg1;
- (void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3;

@end
