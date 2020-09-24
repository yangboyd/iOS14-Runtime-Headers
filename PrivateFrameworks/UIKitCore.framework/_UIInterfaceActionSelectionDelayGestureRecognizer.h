/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _delayedAction;

}

@property (nonatomic,readonly) UIDelayedAction * delayedAction;              //@synthesize delayedAction=_delayedAction - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_timerSatisfied;
-(UIDelayedAction *)delayedAction;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end
