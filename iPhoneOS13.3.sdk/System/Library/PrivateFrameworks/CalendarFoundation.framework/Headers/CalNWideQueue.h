//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CalNWideQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

// - (void).cxx_destruct;
- (void)executeBlock:(id /* CDUnknownBlockType */)arg1;
- (id)initWithSerialQueue:(id)arg1 andWidth:(NSUInteger)arg2;

@end
