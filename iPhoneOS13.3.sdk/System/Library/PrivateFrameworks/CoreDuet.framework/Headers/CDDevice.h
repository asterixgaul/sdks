//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDDevice : NSObject
{
    BOOL _isDefaultPaired;
    unsigned int _identifier;
    NSString *_modelIdentifier;
}

@property BOOL isDefaultPaired; // @synthesize isDefaultPaired=_isDefaultPaired;
@property(readonly) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(readonly) unsigned int identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (BOOL)requestLogDataWithError:(id )arg1;
- (id)readLogDataWithError:(id )arg1;
- (BOOL)setLogDataHandlerWithError:(id )arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (BOOL)requestSystemDataWithError:(id )arg1;
- (id)readSystemDataWithError:(id )arg1;
- (BOOL)setSystemDataHandlerWithError:(id )arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDevice:(id)arg1;
- (NSUInteger)hash;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id )arg4;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 defaultPaired:(BOOL)arg4 error:(id )arg5;

@end
