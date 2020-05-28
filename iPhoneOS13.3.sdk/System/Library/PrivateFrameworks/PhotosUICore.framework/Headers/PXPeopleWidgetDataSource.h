//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleDataSource.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSObject, PXPeopleDetailsContext;
@protocol OS_dispatch_queue;

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    BOOL _containsSocialGroups;
    BOOL _isForOneUp;
    BOOL _prefetchingStarted;
    PXPeopleDetailsContext *_context;
}

@property(nonatomic) BOOL prefetchingStarted; // @synthesize prefetchingStarted=_prefetchingStarted;
@property(nonatomic) BOOL isForOneUp; // @synthesize isForOneUp=_isForOneUp;
@property(retain, nonatomic) PXPeopleDetailsContext *context; // @synthesize context=_context;
@property(nonatomic) BOOL containsSocialGroups; // @synthesize containsSocialGroups=_containsSocialGroups;
// - (void).cxx_destruct;
- (id)_socialGroupsForIdentifiers:(id)arg1;
- (void)loadMembersWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_updateMembers;
- (void)prefetchThumbnailsForTargetSize:(CGSize)arg1 maxFetchCount:(NSUInteger)arg2;
- (id)titleAtIndex:(NSUInteger)arg1;
- (void)imageCacheDidChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (void)dealloc;
- (id)initWithName:(id)arg1 objectsReloadBlock:(id /* CDUnknownBlockType */)arg2;

@end
