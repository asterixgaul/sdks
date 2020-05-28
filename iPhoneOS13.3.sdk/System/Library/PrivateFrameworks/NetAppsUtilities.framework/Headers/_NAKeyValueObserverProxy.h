//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/_NAObserverProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NAKeyValueObserverProxy : _NAObserverProxy
{
    BOOL _isObserving;
    id /* CDUnknownBlockType */ _observerBlock;
    id _observedObject;
    NSString *_keyPath;
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ observerBlock; // @synthesize observerBlock=_observerBlock;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(NSUInteger)arg4 observerBlock:(id /* CDUnknownBlockType */)arg5;

@end
