//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CUCaptureController;

@protocol CAMBurstDelegate <NSObject>

@optional
- (void)captureControllerDidStopPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerWillStartPlayingBurstEndSound:(CUCaptureController *)arg1;
- (void)captureControllerDidStopCapturingBurst:(CUCaptureController *)arg1;
- (void)captureControllerDidReachMaximumBurstLength:(CUCaptureController *)arg1;
- (void)captureControllerWillStartCapturingBurst:(CUCaptureController *)arg1;
@end

