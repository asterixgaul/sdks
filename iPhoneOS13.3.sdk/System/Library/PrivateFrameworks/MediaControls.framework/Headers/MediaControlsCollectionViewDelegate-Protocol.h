//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MediaControlsCollectionViewController, UIViewController;
@protocol MediaControlsCollectionItemViewController;

@protocol MediaControlsCollectionViewDelegate <NSObject>
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (BOOL)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didEndDisplayingViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
@end
