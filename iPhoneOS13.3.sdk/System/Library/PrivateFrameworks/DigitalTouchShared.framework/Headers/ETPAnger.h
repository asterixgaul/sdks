//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData;

@interface ETPAnger : PBCodable <NSCopying>
{
    NSData *_delays;
    float _duration;
    float _normalizedCenterX;
    float _normalizedCenterY;
    NSData *_points;
    struct {
        unsigned int duration:1;
        unsigned int normalizedCenterX:1;
        unsigned int normalizedCenterY:1;
    } _has;
}

@property(retain, nonatomic) NSData *points; // @synthesize points=_points;
@property(retain, nonatomic) NSData *delays; // @synthesize delays=_delays;
@property(nonatomic) float normalizedCenterY; // @synthesize normalizedCenterY=_normalizedCenterY;
@property(nonatomic) float normalizedCenterX; // @synthesize normalizedCenterX=_normalizedCenterX;
@property(nonatomic) float duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPoints;
@property(readonly, nonatomic) BOOL hasDelays;
@property(nonatomic) BOOL hasNormalizedCenterY;
@property(nonatomic) BOOL hasNormalizedCenterX;
@property(nonatomic) BOOL hasDuration;

@end
