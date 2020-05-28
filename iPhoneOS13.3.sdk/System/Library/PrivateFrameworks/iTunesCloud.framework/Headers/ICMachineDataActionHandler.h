//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICMachineDataActionHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedHandler;
// - (void).cxx_destruct;
- (void)processActionFromResponse:(id)arg1 withRequestContext:(id)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)processAction:(id)arg1 data:(id)arg2 withRequestContext:(id)arg3 version:(long long)arg4 withCompletionHandler:(id /* CDUnknownBlockType */)arg5;
- (id)init;

@end
