//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;
    id _observer;
}

@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
// - (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)updateBoards;
- (void)wasRemovedFromWorkflow;
- (void)wasAddedToWorkflow;
- (Class)singleStateClass;

@end
