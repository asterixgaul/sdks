//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSNumber, NSString, WFSSHKeyPair;

@protocol WFSSHKeyFormat <NSObject>
+ (WFSSHKeyPair *)generateKeyPairWithKeySize:(NSUInteger)arg1 comment:(NSString *)arg2;
+ (WFSSHKeyPair *)keyPairFromPrivateKey:(NSData *)arg1 comment:(NSString *)arg2 error:(id )arg3;
+ (NSString *)publicKeySpecifier;
+ (NSString *)privateKeySpecifier;
+ (NSString *)publicKeyType;
+ (NSString *)privateKeyType;
+ (NSNumber *)defaultKeySize;
+ (NSArray *)possibleKeySizes;
+ (NSString *)localizedDisplayName;
@end

