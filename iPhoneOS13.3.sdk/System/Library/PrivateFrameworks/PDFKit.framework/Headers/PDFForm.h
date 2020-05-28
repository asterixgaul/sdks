//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PDFFormPrivateVars;

__attribute__((visibility("hidden")))
@interface PDFForm : NSObject <NSCopying>
{
    PDFFormPrivateVars *_private;
}

// - (void).cxx_destruct;
- (void)setDocument:(id)arg1;
- (struct __CFDictionary )createDictionaryRef;
- (void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary )arg1;
- (id)fieldNamed:(id)arg1;
- (void)_commonResetForm:(id)arg1 inclusive:(BOOL)arg2;
- (id)description;
- (void)resetFormExcludingFields:(id)arg1;
- (void)resetFormForFields:(id)arg1;
- (void)removeFormFieldWithFieldName:(id)arg1;
- (void)addFormField:(id)arg1;
- (CGPDFString )defaultDAStringRef;
- (id)defaultStringValueForFieldNamed:(id)arg1;
- (id)stringValueForFieldNamed:(id)arg1;
- (void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(BOOL)arg3;
- (id)fieldNames;
- (id)document;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;

@end
