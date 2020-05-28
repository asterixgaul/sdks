//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface HULayoutTransition : NSObject
{
    NSUInteger _phase;
    UIView *_view;
    id /* CDUnknownBlockType */ _setupBlock;
    id /* CDUnknownBlockType */ _transitionBlock;
    id /* CDUnknownBlockType */ _completionBlock;
    id _fromState;
    id _toState;
}

@property(retain, nonatomic) id toState; // @synthesize toState=_toState;
@property(retain, nonatomic) id fromState; // @synthesize fromState=_fromState;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ transitionBlock; // @synthesize transitionBlock=_transitionBlock;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ setupBlock; // @synthesize setupBlock=_setupBlock;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) NSUInteger phase; // @synthesize phase=_phase;
// - (void).cxx_destruct;
- (void)completeTransition;
- (void)executeTransition;
- (void)setupTransitionWithFromState:(id)arg1 toState:(id)arg2;
- (id)initWithView:(id)arg1 setupBlock:(id /* CDUnknownBlockType */)arg2 transitionBlock:(id /* CDUnknownBlockType */)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (id)init;

@end
