/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <libobjc.A.dylib/SiriUICarDNDDelegate.h>

@class NSString;

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem <SiriUICarDNDDelegate> {

	BOOL _showSiriHeaderViewController;
	/*^block*/id _notDrivingActionHandler;

}

@property (nonatomic,copy) id notDrivingActionHandler;                       //@synthesize notDrivingActionHandler=_notDrivingActionHandler - In the implementation block
@property (assign,nonatomic) BOOL showSiriHeaderViewController;              //@synthesize showSiriHeaderViewController=_showSiriHeaderViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)reappearsAfterUnlock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)controllerDidProvideContext:(id)arg1 ;
-(id)notDrivingActionHandler;
-(BOOL)showSiriHeaderViewController;
-(void)setNotDrivingActionHandler:(id)arg1 ;
-(void)setShowSiriHeaderViewController:(BOOL)arg1 ;
@end

