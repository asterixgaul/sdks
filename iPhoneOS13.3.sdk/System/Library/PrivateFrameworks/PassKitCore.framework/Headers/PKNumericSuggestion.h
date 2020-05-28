//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject
{
    BOOL _usedMaximumSuggestion;
    NSDecimalNumber *_value;
    NSString *_title;
    NSString *_displayValue;
}

+ (id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2;
+ (id)suggestionWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;
@property(nonatomic) BOOL usedMaximumSuggestion; // @synthesize usedMaximumSuggestion=_usedMaximumSuggestion;
@property(copy, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSDecimalNumber *value; // @synthesize value=_value;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2;

@end
