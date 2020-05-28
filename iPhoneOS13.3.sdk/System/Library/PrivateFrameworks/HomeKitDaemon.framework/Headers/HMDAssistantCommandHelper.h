//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSArray, NSMutableArray, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging>
{
    BOOL _executingActionSet;
    id /* CDUnknownBlockType */ _responseHandler;
    id /* CDUnknownBlockType */ _mediaResponseHandler;
    NSUUID *_messageId;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_queue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
    NSMutableArray *_responses;
    NSUInteger _numErrors;
    NSArray *_requests;
    NSArray *_mediaRequests;
    NSMutableArray *_mediaResponses;
}

+ (id)logCategory;
@property(retain, nonatomic) NSMutableArray *mediaResponses; // @synthesize mediaResponses=_mediaResponses;
@property(retain, nonatomic) NSArray *mediaRequests; // @synthesize mediaRequests=_mediaRequests;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) BOOL executingActionSet; // @synthesize executingActionSet=_executingActionSet;
@property(nonatomic) NSUInteger numErrors; // @synthesize numErrors=_numErrors;
@property(retain, nonatomic) NSMutableArray *responses; // @synthesize responses=_responses;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) NSUUID *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) id /* CDUnknownBlockType */ mediaResponseHandler; // @synthesize mediaResponseHandler=_mediaResponseHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ responseHandler; // @synthesize responseHandler=_responseHandler;
// - (void).cxx_destruct;
- (void)removeResponses:(id)arg1;
- (void)addActionSetRequest:(id)arg1 actionSet:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)addWriteRequests:(id)arg1 home:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addReadRequests:(id)arg1 home:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)addMediaWriteRequests:(id)arg1 withRequestProperty:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)__handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_reportOperationStartedForAccessory:(id)arg1;
- (void)reportOperationStartedForAccessory:(id)arg1;
- (void)_reportResponses;
- (void)_reportResponsesForMediaRequests;
- (void)timeoutAndReportResults;
- (void)_register;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 msgDispatcher:(id)arg2;

@end
