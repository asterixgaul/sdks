//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUProgress.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress
{
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (void)p_updateChildrenProgressObservers;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)isIndeterminate;
- (double)maxValue;
- (double)value;
- (void)dealloc;
- (id)initWithChildren:(id)arg1;

@end
