//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSHashTable;

__attribute__((visibility("hidden")))
@interface _UISelectorSet : NSObject <NSCopying>
{
    NSHashTable *_hash;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (BOOL)containsSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (void)enumerateSelectorsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)removeSelector:(SEL)arg1;
- (void)addSelector:(SEL)arg1;
- (BOOL)containsSelector:(SEL)arg1;
@property(readonly, nonatomic) NSUInteger count;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithSelectors:(SEL)arg1;
- (id)init;
- (id)initWithHash:(id)arg1;

@end
