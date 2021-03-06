/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UITapRecognizerDelegate;
@class NSMutableSet, NSMutableArray, NSArray, NSSet;

@interface UITapRecognizer : NSObject <NSSecureCoding> {

	unsigned long long _numberOfTouchesRequired;
	unsigned long long _numberOfTapsRequired;
	long long _buttonMaskRequired;
	BOOL _continuousTapRecognition;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTouches;
	int _currentNumberOfTaps;
	int _numberOfTouchesForCurrentTap;
	CGPoint _location;
	CGPoint _startPoint;
	CGPoint _digitizerLocation;
	double _allowableMovement;
	double _allowableSeparation;
	double _allowableTouchTimeSeparation;
	double _maximumSingleTapDuration;
	double _maximumTapDuration;
	double _minimumTapDuration;
	double _startTime;
	double _maximumIntervalBetweenSuccessiveTaps;
	NSMutableArray* _touches;
	long long _strongestDirectionalAxis;
	double _strongestDirectionalForce;
	unsigned _timerOn : 1;
	unsigned _multitouchTimerOn : 1;
	unsigned _noNewTouches : 1;
	unsigned _hasPointerTouch : 1;
	BOOL _countsOnlyActiveTouches;
	id<UITapRecognizerDelegate> _delegate;
	long long _exclusiveDirectionalAxis;

}

@property (assign,nonatomic,__weak) id<UITapRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsRequired;                  //@synthesize numberOfTapsRequired=_numberOfTapsRequired - In the implementation block
@property (assign,nonatomic) BOOL continuousTapRecognition; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;               //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) long long buttonMaskRequired;                             //@synthesize buttonMaskRequired=_buttonMaskRequired - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) double allowableSeparation; 
@property (assign,nonatomic) double allowableTouchTimeSeparation;                      //@synthesize allowableTouchTimeSeparation=_allowableTouchTimeSeparation - In the implementation block
@property (assign,nonatomic) double maximumSingleTapDuration; 
@property (assign,nonatomic) double maximumTapDuration;                                //@synthesize maximumTapDuration=_maximumTapDuration - In the implementation block
@property (assign,nonatomic) double minimumTapDuration;                                //@synthesize minimumTapDuration=_minimumTapDuration - In the implementation block
@property (assign,nonatomic) double maximumIntervalBetweenSuccessiveTaps; 
@property (assign,nonatomic) BOOL countsOnlyActiveTouches;                             //@synthesize countsOnlyActiveTouches=_countsOnlyActiveTouches - In the implementation block
@property (assign,nonatomic) long long exclusiveDirectionalAxis;                       //@synthesize exclusiveDirectionalAxis=_exclusiveDirectionalAxis - In the implementation block
@property (nonatomic,readonly) NSArray * touches;                                      //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) NSSet * activeTouches; 
+(BOOL)supportsSecureCoding;
-(void)startMultitouchTimer:(double)arg1 ;
-(NSSet *)activeTouches;
-(CGPoint)locationInView:(id)arg1 focusSystem:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(BOOL)activeTouchesExceedAllowableSeparation;
-(void)setNumberOfTapsRequired:(unsigned long long)arg1 ;
-(void)clearMultitouchTimer;
-(NSArray *)touches;
-(void)tooSlow:(id)arg1 ;
-(void)multitouchExpired:(id)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)setButtonMaskRequired:(long long)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)buttonMaskRequired;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)_reset;
-(void)dealloc;
-(void)_beginInteraction;
-(CGPoint)_digitizerLocation;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setMaximumSingleTapDuration:(double)arg1 ;
-(double)maximumSingleTapDuration;
-(void)setExclusiveDirectionalAxis:(long long)arg1 ;
-(void)setAllowableSeparation:(double)arg1 ;
-(double)allowableMovement;
-(BOOL)continuousTapRecognition;
-(void)setAllowableMovement:(double)arg1 ;
-(id)init;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<UITapRecognizerDelegate>)arg1 ;
-(void)_interactionEndedTouch:(BOOL)arg1 ;
-(void)setMaximumTapDuration:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMinimumTapDuration:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountsOnlyActiveTouches:(BOOL)arg1 ;
-(id<UITapRecognizerDelegate>)delegate;
-(double)allowableSeparation;
-(long long)exclusiveDirectionalAxis;
-(void)_updateDigitizerLocationForEvent:(id)arg1 ;
-(BOOL)countsOnlyActiveTouches;
-(double)_effectiveAllowableMovement;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)minimumTapDuration;
-(void)setAllowableTouchTimeSeparation:(double)arg1 ;
-(double)maximumTapDuration;
-(void)clearTapTimer;
-(void)setContinuousTapRecognition:(BOOL)arg1 ;
-(double)allowableTouchTimeSeparation;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1 ;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(unsigned long long)numberOfTapsRequired;
@end

