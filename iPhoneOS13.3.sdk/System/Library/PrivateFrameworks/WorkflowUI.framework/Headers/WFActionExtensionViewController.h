//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFRunWorkflowViewControllerDelegate-Protocol.h>

@class NSDictionary, WFRunWorkflowToolbar, WFRunWorkflowViewController;
@protocol WFActionExtensionViewControllerDelegate;

@interface WFActionExtensionViewController : UIViewController <WFRunWorkflowViewControllerDelegate>
{
    NSDictionary *_eventDictionary;
    id <WFActionExtensionViewControllerDelegate> _delegate;
    WFRunWorkflowViewController *_workflowViewController;
    WFRunWorkflowToolbar *_toolbar;
}

@property(retain, nonatomic) WFRunWorkflowToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) WFRunWorkflowViewController *workflowViewController; // @synthesize workflowViewController=_workflowViewController;
@property(nonatomic) __weak id <WFActionExtensionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *eventDictionary; // @synthesize eventDictionary=_eventDictionary;
// - (void).cxx_destruct;
- (void)handoffWithWorkflowControllerState:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)runWorkflowToolbarForWorkflowViewController:(id)arg1;
- (BOOL)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (BOOL)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)workflowFinishedWithOutput:(id)arg1 error:(id)arg2;
- (void)workflowCancelled;
- (void)cancelPressed;
- (void)cleanup;
- (void)runWithInput:(id)arg1;
- (void)loadView;
- (id)initWithSingleUseWorkflowToken:(id)arg1 error:(id )arg2;
- (id)initWithWorkflow:(id)arg1;

@end
