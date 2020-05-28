//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest, NSString;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying>
{
    HDCodableRoutineLocationRequest *_fetchLocationRequest;
    NSString *_requestIdentifier;
    int _requestType;
    HDCodableRoutineScenarioTriggeredRequest *_scenarioTriggeredRequest;
    CDStruct_7c66fec0 _has;
}

@property(retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest; // @synthesize scenarioTriggeredRequest=_scenarioTriggeredRequest;
@property(retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest; // @synthesize fetchLocationRequest=_fetchLocationRequest;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasScenarioTriggeredRequest;
@property(readonly, nonatomic) BOOL hasFetchLocationRequest;
@property(readonly, nonatomic) BOOL hasRequestIdentifier;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;

@end
