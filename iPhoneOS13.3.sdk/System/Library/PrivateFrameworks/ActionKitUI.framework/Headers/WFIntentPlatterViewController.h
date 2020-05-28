//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ActionKitUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <ActionKitUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <ActionKitUI/CRKCardPresentationDelegate-Protocol.h>
#import <ActionKitUI/PLClickPresentationInteractionManagerDelegate-Protocol.h>
#import <ActionKitUI/PLClickPresentationInteractionPresenting-Protocol.h>
#import <ActionKitUI/WFIntentViewController-Protocol.h>

@class APUILongLookViewController, CRKCardPresentation, CRKCardPresentationConfiguration, INInteraction, PLClickPresentationInteractionManager, UIView;
@protocol CRKCardViewControllerDelegate, CRKCardViewControlling, WFIntentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFIntentPlatterViewController : UIViewController <PLClickPresentationInteractionPresenting, PLClickPresentationInteractionManagerDelegate, APUILongLookViewControllerDelegate, APUILongLookViewControllerDataSource, CRKCardPresentationDelegate, WFIntentViewController>
{
    BOOL _requiresConfirmation;
    PLClickPresentationInteractionManager *_clickPresentationInteractionManager;
    id <WFIntentViewControllerDelegate> _delegate;
    INInteraction *_interaction;
    APUILongLookViewController *_longLookViewController;
    CRKCardPresentationConfiguration *_configuration;
    CRKCardPresentation *_cardPresentation;
    UIView *_sourceView;
}

+ (void)initialize;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property(readonly, nonatomic) CRKCardPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) APUILongLookViewController *longLookViewController; // @synthesize longLookViewController=_longLookViewController;
@property(readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property(nonatomic) __weak id <WFIntentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL requiresConfirmation; // @synthesize requiresConfirmation=_requiresConfirmation;
@property(readonly, nonatomic) PLClickPresentationInteractionManager *clickPresentationInteractionManager; // @synthesize clickPresentationInteractionManager=_clickPresentationInteractionManager;
// - (void).cxx_destruct;
- (void)clickPresentationInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (id)presentedViewControllerForClickPresentationInteractionManager:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (BOOL)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(readonly, nonatomic) CGRect finalDismissedFrameOfViewForPreview;
@property(readonly, nonatomic) CGRect initialPresentedFrameOfViewForPreview;
@property(readonly, nonatomic) UIView *viewForPreview;
- (void)dismissPlatterWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)presentPlatterFromSourceView:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updatePlatterSize;
@property(readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController;
- (void)updateProgressIndicator:(NSUInteger)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)confirmButtonTapped;
- (void)updateWithInteraction:(id)arg1;
- (id)initWithInteraction:(id)arg1 requiresConfirmation:(BOOL)arg2;

@end
