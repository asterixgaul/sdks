//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>
{
}

+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)metadataGroup;
@property(copy, nonatomic) NSNumber *selected;
@property(copy, nonatomic) NSArray *metadata;
@property(copy, nonatomic) NSString *groupTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
