//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSUUID;

@protocol ASDInstallationServiceProtocol <NSObject>
- (void)installWatchApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installTestFlightApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installSystemApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installScreenSyncApps:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)installEnterpriseApps:(NSArray *)arg1 onPairedDevice:(NSUUID *)arg2 withReplyHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)installAppReviewApps:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end
