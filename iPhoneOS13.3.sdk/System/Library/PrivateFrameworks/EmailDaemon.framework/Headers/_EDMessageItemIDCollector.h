//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageQueryHelperDelegate-Protocol.h>

@class NSConditionLock, NSMutableArray, NSString;
@protocol EFScheduler;

@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate>
{
    id <EFScheduler> _scheduler;
    NSMutableArray *_messageItemIDs;
    NSConditionLock *_collectionLock;
    NSString *_errorString;
}

// - (void).cxx_destruct;
- (void)queryHelperNeedsRestart:(id)arg1;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (id)collectItemIDsWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 errorString:(id )arg5;
- (id)init;

@end
