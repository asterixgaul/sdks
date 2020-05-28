//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession
{
    long long _event;
    STKSessionBehavior *_behavior;
}

@property(readonly, nonatomic) STKSessionBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
// - (void).cxx_destruct;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendSuccessWithSelectedIndex:(NSUInteger)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6;

@end
