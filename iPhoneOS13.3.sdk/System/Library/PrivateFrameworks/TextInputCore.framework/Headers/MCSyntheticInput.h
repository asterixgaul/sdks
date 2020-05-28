//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@class NSArray, NSString;

@interface MCSyntheticInput : MCKeyboardInput
{
    BOOL _includeSuffixAsSearchString;
    NSString *_committedText;
    NSArray *_syllables;
    NSUInteger _cursorIndex;
}

@property(nonatomic) BOOL includeSuffixAsSearchString; // @synthesize includeSuffixAsSearchString=_includeSuffixAsSearchString;
@property(readonly, nonatomic) NSUInteger cursorIndex; // @synthesize cursorIndex=_cursorIndex;
@property(readonly, nonatomic) NSArray *syllables; // @synthesize syllables=_syllables;
@property(readonly, nonatomic) NSString *committedText; // @synthesize committedText=_committedText;
// - (void).cxx_destruct;
- (id)externalSuffix;
- (int)syllableIndex:(int )arg1;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *uncommittedText;
- (id)syntheticInputWithCursorIndex:(NSUInteger)arg1;
- (id)syntheticInputWithCommittedText:(id)arg1 syllables:(id)arg2;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithCommittedText:(id)arg1 syllables:(id)arg2;
- (id)init;

@end
