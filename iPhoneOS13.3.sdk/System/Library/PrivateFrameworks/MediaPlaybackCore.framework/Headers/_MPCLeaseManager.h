//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>

@class MPCPlaybackEngine, NSMutableSet;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving>
{
    BOOL _isPreparingForImminentPlaybackIntent;
    MPCPlaybackEngine *_playbackEngine;
    NSMutableSet *_leaseEndIgnoreReasons;
}

@property(retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons; // @synthesize leaseEndIgnoreReasons=_leaseEndIgnoreReasons;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
// - (void).cxx_destruct;
- (void)_updateStateForPlaybackPrevention;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engine:(id)arg1 didChangeToState:(NSUInteger)arg2;
- (void)setCanStealLeaseIfNeeded;
- (void)prepareForCurrentItemPlayback;
- (void)endIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)beginIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)prepareForPlaybackWithUserIdentity:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;

@end
