//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface AKInkAnnotationDrawingImageCache : NSObject
{
    NSPointerArray *_pointerArray;
}

+ (void)purgeSharedCache;
+ (id)sharedCache;
@property(retain, nonatomic) NSPointerArray *pointerArray; // @synthesize pointerArray=_pointerArray;
// - (void).cxx_destruct;
- (void)_addEntryWithObject:(id)arg1 key:(id)arg2;
- (void)_removeEntryAtIndex:(NSUInteger)arg1;
- (void)_makeKeyMostRecentlyUsed:(id)arg1;
- (long long)_indexOfPointer:(void )arg1;
- (void)_purgeExtraEntries;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)init;

@end
