//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying>
{
    NSString *personaName;
    BOOL shouldFetchAttributes;
    BOOL _isSystemPersona;
    BOOL _isDefaultPersona;
    BOOL _isEnterprisePersona;
    BOOL _isPersonalPersona;
    BOOL _isDisabled;
    unsigned int _uid;
    unsigned int _gid;
    NSString *_userPersonaUniqueString;
    NSString *_userPersonaNickName;
    NSUInteger _userPersonaType;
}

+ (BOOL)currentPersonaMatchesPath:(id)arg1;
+ (id)currentPersona;
@property(nonatomic) NSUInteger userPersonaType; // @synthesize userPersonaType=_userPersonaType;
@property(copy, nonatomic) NSString *userPersonaNickName; // @synthesize userPersonaNickName=_userPersonaNickName;
@property(copy, nonatomic) NSString *userPersonaUniqueString; // @synthesize userPersonaUniqueString=_userPersonaUniqueString;
@property(nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) BOOL isPersonalPersona; // @synthesize isPersonalPersona=_isPersonalPersona;
@property(nonatomic) BOOL isEnterprisePersona; // @synthesize isEnterprisePersona=_isEnterprisePersona;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(nonatomic) BOOL isDefaultPersona; // @synthesize isDefaultPersona=_isDefaultPersona;
@property(nonatomic) BOOL isSystemPersona; // @synthesize isSystemPersona=_isSystemPersona;
// - (void).cxx_destruct;
- (BOOL)isEqualToPersona:(id)arg1;
- (BOOL)commitChangesWithError:(id )arg1;
- (BOOL)commitChanges;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)setPropertiesFromUserPersona:(id)arg1;
- (id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1;
- (id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1;
- (id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1;
- (id)generateAndRestorePersonaContextWithIdentityString:(id)arg1;
- (id)restorePersonaWithSavedPersonaContext:(id)arg1;
- (id)copyCurrentPersonaContextWithError:(id )arg1;
- (void)fetchAttributesIfNeeded;
- (id)init;

@end
