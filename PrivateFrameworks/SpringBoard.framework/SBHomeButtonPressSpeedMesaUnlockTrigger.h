/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger {

	BSTimer* _slowPressTimer;
	BOOL _bioUnlockOccurred;
	BOOL _buttonIsDown;
	BOOL _fingerIsOn;
	BOOL _timerFired;
	double _slowPressDuration;

}

@property (setter=_setSlowPressTimer:,getter=_slowPressTimer,nonatomic,retain) BSTimer * slowPressTimer;              //@synthesize slowPressTimer=_slowPressTimer - In the implementation block
@property (assign,nonatomic) double slowPressDuration;                                                                //@synthesize slowPressDuration=_slowPressDuration - In the implementation block
-(void)screenOff;
-(void)_cancelTimer;
-(void)_timerFired;
-(BOOL)bioUnlock;
-(id)init;
-(void)_startTimer;
-(void)menuButtonUp;
-(id)succinctDescriptionBuilder;
-(void)menuButtonDown;
-(id)description;
-(void)fingerOff;
-(double)slowPressDuration;
-(BOOL)_isTimerRunning;
-(BOOL)_isPrimed;
-(void)_evaluateUnlock;
-(void)setSlowPressDuration:(double)arg1 ;
-(id)_slowPressTimer;
-(void)_setSlowPressTimer:(id)arg1 ;
@end
