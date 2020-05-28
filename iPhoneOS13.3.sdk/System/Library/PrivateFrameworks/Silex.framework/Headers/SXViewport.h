//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScrollView;

@interface SXViewport : NSObject
{
    BOOL _groupChanges;
    NSUInteger _appearState;
    long long _interfaceOrientation;
    NSHashTable *_dynamicBoundsListeners;
    NSHashTable *_boundsListeners;
    NSHashTable *_appearStateListeners;
    NSHashTable *_documentSizeListeners;
    NSHashTable *_contentFrameListeners;
    NSHashTable *_interfaceOrientationListeners;
    SXViewport *_viewportBeforeUpdates;
    UIScrollView *_view;
    CGSize _documentSize;
    CGRect _bounds;
    CGRect _dynamicBounds;
    CGRect _contentFrame;
}

@property(readonly, nonatomic) __weak UIScrollView *view; // @synthesize view=_view;
@property(nonatomic) BOOL groupChanges; // @synthesize groupChanges=_groupChanges;
@property(retain, nonatomic) SXViewport *viewportBeforeUpdates; // @synthesize viewportBeforeUpdates=_viewportBeforeUpdates;
@property(retain, nonatomic) NSHashTable *interfaceOrientationListeners; // @synthesize interfaceOrientationListeners=_interfaceOrientationListeners;
@property(retain, nonatomic) NSHashTable *contentFrameListeners; // @synthesize contentFrameListeners=_contentFrameListeners;
@property(retain, nonatomic) NSHashTable *documentSizeListeners; // @synthesize documentSizeListeners=_documentSizeListeners;
@property(retain, nonatomic) NSHashTable *appearStateListeners; // @synthesize appearStateListeners=_appearStateListeners;
@property(retain, nonatomic) NSHashTable *boundsListeners; // @synthesize boundsListeners=_boundsListeners;
@property(retain, nonatomic) NSHashTable *dynamicBoundsListeners; // @synthesize dynamicBoundsListeners=_dynamicBoundsListeners;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) NSUInteger appearState; // @synthesize appearState=_appearState;
@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) CGSize documentSize; // @synthesize documentSize=_documentSize;
@property(nonatomic) CGRect dynamicBounds; // @synthesize dynamicBounds=_dynamicBounds;
@property(nonatomic) CGRect bounds; // @synthesize bounds=_bounds;
// - (void).cxx_destruct;
- (id)description;
- (id)debugDescriptionForViewport:(id)arg1;
- (id)stringForAppearState:(NSUInteger)arg1;
- (id)stringFroInterfaceOrientation:(long long)arg1;
- (CGPoint)convertPointToViewportCoordinateSpace:(CGPoint)arg1 fromView:(id)arg2;
- (CGRect)convertRectToViewportCoordinateSpace:(CGRect)arg1 fromView:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2;
- (CGRect)convertRect:(CGRect)arg1 toView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2;
- (CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2;
- (void)reset;
@property(readonly, nonatomic) BOOL isPopulated;
- (void)interfaceOrientationChangedFromOrientation:(long long)arg1;
- (void)contentFrameDidChangeFromFrame:(CGRect)arg1;
- (void)documentSizeDidChangeFromSize:(CGSize)arg1;
- (void)appearStateChangedFromState:(NSUInteger)arg1;
- (void)boundsDidChangeFromBounds:(CGRect)arg1;
- (void)dynamicBoundsDidChangeFromBounds:(CGRect)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)removeViewportChangeListener:(id)arg1 forOptions:(NSUInteger)arg2;
- (void)addViewportChangeListener:(id)arg1 forOptions:(NSUInteger)arg2;
- (id)initWithView:(id)arg1;

@end
