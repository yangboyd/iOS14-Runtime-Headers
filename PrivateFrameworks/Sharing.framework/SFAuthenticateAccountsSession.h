/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, AAUIGenericTermsRemoteUI, SFSession, TRSession, NSMutableArray, TROperationQueue, NSObject, SFDevice, UIViewController, NSString;

@interface SFAuthenticateAccountsSession : NSObject <AAUIGenericTermsRemoteUIDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	unsigned long long _startTicks;
	int _accountsState;
	ACAccountStore* _accountStore;
	int _iCloudTermsState;
	AAUIGenericTermsRemoteUI* _termsRemoteUI;
	SFSession* _sfSession;
	int _sfSessionState;
	BOOL _sessionSecured;
	int _pairVerifyState;
	int _pairSetupState;
	int _infoExchangeState;
	unsigned _targetedAccountTypes;
	int _trSessionState;
	TRSession* _trSession;
	NSMutableArray* _trOperations;
	TROperationQueue* _trOperationQueue;
	BOOL _trAuthenticationEnabled;
	int _trAuthenticationState;
	int _finishState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SFDevice* _peerDevice;
	UIViewController* _presentingViewController;
	/*^block*/id _progressHandler;
	/*^block*/id _promptForPINHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                    //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                     //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_run;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_cleanup;
-(void)invalidate;
-(void)setProgressHandler:(id)arg1 ;
-(void)dealloc;
-(id)progressHandler;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(UIViewController *)presentingViewController;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)_runFinish;
-(int)_runSFSessionStart;
-(int)_validateAccounts;
-(int)_runPairVerify;
-(int)_validateiCloudAccountTerms;
-(int)_runPairSetup;
-(int)_runInfoExchange;
-(int)_runTRSessionStart;
-(int)_runTRAuthentication;
-(void)_handleShowTermsUI:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_runInfoExchangeRequest;
-(id)_trTargetedServices;
-(id)_availableAccountsToSignIn;
-(void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2 ;
-(void)_presentiCloudTermsUIWithAccount:(id)arg1 ;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)__runFinishWithSFSession:(id)arg1 ;
-(int)__validateAccountsWithAccountStore:(id)arg1 ;
-(SFDevice *)peerDevice;
-(void)activate;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(void)pairSetupTryPIN:(id)arg1 ;
-(id)promptForPINHandler;
-(void)setPromptForPINHandler:(id)arg1 ;
@end
