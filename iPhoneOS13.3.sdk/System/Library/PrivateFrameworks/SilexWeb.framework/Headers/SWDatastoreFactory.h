//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWDatastoreFactory-Protocol.h>

@protocol SWLogger;

@interface SWDatastoreFactory : NSObject <SWDatastoreFactory>
{
    id <SWLogger> _logger;
}

@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
// - (void).cxx_destruct;
- (id)createDatastoreFromMessage:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end
