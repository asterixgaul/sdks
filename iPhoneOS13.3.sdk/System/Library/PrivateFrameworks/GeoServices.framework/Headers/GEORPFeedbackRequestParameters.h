//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEORPFeedbackIdLookupParameters, GEORPFeedbackImageUploadParameters, GEORPFeedbackLayoutConfigParameters, GEORPFeedbackQueryParameters, GEORPFeedbackSubmissionParameters, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPFeedbackIdLookupParameters *_idLookupParameters;
    GEORPFeedbackImageUploadParameters *_imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters *_layoutConfigParameters;
    GEORPFeedbackQueryParameters *_queryParameters;
    GEORPFeedbackSubmissionParameters *_submissionParameters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_idLookupParameters:1;
        unsigned int read_imageUploadParameters:1;
        unsigned int read_layoutConfigParameters:1;
        unsigned int read_queryParameters:1;
        unsigned int read_submissionParameters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_idLookupParameters:1;
        unsigned int wrote_imageUploadParameters:1;
        unsigned int wrote_layoutConfigParameters:1;
        unsigned int wrote_queryParameters:1;
        unsigned int wrote_submissionParameters:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
@property(readonly, nonatomic) BOOL hasLayoutConfigParameters;
- (void)_readLayoutConfigParameters;
@property(retain, nonatomic) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property(readonly, nonatomic) BOOL hasImageUploadParameters;
- (void)_readImageUploadParameters;
@property(retain, nonatomic) GEORPFeedbackQueryParameters *queryParameters;
@property(readonly, nonatomic) BOOL hasQueryParameters;
- (void)_readQueryParameters;
@property(retain, nonatomic) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property(readonly, nonatomic) BOOL hasIdLookupParameters;
- (void)_readIdLookupParameters;
@property(retain, nonatomic) GEORPFeedbackSubmissionParameters *submissionParameters;
@property(readonly, nonatomic) BOOL hasSubmissionParameters;
- (void)_readSubmissionParameters;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(NSUInteger)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(CDStruct_c3b9c2ee)arg10;

@end

