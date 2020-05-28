//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDCameraSnapshotSessionID, HMFOSTransaction, IDSService, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStream : HMFObject <IDSServiceDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSnapshotSessionID *_sessionID;
    IDSService *_idsProxyService;
    HMFOSTransaction *_snapshotStreamTransaction;
}

+ (id)logCategory;
@property(retain, nonatomic) HMFOSTransaction *snapshotStreamTransaction; // @synthesize snapshotStreamTransaction=_snapshotStreamTransaction;
@property(readonly, nonatomic) IDSService *idsProxyService; // @synthesize idsProxyService=_idsProxyService;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;

@end
