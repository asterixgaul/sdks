//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@class MTLIndirectCommandBufferDescriptor, NSMutableArray;
@protocol MTLIndirectCommandBuffer;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer
{
    NSMutableArray *_optimizedRangeList;
    MTLIndirectCommandBufferDescriptor *_desc;
    NSUInteger _maxCommandCount;
    id <MTLIndirectCommandBuffer> _iCB;
    BOOL isRender;
}

- (id)indirectComputeCommandAtIndex:(NSUInteger)arg1;
- (id)indirectRenderCommandAtIndex:(NSUInteger)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(NSUInteger)arg4 options:(NSUInteger)arg5;
@property(readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property(readonly) NSMutableArray *optimizedRangeList;
- (void)dealloc;

@end
