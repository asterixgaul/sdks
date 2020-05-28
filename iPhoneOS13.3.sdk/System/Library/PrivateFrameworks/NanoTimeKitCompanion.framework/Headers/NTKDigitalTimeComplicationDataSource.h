//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource
{
}

+ (BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (BOOL)acceptsComplicationType:(NSUInteger)arg1 forDevice:(id)arg2;
- (id)_templateWithShouldDisplayIdealizeState:(BOOL)arg1;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getCurrentTimelineEntryWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (NSUInteger)timelineAnimationBehavior;
- (BOOL)supportsTapAction;
- (Class)richComplicationDisplayViewClassForDevice:(id)arg1;

@end
