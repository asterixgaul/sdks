//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageBody.h>

#import <MessageLegacy/MFCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    NSUInteger _count;
    BOOL _lastNewLine;
}

- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)rawData;
- (BOOL)isLastCharacterNewLine;
- (NSUInteger)count;
- (void)dealloc;
- (id)init;

@end
