//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBFAuthenticationRequest : NSObject
{
    NSUInteger _type;
    long long _source;
    id /* CDUnknownBlockType */ _handler;
    NSString *_passcode;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (id)publicDescription;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1;
- (id)initForBiometricAuthenticationWithSource:(long long)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2;
- (id)initForPasscode:(id)arg1 source:(long long)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (id)_initWithType:(NSUInteger)arg1 source:(long long)arg2 passcode:(id)arg3 handler:(id /* CDUnknownBlockType */)arg4;

@end
