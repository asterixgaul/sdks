//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FCChannelProviding;

@interface FCChannelSectionHeadlinesFetchResult : NSObject
{
    id <FCChannelProviding> _channel;
    NSArray *_sectionHeadlinesGroups;
}

@property(retain, nonatomic) NSArray *sectionHeadlinesGroups; // @synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups;
@property(retain, nonatomic) id <FCChannelProviding> channel; // @synthesize channel=_channel;
// - (void).cxx_destruct;
- (id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2;
- (id)init;

@end
