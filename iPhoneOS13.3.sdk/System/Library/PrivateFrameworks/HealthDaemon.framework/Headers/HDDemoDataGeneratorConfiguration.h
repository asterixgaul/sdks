//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDDemoDataGeneratorConfiguration : NSObject
{
    BOOL _highFidelityGeneration;
    BOOL _shouldPresentNotifications;
    BOOL _shouldGenerateHealthDocuments;
    BOOL _shouldGenerateMedicalID;
    BOOL _shouldEnsureRecentWorkoutHasRoute;
    BOOL _shouldGenerateRecentLiquidsIntake;
    long long _profileType;
    long long _generationPeriodInDays;
    long long _biologicalSex;
    long long _sampleTrackingType;
    long long _nutritionTrackingType;
    long long _resultsTrackingType;
}

+ (id)configurationFromDefaults:(id)arg1;
@property(nonatomic) BOOL shouldGenerateRecentLiquidsIntake; // @synthesize shouldGenerateRecentLiquidsIntake=_shouldGenerateRecentLiquidsIntake;
@property(nonatomic) BOOL shouldEnsureRecentWorkoutHasRoute; // @synthesize shouldEnsureRecentWorkoutHasRoute=_shouldEnsureRecentWorkoutHasRoute;
@property(nonatomic) BOOL shouldGenerateMedicalID; // @synthesize shouldGenerateMedicalID=_shouldGenerateMedicalID;
@property(nonatomic) BOOL shouldGenerateHealthDocuments; // @synthesize shouldGenerateHealthDocuments=_shouldGenerateHealthDocuments;
@property(nonatomic) long long resultsTrackingType; // @synthesize resultsTrackingType=_resultsTrackingType;
@property(nonatomic) long long nutritionTrackingType; // @synthesize nutritionTrackingType=_nutritionTrackingType;
@property(nonatomic) long long sampleTrackingType; // @synthesize sampleTrackingType=_sampleTrackingType;
@property(nonatomic) long long biologicalSex; // @synthesize biologicalSex=_biologicalSex;
@property(nonatomic) BOOL shouldPresentNotifications; // @synthesize shouldPresentNotifications=_shouldPresentNotifications;
@property(nonatomic) BOOL highFidelityGeneration; // @synthesize highFidelityGeneration=_highFidelityGeneration;
@property(nonatomic) long long generationPeriodInDays; // @synthesize generationPeriodInDays=_generationPeriodInDays;
@property(nonatomic) long long profileType; // @synthesize profileType=_profileType;
- (void)persistToDefaults:(id)arg1;
- (void)configureForProfileType:(long long)arg1;
- (id)init;

@end
