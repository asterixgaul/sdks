//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIColor, UITabBar, UIToolbar;

@protocol NUArticleViewStyler
@property(readonly, nonatomic) long long topBackgroundStatusBarStyle;
@property(readonly, nonatomic) long long statusBarStyle;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (void)unstyleToolbar:(UIToolbar *)arg1 overrideRestoreColor:(UIColor *)arg2;
- (void)styleToolbar:(UIToolbar *)arg1;
- (void)unstyleTabBar:(UITabBar *)arg1 overrideRestoreColor:(UIColor *)arg2;
- (void)styleTabBar:(UITabBar *)arg1;
@end
