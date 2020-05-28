//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFCacheable-Protocol.h>
#import <Email/EMCollectionItemID-Protocol.h>

@class NSString;

@interface EMThreadCollectionItemID : NSObject <EFCacheable, EMCollectionItemID>
{
    long long _conversationID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithConversationID:(long long)arg1;
- (id)init;
- (id)cachedSelf;

@end
