//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeechSynthesisRecordMutating-Protocol.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating>
{
    AFSpeechSynthesisRecord *_baseModel;
    NSString *_utterance;
    NSUInteger _beginTimestamp;
    NSUInteger _endTimestamp;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUtterance:1;
        unsigned int hasBeginTimestamp:1;
        unsigned int hasEndTimestamp:1;
    } _mutationFlags;
}

// - (void).cxx_destruct;
- (id)generate;
- (void)setEndTimestamp:(NSUInteger)arg1;
- (void)setBeginTimestamp:(NSUInteger)arg1;
- (void)setUtterance:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

@end
