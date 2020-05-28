//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextToSpeech/TTSAssetBase.h>


@class NSArray, NSString;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding>
{
    BOOL _isInstalled;
    BOOL _isBuiltInVoice;
    NSString *_name;
    NSString *_identifier;
    NSArray *_languages;
    long long _gender;
    long long _footprint;
    NSString *_voicePath;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;
@property(readonly, nonatomic) BOOL isBuiltInVoice; // @synthesize isBuiltInVoice=_isBuiltInVoice;
@property(readonly, nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(BOOL)arg5 isBuiltIn:(BOOL)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8;

@end
