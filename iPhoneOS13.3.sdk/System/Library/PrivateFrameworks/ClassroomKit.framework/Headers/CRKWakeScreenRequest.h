//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@interface CRKWakeScreenRequest : CATTaskRequest
{
    BOOL _shouldBecomeExclusive;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL shouldBecomeExclusive; // @synthesize shouldBecomeExclusive=_shouldBecomeExclusive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
