/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBHomeGesturePanGestureRecognizerInterfaceDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBHomeGestureInteractionDelegate.h>

@class SBTransientOverlayPresentationManager, SBAssistantController, SBHomeGestureSettings, SBHomeGestureInteraction, SBModalUIFluidDismissGestureWorkspaceTransaction, NSString;

@interface SBModalUIFluidDismissGestureManager : NSObject <SBHomeGesturePanGestureRecognizerInterfaceDelegate, BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate> {

	SBTransientOverlayPresentationManager* _transientOverlayPresentationManager;
	SBAssistantController* _assistantController;
	SBHomeGestureSettings* _homeGestureSettings;
	SBHomeGestureInteraction* _homeGestureInteraction;
	SBModalUIFluidDismissGestureWorkspaceTransaction* _currentTransaction;

}

@property (nonatomic,readonly) SBTransientOverlayPresentationManager * transientOverlayPresentationManager;              //@synthesize transientOverlayPresentationManager=_transientOverlayPresentationManager - In the implementation block
@property (nonatomic,readonly) SBAssistantController * assistantController;                                              //@synthesize assistantController=_assistantController - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureInteraction * homeGestureInteraction;                                          //@synthesize homeGestureInteraction=_homeGestureInteraction - In the implementation block
@property (nonatomic,retain) SBModalUIFluidDismissGestureWorkspaceTransaction * currentTransaction;                      //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBTransientOverlayPresentationManager *)transientOverlayPresentationManager;
-(long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(SBAssistantController *)assistantController;
-(void)homeGestureInteractionBegan:(id)arg1 ;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(SBModalUIFluidDismissGestureWorkspaceTransaction *)currentTransaction;
-(SBHomeGestureInteraction *)homeGestureInteraction;
-(BOOL)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)transactionDidComplete:(id)arg1 ;
-(void)setHomeGestureInteraction:(SBHomeGestureInteraction *)arg1 ;
-(void)setCurrentTransaction:(SBModalUIFluidDismissGestureWorkspaceTransaction *)arg1 ;
-(void)homeGestureInteractionEnded:(id)arg1 ;
-(void)homeGestureInteractionCancelled:(id)arg1 ;
-(void)homeGestureInteractionChanged:(id)arg1 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)handleGestureChanged:(id)arg1 ;
-(void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(BOOL)arg2 dismissalThreshold:(double)arg3 initiatedFromIndirectEdge:(BOOL)arg4 ;
-(long long)_dismissalTypeForCurrentContext;
-(void)handleGestureEnded:(id)arg1 ;
-(unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(BOOL)arg2 ;
-(id)initWithTransientOverlayPresentationManager:(id)arg1 assistantController:(id)arg2 ;
@end
