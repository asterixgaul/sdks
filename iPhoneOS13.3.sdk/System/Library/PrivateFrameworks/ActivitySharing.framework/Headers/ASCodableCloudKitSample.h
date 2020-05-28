//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface ASCodableCloudKitSample : PBCodable <NSCopying>
{
    double _endDate;
    double _startDate;
    NSData *_uuid;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
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
@property(nonatomic) BOOL hasEndDate;
@property(nonatomic) BOOL hasStartDate;
@property(readonly, nonatomic) BOOL hasUuid;

@end
