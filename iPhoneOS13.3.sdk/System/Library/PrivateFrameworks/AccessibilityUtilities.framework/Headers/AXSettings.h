//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXSSKeyboardCommandMap, AXVoiceOverActivity, NSArray, NSData, NSDate, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, NSUUID;

@interface AXSettings : NSObject
{
    NSLock *_synchronizeDomainsLock;
    NSMutableSet *_migratedSwitchControlMenuItemsPreferenceKeys;
    NSMutableDictionary *_unarchivedVoiceCache;
    BOOL _assistiveTouchMotionTrackerShouldOffsetBufferPoints;
    BOOL _assistiveTouchInternalOnlyHiddenNubbitModeEnabled;
    BOOL _writeAXLogsToFile;
    BOOL _voiceOverVerbositySpeakCustomActionsHint;
    BOOL _touchAccommodationsHoldDurationAllowsSwipeGesturesToBypass;
    float _reduceWhitePointLevel;
    double _voiceOverHapticIntensity;
    double _lastPlatformSwitchTimeResetCount;
    double _lastGuidedAccessTimeLimitResetCount;
    double _lastGuidedAccessTimeResetCount;
    double _lastHearingAidControlPanelTimeResetCount;
    double _lastHearingAidHandoffTimeResetCount;
    NSMutableSet *_registeredNotifications;
    NSMutableDictionary *_synchronizeDomains;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
@property(nonatomic) double lastHearingAidHandoffTimeResetCount; // @synthesize lastHearingAidHandoffTimeResetCount=_lastHearingAidHandoffTimeResetCount;
@property(nonatomic) double lastHearingAidControlPanelTimeResetCount; // @synthesize lastHearingAidControlPanelTimeResetCount=_lastHearingAidControlPanelTimeResetCount;
@property(nonatomic) double lastGuidedAccessTimeResetCount; // @synthesize lastGuidedAccessTimeResetCount=_lastGuidedAccessTimeResetCount;
@property(nonatomic) double lastGuidedAccessTimeLimitResetCount; // @synthesize lastGuidedAccessTimeLimitResetCount=_lastGuidedAccessTimeLimitResetCount;
@property(nonatomic) double lastPlatformSwitchTimeResetCount; // @synthesize lastPlatformSwitchTimeResetCount=_lastPlatformSwitchTimeResetCount;
@property(nonatomic) float reduceWhitePointLevel; // @synthesize reduceWhitePointLevel=_reduceWhitePointLevel;
@property(nonatomic) BOOL touchAccommodationsHoldDurationAllowsSwipeGesturesToBypass; // @synthesize touchAccommodationsHoldDurationAllowsSwipeGesturesToBypass=_touchAccommodationsHoldDurationAllowsSwipeGesturesToBypass;
@property(nonatomic) BOOL voiceOverVerbositySpeakCustomActionsHint; // @synthesize voiceOverVerbositySpeakCustomActionsHint=_voiceOverVerbositySpeakCustomActionsHint;
@property(nonatomic) double voiceOverHapticIntensity; // @synthesize voiceOverHapticIntensity=_voiceOverHapticIntensity;
@property(nonatomic) BOOL writeAXLogsToFile; // @synthesize writeAXLogsToFile=_writeAXLogsToFile;
@property(nonatomic) BOOL assistiveTouchInternalOnlyHiddenNubbitModeEnabled; // @synthesize assistiveTouchInternalOnlyHiddenNubbitModeEnabled=_assistiveTouchInternalOnlyHiddenNubbitModeEnabled;
@property(nonatomic) BOOL assistiveTouchMotionTrackerShouldOffsetBufferPoints; // @synthesize assistiveTouchMotionTrackerShouldOffsetBufferPoints=_assistiveTouchMotionTrackerShouldOffsetBufferPoints;
// - (void).cxx_destruct;
@property(nonatomic) BOOL voltaDataCollectionEnabled;
@property(nonatomic) BOOL voltaEnabled;
@property(nonatomic) BOOL callAudioRoutingAutoAnswerEnabled;
@property(nonatomic) double callAudioRoutingAutoAnswerDelay;
@property(nonatomic) BOOL reachabilityEnabled;
@property(nonatomic) BOOL didResetD22Preferences;
@property(nonatomic) long long guidedAccessUsageCount;
@property(nonatomic) long long voiceOverBSIUsageCount;
@property(nonatomic) long long brokenHomeButtonCount;
@property(nonatomic) long long guidedAccessTimeLimitsUsageCount;
@property(nonatomic) long long characterVoicesUsageCount;
@property(nonatomic) long long hearingAidControlPanelCount;
@property(nonatomic) long long hearingAidHandOffCount;
@property(nonatomic) long long switchControlPlatformSwitchedCount;
@property(nonatomic) long long tapticTimeUsageCount;
@property(nonatomic) long long magnifierUsageCount;
@property(copy, nonatomic) NSDictionary *assistiveTouchUsageCount;
@property(nonatomic) double lastAssistiveTouchTimeResetCount;
@property(nonatomic) double lastCharacterVoiceTimeResetCount;
- (void)setlastPlatformSwitchTimeResetCount:(double)arg1;
- (void)setlastGuidedAccessTimeLimitResetCount:(double)arg1;
- (void)setlastGuidedAccessTimeResetCount:(double)arg1;
@property(nonatomic) double lastTapticTimeResetCount;
@property(nonatomic) double lastBrailleScreenInputTimeResetCount;
- (void)setlastHearingAidControlPanelTimeResetCount:(double)arg1;
- (void)setlastHearingAidHandoffTimeResetCount:(double)arg1;
@property(nonatomic) double lastSmartInvertColorsEnablement;
@property(nonatomic) double lastMagnifierResetCount;
@property(nonatomic) BOOL shouldLimitDisplayRefreshRate;
@property(retain, nonatomic) NSString *medicalPreamble;
@property(nonatomic) BOOL shouldTTYMedicalPreamble;
@property(nonatomic) BOOL shouldSpeakMedicalPreamble;
@property(nonatomic) BOOL shouldFlashForAlertInSilentMode;
@property(nonatomic) BOOL localizationQACaptionMode;
@property(nonatomic) BOOL localizationQACaptionShowLocalizedString;
@property(nonatomic) BOOL localizationQACaptionShowUSString;
@property(nonatomic) BOOL localizationQACaptionShowFilePath;
@property(retain, nonatomic) NSURL *alexLocalAssetURL;
@property(nonatomic) long long voiceOverSpeakSecondsEncoding;
- (id)gizmoGetWatchFaceAutoSpeakPreferences;
- (BOOL)gizmoGetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3;
- (void)gizmoSetAutoSpeakEnabledForComplication:(id)arg1 slot:(id)arg2 face:(id)arg3 toggle:(BOOL)arg4;
@property(nonatomic) BOOL gizmoApplicationAccessibilityEnabled;
@property(nonatomic) BOOL appValidationTestingMode;
@property(nonatomic) BOOL fullKeyboardAccessFocusRingTimeoutEnabled;
@property(nonatomic) double fullKeyboardAccessFocusRingTimeout;
@property(retain, nonatomic) AXSSKeyboardCommandMap *fullKeyboardAccessCommandMap;
@property(nonatomic) double magnifierBrightness;
@property(nonatomic) double magnifierContrast;
@property(nonatomic) BOOL magnifierFilterInverted;
@property(nonatomic) NSUInteger magnifierFilterSetIdentifier;
@property(nonatomic) double magnifierZoomLevel;
@property(nonatomic) BOOL magnifierShouldUseVideoStabilization;
@property(nonatomic) BOOL magnifierShouldAdjustFiltersForAmbientLight;
@property(nonatomic) BOOL magnifierEnabled;
@property(nonatomic) BOOL stickyKeysBeepEnabled;
@property(nonatomic) BOOL stickyKeysShiftToggleEnabled;
@property(nonatomic) BOOL stickyKeysEnabled;
@property(nonatomic) double touchAccommodationsTapActivationTimeout;
@property(nonatomic) long long touchAccommodationsTapActivationMethod;
@property(nonatomic) double touchAccommodationsIgnoreRepeatDuration;
@property(nonatomic) BOOL touchAccommodationsIgnoreRepeatEnabled;
@property(readonly, nonatomic) long long touchAccommodationsHoldDurationSwipeGestureSensitivity;
@property(nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;
@property(nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass;
@property(nonatomic) double touchAccommodationsHoldDuration;
@property(nonatomic) BOOL touchAccommodationsHoldDurationEnabled;
@property(nonatomic) BOOL touchAccommodationsUsageConfirmed;
@property(nonatomic) BOOL touchAccommodationsTripleClickConfirmed;
@property(readonly, nonatomic) BOOL touchAccommodationsAreConfigured;
@property(nonatomic) BOOL touchAccommodationsEnabled;
- (void)_updateTouchAccommodationsTripleClickSetting;
@property(nonatomic) BOOL shouldStreamToRightAid;
@property(nonatomic) BOOL shouldStreamToLeftAid;
@property(nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property(nonatomic) BOOL independentHearingAidSettings;
- (void)voiceOverResetSoundAndHapticPreferences;
- (void)voiceOverSetHapticEnabled:(BOOL)arg1 forEvent:(id)arg2;
- (id)voiceOverHapticEnabledForEvent:(id)arg1;
- (void)voiceOverSetSoundEnabled:(BOOL)arg1 forEvent:(id)arg2;
- (id)voiceOverSoundEnabledForEvent:(id)arg1;
- (void)_voiceOverSetSoundOrHapticValue:(id)arg1 forPreference:(id)arg2 outputEvent:(id)arg3;
- (id)_voiceOverSoundOrHapticValueForPreference:(id)arg1 outputEvent:(id)arg2;
@property(retain, nonatomic) NSDictionary *voiceOverSoundAndHapticPreferences;
@property(nonatomic) long long voiceOverSpeakDiscoveredTextFeedback;
@property(nonatomic) BOOL voiceOverShouldSpeakDiscoveredText;
@property(nonatomic) BOOL voiceOverTouchBrailleShowGeneralStatus;
@property(nonatomic) BOOL voiceOverTouchUpdateBrailleWithoutConnectedDisplay;
@property(nonatomic) BOOL voiceOverTouchBrailleShowTextStyleStatus;
@property(nonatomic) BOOL voiceOverTouchBrailleShouldReverseDots;
@property(nonatomic) long long voiceOverTapticChimesSoundType;
@property(nonatomic) long long voiceOverTapticChimesFrequencyEncoding;
@property(nonatomic) long long voiceOverTapticChimesAvailability;
@property(nonatomic) BOOL tapticTimeInternalFlashScreenEnabled;
@property(nonatomic) BOOL voiceOverTapticChimesEnabled;
@property(nonatomic) float voiceOverTapticTimeSpeed;
@property(nonatomic) long long voiceOverTapticTimeEncoding;
@property(nonatomic) BOOL voiceOverTapticTimeMode;
@property(readonly, nonatomic) BOOL tapticTimeIsAvailable;
@property(nonatomic) long long tapToSpeakTimeAvailability;
@property(nonatomic) BOOL tapToSpeakTimeEnabled;
- (void)_setAudioHardwareChannelLayout:(id)arg1;
- (id)_audioHardwareChannelLayout;
@property(nonatomic) long long voiceOverNavigationDirectionMode;
@property(nonatomic) double voiceOverDoubleTapInterval;
@property(nonatomic) double voiceOverBrailleKeyDebounceTimeout;
@property(nonatomic) double voiceOverBrailleAlertDisplayDuration;
@property(nonatomic) BOOL voiceOverTouchBrailleGesturesDidPlayCalibrationHint;
@property(nonatomic) long long voiceOverTouchBrailleGesturesLockedTypingMode;
@property(nonatomic) int voiceOverTouchBrailleGesturesLockedOrientation;
@property(nonatomic) BOOL voiceOverTouchBrailleGesturesShouldUseLockedConfiguration;
@property(nonatomic) BOOL voiceOverShouldOutputToHearingAid;
- (float)voiceOverSpeakingRateForLanguage:(id)arg1;
- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_voiceOverTouchSpeakingRateLanguages;
- (id)voiceOverAlternativeVoiceIdentifier:(id)arg1;
- (void)setVoiceOverAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (void)clearVoicePrefersCompactSettings;
- (void)configureZoomForLoginSession;
- (void)addRotorOptionsForLoginSession;
@property(nonatomic) BOOL switchControlUserDidReadUSBRestrictedModeAlert;
@property(nonatomic) BOOL voiceOverUserDidReadUSBRestrictedModeAlert;
@property(nonatomic) BOOL switchControlShouldDisallowUSBRestrictedMode;
@property(nonatomic) BOOL voiceOverShouldDisallowUSBRestrictedMode;
@property(retain, nonatomic) NSData *voiceOverCustomCommandProfile;
@property(nonatomic) long long voiceOverDescribedMedia;
@property(nonatomic) long long voiceOverPreferredTVInteractionMode;
@property(nonatomic) BOOL voiceOverSilenceAnnouncements;
@property(nonatomic) BOOL voiceOverSpeakNonfocusableElementsAfterDelay;
@property(nonatomic) BOOL voiceOverShowSoftwareKeyboardWithBraille;
@property(nonatomic) BOOL voiceOverBrailleGradeTwoAutoTranslateEnabled;
@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;
@property(nonatomic) BOOL voiceOverAlwaysUseNemethCodeForMathEnabled;
@property(copy, nonatomic) NSArray *voiceOverBrailleLanguageRotorItems;
@property(copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;
- (BOOL)anyUserPreferredLangaugeIsRTL;
- (void)_localeChange:(id)arg1;
@property(nonatomic) BOOL voiceOverEditAppsActionEnabled;
@property(nonatomic) BOOL voiceOverSpeakActionConfirmation;
@property(copy, nonatomic) NSArray *voiceOverRotorItems;
@property(nonatomic) BOOL voiceOverSpeakNotificationsEnabled;
@property(nonatomic) BOOL voiceOverSpeakingRateInRotorEnabled;
@property(nonatomic) BOOL voiceOverHapticsEnabled;
@property(nonatomic) BOOL voiceOverAdjustSoundVolumeIndependently;
@property(nonatomic) double voiceOverSoundVolume;
@property(nonatomic) BOOL voiceOverVerbosityEmojiSuffixEnabled;
@property(nonatomic) BOOL voiceOverVerbosityEmojisEnabled;
@property(nonatomic) BOOL voiceOverLanguageDetectionEnabled;
@property(nonatomic) BOOL voiceOverSoundEffectsEnabled;
@property(nonatomic) BOOL voiceOverPitchChangeEnabled;
@property(nonatomic) double voiceOverPitch;
@property(nonatomic) BOOL voiceOverAudioFollowsHDMIAudio;
@property(nonatomic) BOOL voiceOverAudioDuckingEnabled;
@property(nonatomic) BOOL voiceOverHintsEnabled;
@property(nonatomic) BOOL voiceOverBrailleWordWrapEnabled;
@property(readonly, nonatomic) BOOL voiceOverBrailleGesturesEnabled;
@property(readonly, nonatomic) BOOL voiceOverHandwritingEnabled;
- (BOOL)_voiceOverRotorItemEnabled:(id)arg1;
@property(nonatomic) long long voiceOverActivationWorkaround;
@property(nonatomic) long long voiceOverBrailleGesturesTypingFeedback;
@property(nonatomic) long long voiceOverSoftwareTypingFeedback;
@property(nonatomic) long long voiceOverHardwareTypingFeedback;
@property(nonatomic) long long voiceOverPhoneticsFeedback;
@property(nonatomic) long long voiceOverNavigateImagesOption;
@property(nonatomic) long long voiceOverHelpMode;
@property(nonatomic) BOOL voiceOverLargeCursorEnabled;
@property(nonatomic) BOOL voiceOverSpeakTableColumnRowInformation;
@property(nonatomic) BOOL voiceOverSpeakTableHeaders;
@property(nonatomic) BOOL voiceOverTouchSingleLetterQuickNavEnabled;
@property(nonatomic) long long voiceOverCapitalLetterFeedback;
@property(nonatomic) long long voiceOverDeletionFeedback;
@property(nonatomic) long long voiceOverLinkFeedback;
@property(nonatomic) long long voiceOverPunctuationLevel;
@property(copy, nonatomic) NSUUID *voiceOverPunctuationGroup;
@property(copy, nonatomic) NSUUID *voiceOverDefaultPunctuationGroup;
@property(nonatomic) BOOL voiceOverTouchBraillePanningAutoTurnsReadingContent;
@property(nonatomic) long long voiceOverTouchBrailleGesturesInputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayOutputMode;
@property(nonatomic) long long voiceOverTouchBrailleDisplayInputMode;
@property(retain, nonatomic) NSArray *customPronunciationSubstitutions;
@property(nonatomic) CGPoint quickSpeakNubbitNormalizedPosition;
@property(nonatomic) BOOL siriAutoUpdateListInitialized;
- (void)_removeSpeakingRatePreferenceForLanguage:(id)arg1;
- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;
- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;
- (id)_quickSpeakSpeakingRateLanguages;
- (id)_quickSpeakAltVoices;
- (id)_quickSpeakPrefersCompact;
- (id)_voiceOverPrefersCompactByLanguage;
- (id)_voiceOverAlternativeVoiceIdentifiers;
- (id)_switchControlAltVoices;
- (id)_switchControlPrefersCompact;
- (id)_switchControlScannerDefaultDialect;
- (id)_voiceOverDefaultDialect;
- (void)_clearWhitetailMigrationSettings;
- (id)selectedSpeechVoiceIdentifiers;
- (void)setUserDidSelectVoiceForLanguage:(id)arg1 source:(long long)arg2;
- (void)setSpeechVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 source:(long long)arg3;
- (BOOL)userDidSelectVoiceForLanguage:(id)arg1 source:(long long)arg2;
- (id)speechVoiceIdentifierForLanguage:(id)arg1 source:(long long)arg2 exists:(BOOL )arg3;
@property(nonatomic) NSUInteger quickSpeakHighlightOption;
@property(nonatomic) long long quickSpeakSentenceHighlightColor;
@property(nonatomic) long long quickSpeakWordHighlightColor;
@property(nonatomic) NSUInteger quickSpeakSentenceHighlightOption;
@property(nonatomic) float quickSpeakSpeakingRate;
@property(nonatomic) BOOL quickSpeakUnderlineSentence;
@property(nonatomic) BOOL quickSpeakHighlightText;
@property(nonatomic) float quickSpeakVolume;
@property(nonatomic) long long speechControllerDoubleTapAction;
@property(nonatomic) long long speechControllerLongPressAction;
@property(nonatomic) BOOL showSpeechController;
@property(nonatomic) BOOL wordFeedbackEnabled;
@property(nonatomic) BOOL quickTypeWordFeedbackEnabled;
@property(nonatomic) double characterFeedbackDelayDuration;
@property(nonatomic) BOOL phoneticFeedbackEnabled;
@property(nonatomic) BOOL letterFeedbackEnabled;
@property(nonatomic) BOOL speakCorrectionsEnabled;
@property(copy, nonatomic) NSArray *tripleClickOrderedOptions;
@property(nonatomic) BOOL classicInvertColors;
@property(nonatomic) BOOL guidedAccessEnableExperimentalUI;
@property(retain, nonatomic) NSNumber *guidedAccessOverrideTimeRestrictionDuration;
@property(nonatomic) BOOL guidedAccessDisallowDirectInactiveToActiveTransition;
@property(nonatomic) BOOL enableHearingAidReporter;
@property(nonatomic) BOOL skipHearingAidMFiAuth;
@property(nonatomic) BOOL voiceOverHearingAidRoutingEnabled;
@property(nonatomic) long long voiceOverKeyboardModifierChoice;
@property(nonatomic) double voiceOverContinuousPathKeyboardStartTimeout;
@property(retain, nonatomic) NSArray *currentVoices;
@property(readonly, nonatomic) BOOL currentVoicesExist;
@property(readonly, nonatomic) BOOL extantVoicesExist;
@property(retain, nonatomic) NSArray *extantVoices;
- (id)testingExtantVoices;
- (void)setTestingExtantVoices:(id)arg1;
- (id)_retrieveVoices:(id)arg1;
- (void)_setVoiceArray:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSArray *voiceOverActivities;
- (id)programmingActivity;
@property(retain, nonatomic) AXVoiceOverActivity *voiceOverSelectedActivity;
@property(nonatomic) BOOL voiceOverUseOCRAccuratePath;
@property(nonatomic) BOOL voiceOverUseActiveSiriVoice;
@property(nonatomic) BOOL didTriggerSOSToday;
- (BOOL)didTriggerSOSValueSet;
@property(nonatomic) BOOL syncPronunciationsWithCloudKit;
@property(nonatomic) BOOL enableVoiceOverCaptions;
@property(nonatomic) long long internalLoggingColorTheme;
@property(nonatomic) BOOL shouldPerformValidationsAtRuntime;
@property(nonatomic) BOOL useNewAXBundleLoader;
@property(nonatomic) BOOL logAXNotificationPosting;
@property(nonatomic) BOOL ignoreAXServerEntitlements;
@property(nonatomic) BOOL ignoreAXAsserts;
@property(nonatomic) BOOL includeBacktraceInLogs;
@property(nonatomic) BOOL validateSecondPartyApps;
@property(nonatomic) BOOL assistiveTouchInternalOnlyPearlTrackingEnabled;
- (BOOL)assistiveTouchInternalOnlyHiddenNubbitMode;
@property(nonatomic) BOOL assistiveTouchCameraSwitchPreviewEnabled;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;
@property(retain, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;
@property(copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsECID;
@property(nonatomic) BOOL gaxInternalSettingsSystemDidRestartDueToLowBattery;
@property(nonatomic) BOOL gaxInternalSettingsIsActiveAppSelfLocked;
@property(nonatomic) BOOL gaxInternalSettingsTimeRestrictionHasExpired;
@property(copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;
@property(copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;
@property(retain, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;
@property(retain, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;
@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;
@property(readonly, nonatomic) BOOL guidedAccessAllowsMultipleWindows;
@property(nonatomic) long long guidedAccessAutoLockTimeInSeconds;
@property(readonly, nonatomic) BOOL guidedAccessOverrideIdleTime;
@property(nonatomic) BOOL guidedAccessShouldSpeakForTimeRestrictionEvents;
@property(readonly, nonatomic) NSString *guidedAccessDefaultToneIdentifierForTimeRestrictionEvents;
@property(copy, nonatomic) NSString *guidedAccessToneIdentifierForTimeRestrictionEvents;
@property(nonatomic) BOOL guidedAccessAllowsUnlockWithTouchID;
@property(nonatomic) BOOL guidedAccessAXFeaturesEnabled;
@property(nonatomic) BOOL zoomDebugShowExternalFocusRect;
@property(nonatomic) BOOL zoomDebugDisableZoomLensScaleTransform;
- (void)zoomUserHadLegacyZoomEnabled:(BOOL )arg1 wasZoomedIn:(BOOL )arg2 withScale:(double )arg3;
@property(nonatomic) BOOL zoomAutopannerShouldPanWithAcceleration;
@property(nonatomic) BOOL zoomScrollWheelKbShortcutEnabled;
@property(nonatomic) BOOL zoomTempToggleZoomKbShortcutEnabled;
@property(nonatomic) BOOL zoomSwitchZoomModeKbShortcutEnabled;
@property(nonatomic) BOOL zoomResizeZoomWindowKbShortcutEnabled;
@property(nonatomic) BOOL zoomPanZoomKbShortcutEnabled;
@property(nonatomic) BOOL zoomToggleZoomKbShortcutEnabled;
@property(nonatomic) BOOL zoomAdjustZoomLevelKbShortcutEnabled;
@property(nonatomic) BOOL zoomKeyboardShortcutsEnabled;
@property(nonatomic) BOOL zoomShouldAllowFullscreenAutopanning;
@property(nonatomic) long long zoomControllerColor;
@property(nonatomic) double zoomIdleSlugOpacity;
@property(retain, nonatomic) NSOrderedSet *zoomPreferredDockPositions;
@property(retain, nonatomic) NSOrderedSet *zoomPreferredLensModes;
@property(nonatomic) double zoomPreferredMaximumZoomScale;
@property(retain, nonatomic) NSString *zoomPreferredCurrentDockPosition;
@property(retain, nonatomic) NSString *zoomPreferredCurrentLensMode;
@property(nonatomic) BOOL zoomAlwaysUseWindowedZoomForTyping;
@property(nonatomic) BOOL zoomSlugTapAndSlideToAdjustZoomLevelEnabled;
@property(nonatomic) long long zoomSlugTripleTapAction;
@property(nonatomic) long long zoomSlugDoubleTapAction;
@property(nonatomic) long long zoomSlugSingleTapAction;
@property(nonatomic) BOOL zoomPeekZoomEverEnabled;
@property(nonatomic) BOOL zoomPeekZoomEnabled;
@property(nonatomic) BOOL zoomShouldShowSlug;
@property(nonatomic) BOOL zoomShouldFollowFocus;
@property(retain, nonatomic) NSString *zoomCurrentLensMode;
@property(nonatomic) BOOL zoomInStandby;
@property(retain, nonatomic) NSString *zoomCurrentLensEffect;
@property(nonatomic) CGPoint zoomSlugNormalizedPosition;
@property(nonatomic) CGPoint zoomPanOffset;
@property(nonatomic) double zoomScale;
@property(nonatomic) double dockSize;
@property(nonatomic) CGRect zoomWindowFrame;
@property(nonatomic) BOOL zoomPreferencesWereInitialized;
- (void)_switchControlClearMenuItemMigrationTracking;
- (void)_switchControlClearMenuItemPreferences;
@property(nonatomic) long long switchControlScanAfterTapLocation;
@property(nonatomic) BOOL switchControlIsEnabledAsSlave;
@property(nonatomic) BOOL switchControlShouldAlwaysActivateKeyboardKeys;
@property(nonatomic) double switchControlAutoTapTimeout;
@property(nonatomic) long long switchControlTapBehavior;
@property(nonatomic) double switchControlDwellTime;
@property(nonatomic) long long switchControlScanningStyle;
@property(nonatomic) long long switchControlPointPickerSelectionStyle;
@property(nonatomic) BOOL switchControlRestartScanningAtCurrentKey;
@property(nonatomic) BOOL switchControlShouldUseExtendedKeyboardPredictions;
@property(retain, nonatomic) NSArray *switchControlMediaControlsTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlMediaControlsMenuItems;
@property(readonly, nonatomic) NSArray *mediaControlsKeys;
@property(retain, nonatomic) NSArray *switchControlSettingsTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlSettingsMenuItems;
@property(readonly, nonatomic) NSArray *settingsKeys;
@property(retain, nonatomic) NSArray *switchControlDeviceTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlDeviceMenuItems;
@property(readonly, nonatomic) NSArray *deviceKeys;
@property(retain, nonatomic) NSArray *switchControlGesturesTopLevelMenuItems;
@property(retain, nonatomic) NSArray *switchControlGesturesMenuItems;
@property(readonly, nonatomic) NSArray *gestureKeys;
@property(nonatomic) BOOL switchControlShouldUseShortFirstPage;
- (BOOL)_switchControlHasEmptyTopLevelMenuItems:(id)arg1;
@property(readonly, nonatomic) BOOL switchControlHasEmptyTopLevelMenu;
@property(retain, nonatomic) NSArray *switchControlTopLevelMenuItems;
- (id)topLevelKeys;
- (id)_switchControlMigratePreMonarchIncludedMenuItemsForNewTypes:(id)arg1;
- (id)_switchControlMenuItemsForPreferenceKey:(id)arg1 allTypes:(id)arg2 enabledByDefault:(BOOL)arg3 topLevel:(BOOL)arg4;
@property(retain, nonatomic) NSUUID *switchControlLaunchRecipeUUID;
@property(retain, nonatomic) NSArray *switchControlRecipes;
@property(retain, nonatomic) NSDictionary *assistiveTouchMainScreenCustomization;
@property(readonly, nonatomic) NSDictionary *assistiveTouchMainScreenDefaultCustomization;
@property(nonatomic) double assistiveTouchIdleOpacity;
- (BOOL)assistiveTouchCustomizationEnabled;
- (void)updateCustomizableMouse:(id)arg1;
@property(readonly, nonatomic) NSArray *assistiveTouchMouseCustomizedClickActions;
@property(retain, nonatomic) NSString *assistiveTouchOrbAction;
@property(retain, nonatomic) NSString *assistiveTouchLongPressAction;
@property(nonatomic) double assistiveTouchLongPressActionDuration;
@property(nonatomic) double assistiveTouchDoubleTapActionTimeout;
@property(retain, nonatomic) NSString *assistiveTouchDoubleTapAction;
@property(retain, nonatomic) NSString *assistiveTouchSingleTapAction;
- (BOOL)assistiveTouchScannerPrefersCompact:(id)arg1;
- (void)setAssistiveTouchScannerPrefersCompact:(BOOL)arg1 forLanguage:(id)arg2;
@property(nonatomic) BOOL assistiveTouchScannerAddedTripleClickAutomatically;
@property(nonatomic) BOOL assistiveTouchSwitchUsageConfirmed;
@property(nonatomic) long long assistiveTouchHeadMovementSensitivity;
- (void)assistiveTouchMotionTrackerShouldOffsetBufferPoints:(BOOL)arg1;
@property(nonatomic) double assistiveTouchMotionTrackerYNormalizationOffset;
@property(nonatomic) double assistiveTouchMotionTrackerXNormalizationOffset;
@property(nonatomic) double assistiveTouchMotionTrackerYNormalizationOrder;
@property(nonatomic) double assistiveTouchMotionTrackerXNormalizationOrder;
@property(nonatomic) double assistiveTouchMotionTrackerSmoothingMaxDelta;
@property(nonatomic) NSUInteger assistiveTouchMotionTrackerSmoothingBufferSize;
@property(readonly, nonatomic) BOOL assistiveTouchMotionTrackerConfigurable;
@property(readonly, nonatomic) BOOL assistiveTouchMotionTrackerEnableHIDTracking;
@property(nonatomic) NSUInteger assistiveTouchMouseZoomPanningStyle;
@property(nonatomic) BOOL assistiveTouchMouseDwellControlShowPrompt;
@property(nonatomic) BOOL assistiveTouchMouseDwellControlMutatedMenu;
@property(retain, nonatomic) NSDictionary *assistiveTouchMouseDwellControlCornerCustomization;
@property(nonatomic) double assistiveTouchMouseDwellControlMovementToleranceRadius;
@property(nonatomic) double assistiveTouchMouseDwellControlActivationTimeout;
@property(retain, nonatomic) NSString *assistiveTouchMouseDwellControlAutorevertAction;
@property(nonatomic) BOOL assistiveTouchMouseDwellControlAutorevertEnabled;
@property(nonatomic) BOOL assistiveTouchMouseDwellControlEnabled;
@property(nonatomic) double assistiveTouchMousePointerTimeout;
@property(nonatomic) BOOL assistiveTouchMousePointerTimeoutEnabled;
@property(nonatomic) double assistiveTouchMousePointerSizeMultiplier;
@property(nonatomic) long long assistiveTouchMousePointerColor;
@property(nonatomic) long long assistiveTouchCursorColor;
@property(retain, nonatomic) NSSet *assistiveTouchSwitches;
@property(nonatomic) double assistiveTouchScannerSpeechRate;
@property(nonatomic) BOOL assistiveTouchScannerSpeechEnabled;
@property(nonatomic) BOOL assistiveTouchScannerSoundEnabled;
@property(nonatomic) long long assistiveTouchScanCycles;
@property(nonatomic) double assistiveTouchScanTimeout;
@property(nonatomic) BOOL assistiveTouchScanTimeoutEnabled;
@property(nonatomic) double assistiveTouchStepInterval;
@property(nonatomic) BOOL assistiveTouchInputCoalescingEnabled;
@property(nonatomic) double assistiveTouchInputCoalescingDuration;
@property(nonatomic) BOOL assistiveTouchLongPressPauseScanningEnabled;
@property(nonatomic) BOOL assistiveTouchLongPressEnabled;
@property(nonatomic) double assistiveTouchLongPressDuration;
@property(nonatomic) BOOL assistiveTouchInputHoldEnabled;
@property(nonatomic) double assistiveTouchInputHoldDuration;
@property(nonatomic) BOOL assistiveTouchDelayAfterInputEnabled;
@property(nonatomic) double assistiveTouchDelayAfterInput;
@property(nonatomic) BOOL assistiveTouchActionRepeatEnabled;
@property(nonatomic) double assistiveTouchActionRepeatInterval;
@property(nonatomic) double assistiveTouchAxisSweepSpeed;
@property(nonatomic) BOOL assistiveTouchScannerMenuLabelsEnabled;
@property(nonatomic) BOOL assistiveTouchScannerCompactMenuEnabled;
@property(nonatomic) BOOL assistiveTouchGroupElementsEnabled;
- (BOOL)assistiveTouchAutoScanningEnabled;
@property(nonatomic) long long assistiveTouchScanningMode;
@property(nonatomic) BOOL assistiveTouchScannerCursorHighVisibilityEnabled;
@property(nonatomic) BOOL assistiveTouchScannerSpeechIsInterruptedByScanning;
@property(nonatomic) long long assistiveTouchPreferredPointPicker;
@property(retain, nonatomic) NSArray *assistiveTouchSavedGestures;
@property(retain, nonatomic) NSArray *assistiveTouchRecentGestures;
@property(retain, nonatomic) NSArray *assistiveTouchCustomGestures;
- (void)_setGestures:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_gesturesForPreferenceKeyMigratingIfNecessary:(id)arg1;
@property(nonatomic) double assistiveTouchSpeed;
@property(nonatomic) long long assistiveTouchMouseKeysMaxSpeed;
@property(nonatomic) long long assistiveTouchMouseKeysDelay;
@property(nonatomic) BOOL assistiveTouchMouseAllowAppleBluetoothDevicesPairing;
@property(nonatomic) BOOL assistiveTouchMouseAlwaysShowSoftwareKeyboardEnabled;
@property(nonatomic) BOOL assistiveTouchMouseKeysOptionToggleEnabled;
@property(nonatomic) BOOL assistiveTouchMouseKeysEnabled;
@property(nonatomic) BOOL assistiveTouchMouseDragLockEnabled;
@property(nonatomic) BOOL assistiveTouchOpenMenuSwaggleEnabled;
@property(nonatomic) BOOL supportsAdvancedDisplayFilters;
@property(nonatomic) BOOL assistiveTouchAlwaysShowMenuEnabled;
- (void)clearExistingValueForPreference:(SEL)arg1;
- (BOOL)preferenceHasExistingValue:(SEL)arg1;
- (void)registerUpdateBlock:(id /* CDUnknownBlockType */)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)_handleVoiceUnarchivedCache:(id)arg1;
- (void)_listenForAccessibilitySupportPassthroughs;
- (void)nukePrefsForDomains:(int )arg1 numDomains:(NSUInteger)arg2;
- (void)nukeAll;
- (void)dealloc;
- (id)init;
- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;
- (BOOL)_switchFromRootUserIfNecessary:(id /* CDUnknownBlockType */)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_postNotificationForPreferenceKey:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_migratePreferenceIfNecessary:(id)arg1;
- (id)_userDefaultsStoreForDomain:(int)arg1;
- (struct __CFString )_domainNameForDomain:(int)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (int)_domainForPreferenceKey:(id)arg1;
- (id)keysToIgnoreDuringBuddyTransfer;
@property double audioLeftRightBalance;
@property BOOL monoAudioEnabled;
@property BOOL highContrastFocusIndicatorsEnabled;
@property BOOL reduceWhitePointEnabled;
@property BOOL buttonShapesEnabled;
@property BOOL increaseButtonLegibilityEnabled;
@property BOOL reduceMotionAutoplayVideoPreviewsEnabled;
@property BOOL reduceMotionEnabled;
@property BOOL enhanceBackgroundContrastEnabled;
@property BOOL enhanceTextTrackingEnabled;
@property BOOL enhanceTextLegibilityEnabled;
@property BOOL zoomSmoothScalingEnabled;
@property BOOL zoomToggledByVoiceOver;
@property BOOL zoomToggledByPreferenceSwitch;
@property BOOL zoomEnabled;
@property BOOL voiceOverBrailleEightDotMode;
@property long long voiceOverBrailleContractionMode;
@property(nonatomic) long long voiceOverBrailleStatusCellPreference;
@property long long voiceOverBrailleMasterStatusCellIndex;
@property long long voiceOverBrailleVirtualStatusAlignment;
@property(copy) NSString *voiceOverTouchBrailleTableIdentifier;
@property(copy) NSDictionary *voiceOverBrailleBluetoothDisplay;
@property int voiceOverTypingMode;
@property(readonly) BOOL voiceOverLangaugeRotorItemsExist;
@property(retain) NSArray *voiceOverLanguageRotorItems;
@property BOOL voiceOverUIEnabled;
@property BOOL voiceOverScreenCurtainEnabled;
@property BOOL voiceOverEnabledThroughAccessory;
@property BOOL voiceOverUsageConfirmed;
@property float voiceOverVolume;
@property float voiceOverSpeakingRate;
@property BOOL voiceOverEnabled;
@property BOOL siriSemanticContextEnabled;
@property BOOL automationHitpointWarpingEnabled;
@property BOOL automationFauxTableViewCellsEnabled;
@property BOOL automationFauxCollectionViewCellsEnabled;
@property(readonly) NSString *automationPreferredLocalization;
@property BOOL automationLocalizedStringLookupInfoEnabled;
@property BOOL automationEnabled;
@property BOOL inspectorEnabled;
@property BOOL switchControlEnabled;
@property BOOL assistiveTouchUIEnabled;
@property BOOL assistiveTouchHardwareEnabled;
@property BOOL assistiveTouchEnabled;
@property(retain) NSArray *tripleClickOptions;
@property BOOL applicationAccessibilityEnabled;
@property(readonly) BOOL accessibilityEnabled;
- (id)switchForUUID:(id)arg1;
- (id)_createAndSaveRecipeForInterfaceOrientedPoint:(CGPoint)arg1 forHold:(BOOL)arg2;
- (id)createAndSaveRecipeForInterfaceOrientedHoldPoint:(CGPoint)arg1;
- (id)createAndSaveRecipeForInterfaceOrientedPoint:(CGPoint)arg1;
- (BOOL)isNewRecipe:(id)arg1;
- (void)saveRecipe:(id)arg1;
- (BOOL)updateRecipe:(id)arg1;
- (void)_assignDefaultTitleIfNeededToRecipe:(id)arg1;
- (BOOL)_updateWithoutSavingExistingRecipe:(id)arg1 allRecipes:(id)arg2;
- (BOOL)validateAndUpdateRecipeIfNeeded:(id)arg1;
- (id)_switchWithAnyActionExcludingUUIDs:(id)arg1 needsToSupportLongPress:(BOOL)arg2;
- (id)_switchWithAction:(long long)arg1 excludedUUIDs:(id)arg2 needsToSupportLongPress:(BOOL)arg3;
- (BOOL)_hasSwitchWithUUID:(id)arg1;

@end
