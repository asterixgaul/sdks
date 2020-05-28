//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject
{
    NSSet *_matchedLibraryItems;
    NSSet *_matchedStoreItems;
    NSSet *_unmatchedRequests;
}

+ (id)_storeResultForRequests:(id)arg1;
+ (id)_libraryResultForRequests:(id)arg1;
+ (id)resultForRequests:(id)arg1;
+ (id)resultForAccessories:(id)arg1;
@property(retain, nonatomic) NSSet *unmatchedRequests; // @synthesize unmatchedRequests=_unmatchedRequests;
@property(retain, nonatomic) NSSet *matchedStoreItems; // @synthesize matchedStoreItems=_matchedStoreItems;
@property(retain, nonatomic) NSSet *matchedLibraryItems; // @synthesize matchedLibraryItems=_matchedLibraryItems;
// - (void).cxx_destruct;
- (id)init;

@end
