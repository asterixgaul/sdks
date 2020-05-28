//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>

@class NSMutableDictionary, NSMutableSet;
@protocol CKDAccountInfoProvider, OS_dispatch_queue;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>
{
    BOOL _schedulerIsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSMutableSet *_operations;
    id <CKDAccountInfoProvider> _unitTestingAccountInfoProvider;
    NSMutableDictionary *_unitTestingPushTokens;
}

+ (id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2;
+ (id)sharedScheduler;
@property(retain, nonatomic) NSMutableDictionary *unitTestingPushTokens; // @synthesize unitTestingPushTokens=_unitTestingPushTokens;
@property(retain, nonatomic) id <CKDAccountInfoProvider> unitTestingAccountInfoProvider; // @synthesize unitTestingAccountInfoProvider=_unitTestingAccountInfoProvider;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableDictionary *callbackTimers; // @synthesize callbackTimers=_callbackTimers;
@property(retain, nonatomic) NSMutableDictionary *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL schedulerIsAvailable; // @synthesize schedulerIsAvailable=_schedulerIsAvailable;
// - (void).cxx_destruct;
- (void)ensureTokenRefreshForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 completionBlock:(id /* CDUnknownBlockType */)arg3;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)forceTokenRefreshForAllClients;
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;
- (void)_handlePushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 applicationMetadata:(id)arg3 appContainerIntersectionMetadata:(id)arg4;
- (void)refreshAllClientsNow:(BOOL)arg1;
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(id /* CDUnknownBlockType */)arg6;
- (void)_refreshApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(id /* CDUnknownBlockType */)arg6;
- (void)tokenRefreshChanged;
- (void)registerTokenRefreshActivity;
- (void)setSchedulerAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(NSUInteger)arg1;
- (BOOL)canRunGivenAvailabilityState:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)init;

@end
