//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKMedicalIDEditorCell, UIView;

@protocol HKMedicalIDEditorCellHeightChangeDelegate
- (void)medicalIDEditorCellDidChangeSelection:(HKMedicalIDEditorCell *)arg1 keepRectVisible:(CGRect)arg2 inView:(UIView *)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(HKMedicalIDEditorCell *)arg1 keepRectVisible:(CGRect)arg2 inView:(UIView *)arg3;
- (void)medicalIDEditorCell:(HKMedicalIDEditorCell *)arg1 didChangeHeight:(double)arg2 keepRectVisible:(CGRect)arg3 inView:(UIView *)arg4;
@end
