/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCUIViewController.h>
#import <libobjc.A.dylib/MCInstallationConsentDelegate.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/MCProfileQuestionsControllerDelegate.h>
#import <libobjc.A.dylib/MCInstallationWarningDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/MCUISignInViewControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol MCInstallProfileDelegate;
@class MCProfile, NSData, NSString, NSSManager, MCProfileViewController, MCInstallProfileQuestionViewController, NSArray;

@interface MCInstallProfileViewController : MCUIViewController <MCInstallationConsentDelegate, DevicePINControllerDelegate, MCProfileQuestionsControllerDelegate, MCInstallationWarningDelegate, MCProfileViewControllerDelegate, MCUISignInViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {

	BOOL _processingPayload;
	BOOL _userCancelledInstall;
	BOOL _secondaryProfileReceived;
	BOOL _installHasFailed;
	BOOL _questionsAlreadyAsked;
	BOOL _waitingForNextQuestion;
	BOOL _delayNextQuesion;
	int _installState;
	id<MCInstallProfileDelegate> _delegate;
	MCProfile* _originalProfile;
	NSData* _profileData;
	NSData* _originalProfileData;
	/*^block*/id _signInCompletionHandler;
	NSString* _enrollmentPersonaID;
	NSSManager* _nssManager;
	MCProfile* _profile;
	MCProfileViewController* _profileViewController;
	MCInstallProfileQuestionViewController* _questionsController;
	NSString* _pin;
	NSArray* _warnings;
	/*^block*/id _didAppearBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MCProfile * originalProfile;                                               //@synthesize originalProfile=_originalProfile - In the implementation block
@property (nonatomic,retain) NSData * profileData;                                                      //@synthesize profileData=_profileData - In the implementation block
@property (nonatomic,retain) NSData * originalProfileData;                                              //@synthesize originalProfileData=_originalProfileData - In the implementation block
@property (assign,nonatomic) BOOL processingPayload;                                                    //@synthesize processingPayload=_processingPayload - In the implementation block
@property (assign,nonatomic) BOOL userCancelledInstall;                                                 //@synthesize userCancelledInstall=_userCancelledInstall - In the implementation block
@property (assign,nonatomic) BOOL secondaryProfileReceived;                                             //@synthesize secondaryProfileReceived=_secondaryProfileReceived - In the implementation block
@property (nonatomic,copy) id signInCompletionHandler;                                                  //@synthesize signInCompletionHandler=_signInCompletionHandler - In the implementation block
@property (nonatomic,copy) NSString * enrollmentPersonaID;                                              //@synthesize enrollmentPersonaID=_enrollmentPersonaID - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                                                   //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) MCProfile * profile;                                                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) MCProfileViewController * profileViewController;                           //@synthesize profileViewController=_profileViewController - In the implementation block
@property (nonatomic,retain) MCInstallProfileQuestionViewController * questionsController;              //@synthesize questionsController=_questionsController - In the implementation block
@property (assign,nonatomic) int installState;                                                          //@synthesize installState=_installState - In the implementation block
@property (assign,nonatomic) BOOL installHasFailed;                                                     //@synthesize installHasFailed=_installHasFailed - In the implementation block
@property (assign,nonatomic) BOOL questionsAlreadyAsked;                                                //@synthesize questionsAlreadyAsked=_questionsAlreadyAsked - In the implementation block
@property (assign,nonatomic) BOOL waitingForNextQuestion;                                               //@synthesize waitingForNextQuestion=_waitingForNextQuestion - In the implementation block
@property (assign,nonatomic) BOOL delayNextQuesion;                                                     //@synthesize delayNextQuesion=_delayNextQuesion - In the implementation block
@property (nonatomic,retain) NSString * pin;                                                            //@synthesize pin=_pin - In the implementation block
@property (nonatomic,retain) NSArray * warnings;                                                        //@synthesize warnings=_warnings - In the implementation block
@property (nonatomic,copy) id didAppearBlock;                                                           //@synthesize didAppearBlock=_didAppearBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallProfileDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(void)setProfile:(MCProfile *)arg1 ;
-(NSString *)pin;
-(int)installState;
-(void)setInstallState:(int)arg1 ;
-(void)setWarnings:(NSArray *)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(MCProfile *)profile;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2 ;
-(void)profileConnectionDidRequestCurrentPasscode:(id)arg1 ;
-(void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2 ;
-(void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2 ;
-(void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3 ;
-(void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2 ;
-(void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2 ;
-(void)setPin:(NSString *)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)setDelegate:(id<MCInstallProfileDelegate>)arg1 ;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(id<MCInstallProfileDelegate>)delegate;
-(NSArray *)warnings;
-(NSData *)profileData;
-(void)setProfileData:(NSData *)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(BOOL)profileViewControllerIsProfileInstalled;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)showProgressIndicator;
-(id)initWithInstallableProfileData:(id)arg1 fromSource:(unsigned long long)arg2 ;
-(id)initWithProfile:(id)arg1 viewMode:(long long)arg2 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)setOriginalProfileData:(NSData *)arg1 ;
-(MCProfileViewController *)profileViewController;
-(void)setOriginalProfile:(MCProfile *)arg1 ;
-(void)setProfileViewController:(MCProfileViewController *)arg1 ;
-(void)setNssManager:(NSSManager *)arg1 ;
-(id)didAppearBlock;
-(void)setDidAppearBlock:(id)arg1 ;
-(void)setDelayNextQuesion:(BOOL)arg1 ;
-(void)_cancelInstallDueToApplicationExit;
-(BOOL)installHasFailed;
-(BOOL)userCancelledInstall;
-(void)_returnToSender;
-(void)queueNextProfileData:(id)arg1 ;
-(void)setInstallHasFailed:(BOOL)arg1 ;
-(void)_resetInstallationVariables;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)setProcessingPayload:(BOOL)arg1 ;
-(void)setUserCancelledInstall:(BOOL)arg1 ;
-(void)setQuestionsAlreadyAsked:(BOOL)arg1 ;
-(void)_hideProgressIndicatorIfNeeded;
-(BOOL)displayedAsSheet;
-(BOOL)processingPayload;
-(id)_newRightBarButtonItem;
-(void)_takeMeBack;
-(void)_beginInstallFlow;
-(void)continueInstallFlowAfterPINVerification;
-(void)pinExtensionShowPINSheet;
-(BOOL)_attemptRemoteInstallAfterCompletingPrecheck;
-(void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_installProfileOnWatchWithCompletion:(/*^block*/id)arg1 ;
-(NSSManager *)nssManager;
-(void)questionsExtensionDidRequestAnswersForQuestions:(id)arg1 ;
-(void)consentExtensionShowConsentAndWarnings:(id)arg1 ;
-(void)questionsExtensionDidFinishPreflightWithError:(id)arg1 ;
-(void)setSecondaryProfileReceived:(BOOL)arg1 ;
-(void)setEnrollmentPersonaID:(NSString *)arg1 ;
-(void)hideProgressIndicatorWithShowButtons:(BOOL)arg1 ;
-(void)_cancelInstallAfterMAIDAuthenticationAnimated:(BOOL)arg1 ;
-(void)_signInMAID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelInstallWhilePresentingConsentAndWarningsAnimated:(BOOL)arg1 ;
-(void)questionsExtensionInstallFinished;
-(BOOL)_installErrorIsUserCancelledError:(id)arg1 ;
-(void)_handleInstallationError:(id)arg1 ;
-(BOOL)secondaryProfileReceived;
-(NSData *)originalProfileData;
-(MCProfile *)originalProfile;
-(void)_showAlertForError:(id)arg1 suggestedTitle:(id)arg2 suggestedMessage:(id)arg3 ;
-(void)cancelInstallWhilePresentingQuestionsAnimated:(BOOL)arg1 ;
-(void)addInstallActionWithTitle:(id)arg1 style:(long long)arg2 toAlert:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addCancelActionToAlert:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)continueInstallFlowAfterCompletingPrecheck;
-(void)performRemoveAfterFinalVerification;
-(void)profileRemovalDidFinish;
-(void)_removeWatchProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removePhoneProfileWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSignInCompletionHandler:(id)arg1 ;
-(id)signInCompletionHandler;
-(NSString *)enrollmentPersonaID;
-(id)initWithProfileDataFromSettingsJump:(id)arg1 ;
-(void)submitQuestionAnswers:(id)arg1 ;
-(void)cancelInstallWhilePresentingConsentAndWarningsUponDidAppear;
-(void)showFinalInstallationAlert:(/*^block*/id)arg1 ;
-(void)showMDMFinalInstallationAlert:(/*^block*/id)arg1 ;
-(void)showReEnrollFailureAlert;
-(MCInstallProfileQuestionViewController *)questionsController;
-(void)setQuestionsController:(MCInstallProfileQuestionViewController *)arg1 ;
-(BOOL)questionsAlreadyAsked;
-(BOOL)waitingForNextQuestion;
-(void)setWaitingForNextQuestion:(BOOL)arg1 ;
-(BOOL)delayNextQuesion;
-(void)installationWarningViewController:(id)arg1 finishedWithUserContinueResponse:(BOOL)arg2 ;
-(void)_presentConsent:(id)arg1 ;
-(void)_didFinishPresentingConsent:(id)arg1 ;
-(void)warningsExtensionPushWarningsControllerWithWarnings:(id)arg1 ;
-(void)installationConsentViewController:(id)arg1 finishedWithUserContinueResponse:(BOOL)arg2 ;
-(void)setCurrentQuestionsController:(id)arg1 ;
-(void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2 ;
-(BOOL)questionsControllerIsDisplayedInSheet:(id)arg1 ;
-(void)_didFinishEnteringPINWithCompletion:(/*^block*/id)arg1 ;
-(void)_promptUserWithQuestionsAfterDelay:(id)arg1 ;
-(void)_promptUserWithQuestions:(id)arg1 ;
-(void)_finishWaitingForMoreQuestions;
-(void)_waitForNextQuestion;
-(void)_showCPLFinalInstallationWarning:(/*^block*/id)arg1 withMDMWarning:(BOOL)arg2 ;
-(id)_localizedCPLFinalWarningString;
@end

