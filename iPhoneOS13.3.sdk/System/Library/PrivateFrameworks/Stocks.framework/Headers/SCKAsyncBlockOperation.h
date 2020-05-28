//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SCKAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    id /* CDUnknownBlockType */ _block;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ block; // @synthesize block=_block;
// - (void).cxx_destruct;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(id /* CDUnknownBlockType */)arg1;

@end
