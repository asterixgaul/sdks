//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface FCCKPOperation : PBCodable <NSCopying>
{
    NSString *_operationUUID;
    int _type;
    BOOL _last;
    BOOL _synchronousMode;
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;
}

@property(nonatomic) BOOL last; // @synthesize last=_last;
@property(nonatomic) BOOL synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(retain, nonatomic) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLast;
@property(nonatomic) BOOL hasSynchronousMode;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL hasOperationUUID;
- (void)dealloc;

@end
