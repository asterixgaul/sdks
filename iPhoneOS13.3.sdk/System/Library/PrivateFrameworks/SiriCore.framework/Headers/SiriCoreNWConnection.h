//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreConnectionProvider-Protocol.h>

@class NSArray, NSString, NSURL, SAConnectionPolicy, SAConnectionPolicyRoute, SiriCoreConnectionMetrics, SiriCoreConnectionType;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_connection, OS_nw_content_context, OS_nw_endpoint, SiriCoreConnectionProviderDelegate;

@interface SiriCoreNWConnection : NSObject <SiriCoreConnectionProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <SiriCoreConnectionProviderDelegate> _delegate;
    NSURL *_url;
    NSString *_resolvedHost;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_content_context> *_content_context;
    SAConnectionPolicyRoute *_route;
    SAConnectionPolicy *_policy;
    BOOL _prefersWWAN;
    BOOL _connectByPOPEnabled;
    BOOL _enforceEV;
    BOOL _isMPTCP;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    BOOL _usingTLS;
    NSString *_connectionId;
    SiriCoreConnectionType *_connectionType;
    int _interfaceIndex;
    id /* CDUnknownBlockType */ _openCompletion;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    NSUInteger _readWriteCounter;
    NSObject<OS_dispatch_source> *_connectionUnviableTimer;
    NSUInteger _betterPathAvailableNotificationMachTime;
    NSArray *_attemptedEndpoints;
    BOOL _isViable;
    BOOL _scopeToWiFiOnly;
    SiriCoreConnectionMetrics *_metrics;
    double _keepaliveIdleTime;
    double _keepaliveIntervalTime;
    double _retransmissionBasedConnectionDropTime;
    NSUInteger _keepaliveUnackedCount;
    double _staleConnectionInterval;
}

+ (void)getMetricsContext:(id /* CDUnknownBlockType */)arg1;
// - (void).cxx_destruct;
- (id)_getAttemptedEndpoints;
- (BOOL)providerStatsIndicatePoorLinkQuality;
- (id)_setParametersForHost:(const char )arg1 useTLS:(BOOL)arg2 initialPayload:(id)arg3;
- (id)resolvedHost;
- (void)setRetransmitConnectionDropTime:(double)arg1;
- (void)setKeepAlive:(double)arg1 withInterval:(double)arg2 withCount:(NSUInteger)arg3;
- (void)setScopeIsWiFiOnly;
- (BOOL)shouldFallbackFromError:(id)arg1;
- (BOOL)isCanceled;
- (BOOL)isReady;
- (BOOL)isEstablishing;
- (BOOL)isMultipath;
- (BOOL)isPeerNotNearbyError:(id)arg1;
- (BOOL)isPeerConnectionError:(id)arg1;
- (void)close;
- (void)_receivedBetterRouteNotification:(BOOL)arg1;
- (void)_receivedViabilityChangeNotification:(BOOL)arg1;
- (void)_closeWithError:(id)arg1;
- (void)updateConnectionMetrics:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)analysisInfo;
- (id)connectionType;
- (id)_sendBufferBytesRemaining:(id)arg1;
- (BOOL)supportsInitialPayload;
- (BOOL)shouldFallbackQuickly;
- (id)headerDataWithForceReconnect:(BOOL)arg1;
- (void)writeData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)readData:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasActiveConnection;
- (void)_cancelOpenTimer;
- (void)_setupOpenTimer;
- (void)_configureConnection:(id)arg1;
- (void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_getNWConnectionWithInitialData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_cancelStaleConnectionTimer;
- (void)_setupStaleConnectionTimer;
- (void)_cancelConnectionUnviableTimer;
- (void)_startConnectionUnviableTimer;
- (BOOL)_connectByPOPMethod;
- (id)_connectionId;
- (id)_url;
- (id)delegate;
- (void)setStaleInterval:(double)arg1;
- (void)setEnforceExtendedValidation:(BOOL)arg1;
- (void)setConnectByPOPMethod:(BOOL)arg1;
- (void)setPrefersWWAN:(BOOL)arg1;
- (void)setProviderConnectionPolicy:(id)arg1;
- (void)setPolicyRoute:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)_invokeOpenCompletionWithError:(id)arg1;
- (id)_queue;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
