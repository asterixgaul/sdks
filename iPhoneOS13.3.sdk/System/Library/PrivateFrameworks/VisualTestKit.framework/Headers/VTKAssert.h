//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, VTKInternalConfiguration, XCTestCase;

__attribute__((visibility("hidden")))
@interface VTKAssert : NSObject
{
    XCTestCase *_testCase;
    VTKInternalConfiguration *_configuration;
}

@property(copy, nonatomic) VTKInternalConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
// - (void).cxx_destruct;
- (void)assertView:(id)arg1 identifier:(id)arg2 filePath:(id)arg3 lineNumber:(NSUInteger)arg4;
@property(readonly, nonatomic) NSArray *drawItems;
@property(readonly, nonatomic) NSString *referenceImagesDirectory;
- (id)initWithTestCase:(id)arg1 configuration:(id)arg2;
- (id)initWithTestCase:(id)arg1;

@end
