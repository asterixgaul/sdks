//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKVideoPlayerDataSource.h>

@class NSArray;

@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource
{
    long long _currentListingIndex;
    NSArray *_listings;
    NSUInteger _order;
}

+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(NSUInteger)arg3 andListings:(id)arg4;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andListings:(id)arg3;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(NSUInteger)arg3 endBehavior:(NSUInteger)arg4 andFilenames:(id)arg5;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 order:(NSUInteger)arg3 andFilenames:(id)arg4;
+ (id)dataSourceForDevice:(id)arg1 withPosterImage:(id)arg2 andFilenames:(id)arg3;
+ (id)dataSourceForDevice:(id)arg1 withFilenames:(id)arg2;
@property(nonatomic) NSUInteger order; // @synthesize order=_order;
// - (void).cxx_destruct;
- (id)currentListing;
- (void)advanceToNextListing:(NSUInteger)arg1;
- (id)initForDevice:(id)arg1 withListings:(id)arg2;

@end

