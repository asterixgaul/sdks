//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHQuery.h>

@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery
{
    CHRecognitionSessionIndexableContent *_indexableContent;
}

- (id)debugName;
@property(retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent; // @synthesize indexableContent=_indexableContent;
- (void)q_updateQueryResult;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;

@end
