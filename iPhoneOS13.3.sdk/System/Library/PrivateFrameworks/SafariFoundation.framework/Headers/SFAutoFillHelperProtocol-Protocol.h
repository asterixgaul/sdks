//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol SFAutoFillHelperProtocol <NSObject>
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(NSString *)arg1 confirmPasswordRules:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
@end
