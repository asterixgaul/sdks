//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFReader-Protocol.h>

@class EMFPlayer;

__attribute__((visibility("hidden")))
@interface EMFReader : NSObject <MFReader>
{
    EMFPlayer *m_player;
}

// - (void).cxx_destruct;
- (int)play:(id)arg1;
- (id)initWithEMFPlayer:(id)arg1;

@end
