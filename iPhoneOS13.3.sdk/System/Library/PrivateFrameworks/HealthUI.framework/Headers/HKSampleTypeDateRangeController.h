//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, NSDictionary, NSHashTable, NSString, _HKDateRangeQuery;

@interface HKSampleTypeDateRangeController : NSObject
{
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    NSString *_name;
    NSDictionary _dateRangesBySampleType;
}

@property(readonly, nonatomic) NSDictionary *dateRangesBySampleType; // @synthesize dateRangesBySampleType=_dateRangesBySampleType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2;
- (void)_resultsDidUpdate:(NSDictionary )arg1;
- (void)_beginUpdatesWithRetryAttemptCount:(long long)arg1;
- (void)_alertObserverDidUpdateDateRanges:(id)arg1;
- (void)_alertObserversDidUpdateDateRanges;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)dateRangeForSampleType:(id)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;

@end
