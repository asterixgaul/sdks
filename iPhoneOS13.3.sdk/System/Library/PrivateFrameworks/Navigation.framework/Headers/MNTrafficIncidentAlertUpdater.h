//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNLocation, MNTrafficIncidentAlert, NSTimer;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTrafficIncidentAlertUpdater : NSObject
{
    id <MNTrafficIncidentAlertUpdaterDelegate> _delegate;
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    BOOL _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
}

@property(nonatomic) __weak id <MNTrafficIncidentAlertUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_alertRetryTimerFired:(id)arg1;
- (void)_activateAlertForLocation:(id)arg1;
- (void)_updateAlertDistanceAndETA:(id)arg1;
- (void)_removeActiveAlert;
- (void)clearAlerts;
- (void)updateForAlertFromResponse:(id)arg1;
- (void)updateRerouteProposalStatusForRequest:(id)arg1;
- (void)updateForReroute:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)dealloc;

@end
