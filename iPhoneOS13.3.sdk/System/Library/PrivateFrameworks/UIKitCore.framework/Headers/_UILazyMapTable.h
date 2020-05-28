//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    id /* CDUnknownBlockType */ _mappingBlock;
    NSMapTable *_keysToClientTables;
    NSMapTable *_keysToValues;
    NSMapTable *_valuesToKeys;
}

// - (void).cxx_destruct;
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;
- (id)cachedObjectEnumerable;
- (id)keyEnumerable;
- (id)cachedObjects;
- (id)keys;
- (BOOL)hasCachedObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (NSUInteger)count;
- (id)description;
- (id)initWithMappingBlock:(id /* CDUnknownBlockType */)arg1;

@end
