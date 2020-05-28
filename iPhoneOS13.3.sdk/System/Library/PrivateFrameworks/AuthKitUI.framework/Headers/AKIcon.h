//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AKIcon : NSObject
{
    double _scale;
    CGSize _size;
    NSString *_name;
    NSString *_bundleID;
    NSData *_data;
    NSUInteger _maskingStyle;
}

+ (double)_screenScale;
+ (double)defaultScale;
+ (id)iconWithBundleID:(id)arg1 size:(CGSize)arg2;
+ (id)iconWithName:(id)arg1 size:(CGSize)arg2;
+ (id)iconWithIconContext:(id)arg1;
+ (id)iconWithPresentationContext:(id)arg1;
+ (id)iconWithData:(id)arg1 scale:(double)arg2;
// - (void).cxx_destruct;
- (BOOL)_shouldMaskImage;
- (id)_applicationProxyForBundleID:(id)arg1;
- (BOOL)_hasInstalledApplicationWithBundleID:(id)arg1;
- (CGImage )_CGImageForImage:(id)arg1;
- (id)_dataForImage:(id)arg1;
- (id)_imageWithIcon:(id)arg1 size:(CGSize)arg2 masked:(BOOL)arg3;
- (id)_iconWithImage:(id)arg1;
- (id)_imageWithName:(id)arg1 size:(CGSize)arg2 masked:(BOOL)arg3;
- (id)_imageWithBundleID:(id)arg1 size:(CGSize)arg2 masked:(BOOL)arg3;
- (id)_imageWithData:(id)arg1 scale:(double)arg2 masked:(BOOL)arg3;
- (id)_catalogueImageWithName:(id)arg1;
- (NSUInteger)iconType;
- (id)automaskedImageData;
- (id)maskedImageData;
- (id)unmaskedImageData;
- (id)automaskedImage;
- (id)maskedImage;
- (id)unmaskedImage;
- (id)initWithBundleID:(id)arg1 size:(CGSize)arg2;
- (id)initWithName:(id)arg1 size:(CGSize)arg2;
- (id)initWithIconContext:(id)arg1;
- (id)initWithPresentationContext:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;

@end
