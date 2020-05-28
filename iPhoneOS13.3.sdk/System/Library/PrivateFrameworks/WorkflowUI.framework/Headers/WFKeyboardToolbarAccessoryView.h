//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class NSArray, UIToolbar;

@interface WFKeyboardToolbarAccessoryView : UIInputView
{
    UIToolbar *_toolbar;
}

@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
// - (void).cxx_destruct;
- (void)drawRoundedRectangleInRect:(CGRect)arg1 withContext:(CGContext )arg2 color:(id)arg3 radius:(double)arg4;
- (id)buttonImageWithSize:(CGSize)arg1;
- (id)fixedSpaceItemOfWidth:(double)arg1;
- (id)flexibleSpaceItem;
- (id)borderedButtonItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)plainButtonItemWithTitle:(id)arg1 bolded:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (double)inverseToolbarPadding;
- (double)keyboardButtonHeight;
- (double)borderedButtonWidthForButtonTitle:(id)arg1 font:(id)arg2;
- (BOOL)isPhoneUI;
- (void)removeAllBarItems;
- (void)prependBarItem:(id)arg1;
- (void)appendBarItem:(id)arg1;
@property(copy, nonatomic) NSArray *barItems;
- (id)init;

@end
