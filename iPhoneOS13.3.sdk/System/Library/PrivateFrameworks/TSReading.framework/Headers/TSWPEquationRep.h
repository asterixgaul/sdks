//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDRep.h>

#import <TSReading/TSDTilingLayerDelegate-Protocol.h>

@class CALayer;

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate>
{
    CALayer *_equationLayer;
}

@property(retain, nonatomic) CALayer *equationLayer; // @synthesize equationLayer=_equationLayer;
- (CGRect)visibleBoundsForTilingLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(CGContext )arg2;
- (void)drawInLayerContext:(CGContext )arg1;
- (void)drawInContext:(CGContext )arg1;
- (CGRect)clipRect;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)setNeedsDisplay;
- (void)screenScaleDidChange;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (BOOL)containsPoint:(CGPoint)arg1;
- (void)willBeRemoved;
- (void)dealloc;

@end
