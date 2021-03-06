/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>
#import <libobjc.A.dylib/WFAlertPresenter.h>
#import <UIKit/UIAlertControllerContaining.h>
#import <UIKitCore/_UIAlertControllerTextFieldViewControllerContaining.h>
#import <UIKit/UIPreviewInteractionControllerDelegate.h>
#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding, UIAlertControllerSystemProvidedPresentationDelegate, UIAlertControllerCoordinatedActionPerforming;
@class NSString, NSAttributedString, NSSet, UIAlertAction, NSMutableDictionary, NSMapTable, UIViewController, _UIAlertControllerTextFieldViewController, UITapGestureRecognizer, _UIAlertControllerShimPresenter, NSPointerArray, UIAlertControllerStackManager, UIImage, NSMutableArray, NSObject, _UIAnimationCoordinator, UIPreviewInteractionController, UIAlertControllerVisualStyle, NSIndexSet, UIPopoverController, UIView, UIGestureRecognizer, NSArray;

@interface UIAlertController : UIViewController <HUPreloadableViewController, WFAlertPresenter, UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding> {

	NSString* _message;
	NSAttributedString* _attributedTitle;
	NSAttributedString* _attributedMessage;
	NSAttributedString* _attributedDetailMessage;
	NSSet* _linkedAlertControllers;
	UIAlertAction* _cancelAction;
	NSMutableDictionary* _actionToKeyCommandsDictionary;
	NSMapTable* _keyCommandToActionMapTable;
	long long _resolvedStyle;
	long long _preferredStyle;
	UIViewController* _contentViewController;
	_UIAlertControllerTextFieldViewController* _textFieldViewController;
	UITapGestureRecognizer* _backButtonDismissGestureRecognizer;
	id _ownedTransitioningDelegate;
	BOOL _isInSupportedInterfaceOrientations;
	BOOL _isInRecomputePreferredContentSize;
	long long _batchActionChangesInProgressCount;
	_UIAlertControllerShimPresenter* _presenter;
	NSPointerArray* _actionsWithInvokedHandlers;
	UIAlertControllerStackManager* _alertControllerStackManager;
	UIImage* _image;
	BOOL _hidden;
	BOOL _springLoaded;
	BOOL __shouldFlipFrameForShimDismissal;
	BOOL __shouldAllowNilParameters;
	BOOL _hasPreservedInputViews;
	BOOL __shouldAlignToKeyboard;
	NSMutableArray* _actions;
	UIViewController* _headerContentViewController;
	UIViewController* _separatedHeaderContentViewController;
	NSObject*<UIAlertControllerVisualStyleProviding> _styleProvider;
	UIAlertAction* _preferredAction;
	_UIAnimationCoordinator* _temporaryAnimationCoordinator;
	UIPreviewInteractionController* _previewInteractionController;
	UIAlertControllerVisualStyle* __visualStyle;
	NSIndexSet* _indexesOfActionSectionSeparators;
	NSMutableArray* __actionDelimiterIndices;
	UIPopoverController* __compatibilityPopoverController;
	UIView* __systemProvidedPresentationView;
	id<UIAlertControllerSystemProvidedPresentationDelegate> __systemProvidedPresentationDelegate;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	id<UIAlertControllerCoordinatedActionPerforming> _coordinatedActionPerformingDelegate;
	UIView* __presentationSourceRepresentationView;
	long long _titleMaximumLineCount;
	long long _titleLineBreakMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL px_shouldForceAlertStyle; 
@property (assign) BOOL _shouldFlipFrameForShimDismissal;                                                                                                                              //@synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal - In the implementation block
@property (nonatomic,retain) _UIAnimationCoordinator * temporaryAnimationCoordinator;                                                                                                  //@synthesize temporaryAnimationCoordinator=_temporaryAnimationCoordinator - In the implementation block
@property (setter=_setPreviewInteractionController:,getter=_previewInteractionController,nonatomic,retain) UIPreviewInteractionController * previewInteractionController;              //@synthesize previewInteractionController=_previewInteractionController - In the implementation block
@property (setter=_setVisualStyle:,nonatomic,retain) UIAlertControllerVisualStyle * _visualStyle;                                                                                      //@synthesize _visualStyle=__visualStyle - In the implementation block
@property (readonly) NSMutableArray * _actions;                                                                                                                                        //@synthesize actions=_actions - In the implementation block
@property (setter=_setIndexesOfActionSectionSeparators:,getter=_indexesOfActionSectionSeparators,nonatomic,copy) NSIndexSet * indexesOfActionSectionSeparators;                        //@synthesize indexesOfActionSectionSeparators=_indexesOfActionSectionSeparators - In the implementation block
@property (readonly) UIAlertAction * _cancelAction;                                                                                                                                    //@synthesize cancelAction=_cancelAction - In the implementation block
@property (readonly) UIAlertAction * _focusedAction; 
@property (readonly) NSMutableArray * _actionDelimiterIndices;                                                                                                                         //@synthesize _actionDelimiterIndices=__actionDelimiterIndices - In the implementation block
@property (readonly) UIView * _foregroundView; 
@property (readonly) UIView * _dimmingView; 
@property (readonly) long long _resolvedStyle;                                                                                                                                         //@synthesize resolvedStyle=_resolvedStyle - In the implementation block
@property (readonly) BOOL _shouldProvideDimmingView; 
@property (readonly) BOOL _alignsToKeyboard; 
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL _hidden;                                                                                                         //@synthesize hidden=_hidden - In the implementation block
@property (assign,setter=_setEffectAlpha:,getter=_effectAlpha,nonatomic) double effectAlpha; 
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters;                                                                                                       //@synthesize _shouldAllowNilParameters=__shouldAllowNilParameters - In the implementation block
@property (assign,setter=_setCompatibilityPopoverController:,nonatomic) UIPopoverController * _compatibilityPopoverController;                                                         //@synthesize _compatibilityPopoverController=__compatibilityPopoverController - In the implementation block
@property (readonly) _UIAlertControllerTextFieldViewController * _textFieldViewController; 
@property (assign,setter=_setHasPreservedInputViews:,getter=_hasPreservedInputViews,nonatomic) BOOL hasPreservedInputViews;                                                            //@synthesize hasPreservedInputViews=_hasPreservedInputViews - In the implementation block
@property (setter=_setSystemProvidedPresentationView:,nonatomic,retain) UIView * _systemProvidedPresentationView;                                                                      //@synthesize _systemProvidedPresentationView=__systemProvidedPresentationView - In the implementation block
@property (setter=_setSystemProvidedPresentationDelegate:,nonatomic,retain) id<UIAlertControllerSystemProvidedPresentationDelegate> _systemProvidedPresentationDelegate;               //@synthesize _systemProvidedPresentationDelegate=__systemProvidedPresentationDelegate - In the implementation block
@property (setter=_setSystemProvidedGestureRecognizer:,getter=_systemProvidedGestureRecognizer,nonatomic,retain) UIGestureRecognizer * systemProvidedGestureRecognizer;                //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (setter=_setAttributedDetailMessage:,getter=_attributedDetailMessage,nonatomic,copy) NSAttributedString * _attributedDetailMessage; 
@property (assign,setter=_setStyleProvider:,getter=_styleProvider,nonatomic,__weak) NSObject*<UIAlertControllerVisualStyleProviding> styleProvider;                                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<UIAlertControllerCoordinatedActionPerforming> coordinatedActionPerformingDelegate;                                                              //@synthesize coordinatedActionPerformingDelegate=_coordinatedActionPerformingDelegate - In the implementation block
@property (setter=_setPresentationSourceRepresentationView:,nonatomic,retain) UIView * _presentationSourceRepresentationView;                                                          //@synthesize _presentationSourceRepresentationView=__presentationSourceRepresentationView - In the implementation block
@property (readonly) BOOL _shouldReverseActions; 
@property (setter=_setSeparatedHeaderContentViewController:,nonatomic,retain) UIViewController * _separatedHeaderContentViewController;                                                //@synthesize separatedHeaderContentViewController=_separatedHeaderContentViewController - In the implementation block
@property (setter=_setHeaderContentViewController:,nonatomic,retain) UIViewController * _headerContentViewController;                                                                  //@synthesize headerContentViewController=_headerContentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,nonatomic) long long preferredStyle; 
@property (assign,setter=_setTitleMaximumLineCount:,getter=_titleMaximumLineCount,nonatomic) long long titleMaximumLineCount;                                                          //@synthesize titleMaximumLineCount=_titleMaximumLineCount - In the implementation block
@property (assign,setter=_setTitleLineBreakMode:,getter=_titleLineBreakMode,nonatomic) long long titleLineBreakMode;                                                                   //@synthesize titleLineBreakMode=_titleLineBreakMode - In the implementation block
@property (setter=_setAttributedTitle:,getter=_attributedTitle,nonatomic,copy) NSAttributedString * attributedTitle; 
@property (setter=_setAttributedMessage:,getter=_attributedMessage,nonatomic,copy) NSAttributedString * attributedMessage; 
@property (nonatomic,retain) UIImage * image; 
@property (setter=_setActions:,nonatomic,retain) NSArray * actions; 
@property (assign,setter=_setShouldAlignToKeyboard:,nonatomic) BOOL _shouldAlignToKeyboard;                                                                                            //@synthesize _shouldAlignToKeyboard=__shouldAlignToKeyboard - In the implementation block
@property (nonatomic,retain) UIAlertAction * preferredAction;                                                                                                                          //@synthesize preferredAction=_preferredAction - In the implementation block
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
+(id)tps_alertControllerWithError:(id)arg1 ;
+(id)tps_tapToRadarAlertControllerWithError:(id)arg1 ;
+(id)alertControllerForAddingDestinationWithType:(unsigned long long)arg1 andProceed:(/*^block*/id)arg2 ;
+(id)alertControllerForAddingHomeWithProceed:(/*^block*/id)arg1 ;
+(id)alertControllerForAddingZoneWithProceed:(/*^block*/id)arg1 ;
+(id)alertControllerForAddingRoomWithProceed:(/*^block*/id)arg1 ;
+(id)alertControllerForAddingServiceGroupWithProceed:(/*^block*/id)arg1 ;
+(id)alertControllerForAddingDestinationWithTypeString:(id)arg1 andProceed:(/*^block*/id)arg2 ;
+(id)hu_alertControllerForUnimplementedFeature:(id)arg1 ;
+(id)hu_alertControllerWithActivityIndicatorAndTitle:(id)arg1 ;
+(id)hu_actionSheetWithTitle:(id)arg1 message:(id)arg2 anchorView:(id)arg3 ;
+(id)hu_alertControllerForAcknowledgementWithTitle:(id)arg1 message:(id)arg2 ;
+(id)basicAlertControllerWithTitle:(id)arg1 message:(id)arg2 ;
+(void)cam_showUsageSettings;
+(id)skui_alertControllerForRequiredAuthorizationIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4 destructiveHandler:(/*^block*/id)arg5 ;
+(id)skui_requiredAuthorizationAlertIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 title:(id)arg3 message:(id)arg4 destructiveButtonTitle:(id)arg5 destructiveHandler:(/*^block*/id)arg6 cancelButtonTitle:(id)arg7 cancelHandler:(/*^block*/id)arg8 ;
+(id)skui_alertControllerForRequiredAuthorizationIfNeccesaryForBundle:(id)arg1 authGroup:(id)arg2 destructiveHandler:(/*^block*/id)arg3 ;
+(id)alertControllerForFeatureNotAvailable;
+(id)px_alertControllerWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)px_showDebugAlertInKeyWindowWithMessage:(id)arg1 ;
+(id)px_deleteITunesContentAlertWithAssetCount:(long long)arg1 includesPhotos:(BOOL)arg2 includesVideos:(BOOL)arg3 actionHandler:(/*^block*/id)arg4 cancelHandler:(/*^block*/id)arg5 ;
+(id)px_alertForCPLEnableError:(id)arg1 actionHandler:(/*^block*/id)arg2 cancelHandler:(/*^block*/id)arg3 ;
+(id)px_alertForStorageUpgradeLoadFailure;
+(id)mf_muteConfirmationControllerWithHandler:(/*^block*/id)arg1 ;
+(id)mf_actionSheetWithTitle:(id)arg1 cancellationHandler:(/*^block*/id)arg2 ;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 actionHandler:(/*^block*/id)arg4 ;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 actionHandler:(/*^block*/id)arg5 ;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 ;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 ;
+(void)MCUIShowRebootAlert;
+(void)MCUIShowWatchUnavailableAlertWithCompletion:(/*^block*/id)arg1 ;
+(id)enableWiFiCallingAlertControllerWithPreferredStyle:(long long)arg1 ;
+(id)enableWiFiCallingAlertController;
+(id)networkUnavailableAlertControllerWithCallProvider:(id)arg1 dialType:(long long)arg2 senderIdentityUUID:(id)arg3 ;
+(id)telephonyAccountUnavailableAlertControllerWithSenderIdentities:(id)arg1 preferredStyle:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)_alertControllerContainedInViewController:(id)arg1 ;
+(id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 ;
+(BOOL)_shouldUsePresentationController;
+(id)_alertControllerWithTitle:(id)arg1 message:(id)arg2 ;
+(BOOL)_allowInteractiveSheetDismissal;
-(void)anchorActionSheetIfNeededFrom:(id)arg1 ;
-(id)hu_preloadContent;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 lowDiskSpaceAlertType:(long long)arg3 dismissActionHandler:(/*^block*/id)arg4 resultActionHandler:(/*^block*/id)arg5 ;
-(id)initWithType:(long long)arg1 captureMode:(long long)arg2 dismissActionHandler:(/*^block*/id)arg3 resultActionHandler:(/*^block*/id)arg4 ;
-(void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3 ;
-(void)dismissAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setButtons:(id)arg1 forAlert:(id)arg2 ;
-(id)actionForButton:(id)arg1 inAlert:(id)arg2 ;
-(void)_gkAddCancelButtonWithNoAction;
-(void)setPx_shouldForceAlertStyle:(BOOL)arg1 ;
-(BOOL)px_shouldForceAlertStyle;
-(void)mf_addCancelActionWithHandler:(/*^block*/id)arg1 ;
-(void)mf_presentFromViewController:(id)arg1 withSource:(id)arg2 ;
-(void)mf_presentConfirmationSheetFromViewController:(id)arg1 withSource:(id)arg2 ;
-(/*^block*/id)_handlerWithSingleActionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_handlerWithMultiActionHandler:(/*^block*/id)arg1 ;
-(void)MCUIShowFromController:(id)arg1 ;
-(void)MCUIAddCancelActionWithTitle:(id)arg1 ;
-(void)MCUIAddActionWithTitle:(id)arg1 style:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI17*)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_performAction:(id)arg1 invokeActionBlock:(/*^block*/id)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(/*^block*/id)arg3 ;
-(BOOL)_isPresented;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(CGPoint)arg2 inView:(id)arg3 presentingViewController:(id*)arg4 ;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(BOOL)arg3 dismissCompletion:(/*^block*/id)arg4 ;
-(void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3 ;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(CGPoint)arg3 inSourceView:(id)arg4 ;
-(id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1 ;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_setVisualStyle:(id)arg1 ;
-(id)_attributedTitle;
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(UIViewController *)contentViewController;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 shouldDismissHandler:(/*^block*/id)arg4 ;
-(void)viewDidLayoutSubviews;
-(void)_headerContentViewControllerWillTransitionToSize:(CGSize)arg1 withAnimations:(/*^block*/id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_postWillBeginSystemProvidedDismissalOfAlertController;
-(void)_contentViewControllerWillTransitionToSize:(CGSize)arg1 withAnimations:(/*^block*/id)arg2 ;
-(BOOL)shouldAutorotate;
-(void)_postDidBeginSystemProvidedDismissalOfAlertController;
-(BOOL)_viewControllerIsPresentedInModalPresentationContext:(id)arg1 ;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_childViewController:(id)arg1 willTransitionToSize:(CGSize)arg2 withAnimations:(/*^block*/id)arg3 ;
-(void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2 ;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_beginNoPresentingViewControllerPresentation;
-(void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1 ;
-(BOOL)_hasTitle;
-(long long)preferredStyle;
-(id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)_setSeparatedHeaderContentViewController:(id)arg1 ;
-(void)_setPresentationSourceRepresentationView:(id)arg1 ;
-(void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3 ;
-(void)_endNoPresentingViewControllerPresentation;
-(void)_updateProvidedStyleWithTraitCollection:(id)arg1 ;
-(NSArray *)actions;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(id)_styleProvider;
-(NSMutableArray *)_actions;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_modalPresentationStyleForResolvedStyle;
-(void)addAction:(id)arg1 ;
-(void)_setSystemProvidedPresentationDelegate:(id)arg1 ;
-(void)setCoordinatedActionPerformingDelegate:(id<UIAlertControllerCoordinatedActionPerforming>)arg1 ;
-(void)viewDidLoad;
-(void)_preserveInputViewsAnimated:(BOOL)arg1 ;
-(void)set_shouldFlipFrameForShimDismissal:(BOOL)arg1 ;
-(void)_performBatchActionChangesWithBlock:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_flipFrameForShimDismissalIfNecessary;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(id)_systemProvidedGestureRecognizer;
-(void)_returnKeyPressedInLastTextField;
-(void)setMessage:(NSString *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_setCompatibilityPopoverController:(id)arg1 ;
-(void)_setIndexesOfActionSectionSeparators:(id)arg1 ;
-(UIViewController *)_separatedHeaderContentViewController;
-(void)_dismissWithAction:(id)arg1 dismissCompletion:(/*^block*/id)arg2 ;
-(BOOL)_canDismissWithGestureRecognizer;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_hasMessage;
-(void)loadView;
-(UIView *)_presentationSourceRepresentationView;
-(id)cancelAction;
-(void)_setActions:(id)arg1 ;
-(double)_effectAlpha;
-(BOOL)_shouldFlipFrameForShimDismissal;
-(void)_setHeaderContentViewController:(id)arg1 ;
-(id<UIAlertControllerSystemProvidedPresentationDelegate>)_systemProvidedPresentationDelegate;
-(void)_setSystemProvidedPresentationView:(id)arg1 ;
-(id<UIAlertControllerCoordinatedActionPerforming>)coordinatedActionPerformingDelegate;
-(void)_dismissAnimated:(BOOL)arg1 triggeringAction:(id)arg2 ;
-(long long)_buttonTypeForBackGestureForIdiom:(long long)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)setTemporaryAnimationCoordinator:(_UIAnimationCoordinator *)arg1 ;
-(void)_becomeFirstResponderIfAppropriate;
-(void)_handleReturn;
-(UIAlertAction *)_cancelAction;
-(void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)_addReturnKeyCommandIfAppropriate;
-(void)_willParentTextFieldViewController;
-(void)_setPreviewInteractionController:(id)arg1 ;
-(void)_didParentTextFieldViewController;
-(id)_indexesOfActionSectionSeparators;
-(void)_uninstallBackGestureRecognizer;
-(UIPopoverController *)_compatibilityPopoverController;
-(UIView *)_systemProvidedPresentationView;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(BOOL)_shouldSupportReturnKeyPresses;
-(void)_dismissFromPopoverDimmingView;
-(UIImage *)image;
-(void)_setShouldAllowNilParameters:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView *)_foregroundView;
-(void)_recomputePreferredContentSize;
-(void)_updateModalPresentationStyle;
-(void)_removeKeyCommandForAction:(id)arg1 ;
-(BOOL)_shouldBecomeFirstResponder;
-(void)_installBackGestureRecognizer;
-(void)_setHasPreservedInputViews:(BOOL)arg1 ;
-(BOOL)_needsPreferredSizeCalculated;
-(BOOL)_shouldTreatEmptyStringsAsNil;
-(BOOL)isSpringLoaded;
-(id)_previewInteractionController;
-(id)_alertControllerContainer;
-(BOOL)_idiomSupportsBackGesture:(long long)arg1 ;
-(BOOL)_shouldDismissOnSizeChange;
-(id)_containedAlertController;
-(_UIAnimationCoordinator *)temporaryAnimationCoordinator;
-(BOOL)_canBePresentedAtLocation:(CGPoint)arg1 ;
-(UIAlertControllerVisualStyle *)_visualStyle;
-(BOOL)_shouldSizeToFillSuperview;
-(void)_setTitleMaximumLineCount:(long long)arg1 ;
-(void)_setShouldAlignToKeyboard:(BOOL)arg1 ;
-(void)_setAttributedTitle:(id)arg1 ;
-(void)_removeAllTextFields;
-(long long)_resolvedStyle;
-(UIAlertAction *)_focusedAction;
-(UIEdgeInsets)_contentInsets;
-(BOOL)_allowsShowingDimmingView;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(id)_dismissGestureRecognizer;
-(void)_setShouldReverseActions:(BOOL)arg1 ;
-(void)_invokeHandlersForAction:(id)arg1 ;
-(BOOL)_shouldProvideDimmingView;
-(BOOL)_shouldAllowNilParameters;
-(BOOL)_shouldPreserveInputViews;
-(void)setCancelAction:(id)arg1 ;
-(NSAttributedString *)_attributedDetailMessage;
-(void)_reevaluateResolvedStyle;
-(void)_setEffectAlpha:(double)arg1 ;
-(void)_dismissWithCancelAction;
-(_UIAlertControllerTextFieldViewController *)_textFieldViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_alignsToKeyboard;
-(id)_alertControllerView;
-(UIAlertAction *)preferredAction;
-(void)_updateProvidedStyle;
-(void)_updateShouldAlignToKeyboard;
-(void)_setAttributedDetailMessage:(id)arg1 ;
-(UIViewController *)_headerContentViewController;
-(void)_clearActionHandlers;
-(void)_removeAllActions;
-(BOOL)_hasContentToDisplay;
-(void)_addSectionDelimiter;
-(id)_returnKeyCommand;
-(void)linkAlertController:(id)arg1 ;
-(BOOL)_hasDetailMessage;
-(void)setPreferredAction:(UIAlertAction *)arg1 ;
-(BOOL)_shouldReverseActions;
-(BOOL)_shouldAlignToKeyboard;
-(BOOL)_isPresentedAsPopover;
-(void)_setAttributedMessage:(id)arg1 ;
-(void)_resolvedStyleChanged;
-(BOOL)_hasAttributedMessage;
-(id)_actionForReturnKey;
-(CFStringRef)_powerLoggingEventName;
-(BOOL)_hasAttributedTitle;
-(void)unlinkAlertController:(id)arg1 ;
-(void)_dismissWithAction:(id)arg1 ;
-(id)linkedAlertControllers;
-(long long)_titleLineBreakMode;
-(long long)_titleMaximumLineCount;
-(void)_handleKeyCommand:(id)arg1 ;
-(id)_attributedMessage;
-(id)_currentDescriptor;
-(void)_logBeingPresented;
-(void)_logBeingDismissed;
-(UIView *)_dimmingView;
-(void)_setStyleProvider:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)textFields;
-(NSString *)message;
-(BOOL)_isHidden;
-(void)_dismissFromBackButton:(id)arg1 ;
-(BOOL)_hasPreservedInputViews;
-(NSString *)description;
-(void)_setTitleLineBreakMode:(long long)arg1 ;
-(NSMutableArray *)_actionDelimiterIndices;
-(void)_restoreInputViewsAnimated:(BOOL)arg1 ;
@end

