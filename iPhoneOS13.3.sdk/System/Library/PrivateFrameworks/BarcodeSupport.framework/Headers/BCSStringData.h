//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSParsedDataPrivate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSStringData : NSObject <BCSParsedDataPrivate>
{
    NSString *_extraPreviewText;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *extraPreviewText; // @synthesize extraPreviewText=_extraPreviewText;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long type;
- (id)initWithString:(id)arg1;

@end
