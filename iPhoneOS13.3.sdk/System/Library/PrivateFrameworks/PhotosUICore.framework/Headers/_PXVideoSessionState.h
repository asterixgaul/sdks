//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableVideoSession-Protocol.h>

@class NSString;

@interface _PXVideoSessionState : NSObject <PXMutableVideoSession>
{
    BOOL _loopingEnabled;
    BOOL _seekToBeginningAtEnd;
    BOOL _preventsSleepDuringVideoPlayback;
    BOOL _allowsExternalPlayback;
    BOOL _shouldFadeVolumeChange;
    float _volume;
    long long _desiredPlayState;
    NSString *_audioSessionCategory;
    NSUInteger _audioSessionCategoryOptions;
    CDStruct_e83c9415 _playbackTimeRange;
}

@property(readonly, nonatomic) BOOL shouldFadeVolumeChange; // @synthesize shouldFadeVolumeChange=_shouldFadeVolumeChange;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) NSUInteger audioSessionCategoryOptions; // @synthesize audioSessionCategoryOptions=_audioSessionCategoryOptions;
@property(readonly, copy, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property(nonatomic) BOOL allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(nonatomic) BOOL preventsSleepDuringVideoPlayback; // @synthesize preventsSleepDuringVideoPlayback=_preventsSleepDuringVideoPlayback;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(nonatomic) BOOL seekToBeginningAtEnd; // @synthesize seekToBeginningAtEnd=_seekToBeginningAtEnd;
@property(nonatomic) CDStruct_e83c9415 playbackTimeRange; // @synthesize playbackTimeRange=_playbackTimeRange;
@property(nonatomic, getter=isLoopingEnabled) BOOL loopingEnabled; // @synthesize loopingEnabled=_loopingEnabled;
// - (void).cxx_destruct;
- (void)setAudioSessionCategory:(id)arg1 options:(NSUInteger)arg2;
- (void)setVolume:(float)arg1 withFade:(BOOL)arg2;

@end

