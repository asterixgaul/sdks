//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface WFTriggerEvent : NSObject
{
    NSString *_triggerID;
    id <NSObject> _currentValue;
}

@property(readonly, nonatomic) id <NSObject> currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithTriggerID:(id)arg1 currentValue:(id)arg2;

@end
