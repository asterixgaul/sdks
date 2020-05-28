//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRImage, NSArray, NSDictionary;

@interface CRActivationMap : NSObject
{
    CRImage *_cutImage;
    NSArray *_activations;
    NSDictionary *_codeMap;
    NSArray *_codeMapIndex;
}

@property(retain) NSArray *codeMapIndex; // @synthesize codeMapIndex=_codeMapIndex;
@property(retain) NSDictionary *codeMap; // @synthesize codeMap=_codeMap;
@property(retain) NSArray *activations; // @synthesize activations=_activations;
@property(retain) CRImage *cutImage; // @synthesize cutImage=_cutImage;
// - (void).cxx_destruct;
- (id)initWithActivation:(id)arg1 codeMapIndex:(id)arg2 codeMap:(int )arg3 codeMapSize:(int)arg4 blankIndex:(unsigned short)arg5 cutImage:(id)arg6;

@end
