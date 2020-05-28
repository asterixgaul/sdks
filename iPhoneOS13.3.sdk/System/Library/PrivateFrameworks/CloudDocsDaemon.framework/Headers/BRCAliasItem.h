//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAppLibrary, BRCClientZone, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(NSUInteger)arg8 isFolderShare:(BOOL)arg9 beingDeadInServerTruth:(BOOL)arg10 shouldPCSChainStatus:(unsigned char)arg11;
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(BOOL)arg3;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)startDownloadInTask:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (BOOL)evictInTask:(id)arg1 options:(NSUInteger)arg2 error:(id )arg3;
- (id)targetDocument;
- (void)targetMovedToThisAppLibrary;
- (void)targetMovedToTrashOrDeleted;
- (void)_removeAliasAndMarkDead;
- (BOOL)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(BOOL)arg2;
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markNeedsUploadOrSyncingUp;
- (BOOL)_updateInDB:(id)arg1 diffs:(NSUInteger)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(NSUInteger)arg2;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)updateXattrInfoFromPath:(id)arg1 error:(id )arg2;
- (void)learnTarget:(id)arg1;
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
@property(readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (BOOL)isBRAlias;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;

@end
