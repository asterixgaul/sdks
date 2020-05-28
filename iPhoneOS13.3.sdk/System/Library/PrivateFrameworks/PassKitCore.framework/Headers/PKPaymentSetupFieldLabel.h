//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField
{
    NSString *_buttonTitle;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailBody;
    NSString *_businessChatButtonTitle;
    NSString *_businessChatIdentifier;
    NSString *_businessChatIntentName;
    NSUInteger _alingment;
}

@property(nonatomic) NSUInteger alingment; // @synthesize alingment=_alingment;
@property(copy, nonatomic) NSString *businessChatIntentName; // @synthesize businessChatIntentName=_businessChatIntentName;
@property(copy, nonatomic) NSString *businessChatIdentifier; // @synthesize businessChatIdentifier=_businessChatIdentifier;
@property(copy, nonatomic) NSString *businessChatButtonTitle; // @synthesize businessChatButtonTitle=_businessChatButtonTitle;
@property(copy, nonatomic) NSString *detailBody; // @synthesize detailBody=_detailBody;
@property(copy, nonatomic) NSString *detailSubtitle; // @synthesize detailSubtitle=_detailSubtitle;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
// - (void).cxx_destruct;
- (NSUInteger)fieldType;
- (BOOL)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCurrentValue:(id)arg1;
- (void)_commonUpdate;
- (void)updateWithConfiguration:(id)arg1;

@end
