//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/ISSingleton-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : NSObject <ISSingleton>
{
    long long _biometricStyle;
    NSUInteger _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (int)_deviceClass;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)resetLocationAndPrivacy;
- (void)requestFreeSpace:(NSUInteger)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id /* CDUnknownBlockType */)arg4;
- (BOOL)takePowerAssertion:(id)arg1;
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
- (BOOL)releasePowerAssertion:(id)arg1;
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (long long)deviceBiometricStyle;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id )arg2;
- (void)dealloc;
- (id)init;

@end
