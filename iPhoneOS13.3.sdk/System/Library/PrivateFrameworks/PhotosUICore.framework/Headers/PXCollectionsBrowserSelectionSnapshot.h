//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXBrowserSelectionSnapshot-Protocol.h>

@class NSArray, PXSectionedDataSource;

@interface PXCollectionsBrowserSelectionSnapshot : NSObject <PXBrowserSelectionSnapshot>
{
    NSArray *_indexPaths;
    PXSectionedDataSource *_dataSource;
    NSArray *_modelObjects;
}

// - (void).cxx_destruct;
- (long long)indexOfAssetReference:(id)arg1;
- (id)displayAssetAtIndex:(long long)arg1;
- (id)assetReferenceAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *modelObjects;
@property(readonly, nonatomic) long long estimatedModelObjectsCount;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long assetCount;
@property(readonly, nonatomic) long long estimatedAssetCount;
- (id)initWithIndexPaths:(id)arg1 dataSource:(id)arg2;

@end

