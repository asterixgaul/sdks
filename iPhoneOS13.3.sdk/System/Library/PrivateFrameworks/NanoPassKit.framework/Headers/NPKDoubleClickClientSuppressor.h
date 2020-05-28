//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPKAssertion, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface NPKDoubleClickClientSuppressor : NSObject
{
    NPKAssertion *_suppressionAssertion;
    NSMutableIndexSet *_suppressionRequestTokens;
    NSUInteger _nextSuppressionRequestToken;
    NSObject<OS_dispatch_queue> *_suppressorQueue;
}

+ (BOOL)isSuppressingDoubleClickClients;
+ (void)endDoubleClickClientSuppressionWithRequestToken:(NSUInteger)arg1;
+ (NSUInteger)requestDoubleClickClientSuppressionWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suppressorQueue; // @synthesize suppressorQueue=_suppressorQueue;
@property(nonatomic) NSUInteger nextSuppressionRequestToken; // @synthesize nextSuppressionRequestToken=_nextSuppressionRequestToken;
@property(retain) NSMutableIndexSet *suppressionRequestTokens; // @synthesize suppressionRequestTokens=_suppressionRequestTokens;
@property(retain, nonatomic) NPKAssertion *suppressionAssertion; // @synthesize suppressionAssertion=_suppressionAssertion;
// - (void).cxx_destruct;
- (void)_postSuppressionStateChanged;
- (void)_acquireSuppressionAssertionWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_acquireSuppressionAssertionIfNeededWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isSuppressingDoubleClickClients;
- (void)endDoubleClickClientSuppressionWithRequestToken:(NSUInteger)arg1;
- (NSUInteger)requestDoubleClickClientSuppressionWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (id)init;

@end
