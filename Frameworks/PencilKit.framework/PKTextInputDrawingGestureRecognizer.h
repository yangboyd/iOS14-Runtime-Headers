/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerProtocol.h>
#import <libobjc.A.dylib/PKTextInputDebugStateReporting.h>

@protocol PKDrawingGestureTarget;
@class PKTextInputElement, UITouch, NSString;

@interface PKTextInputDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol, PKTextInputDebugStateReporting> {

	BOOL _waitingForTargetElementSearch;
	BOOL _requiresTargetElementToBegin;
	BOOL _requiresPastTapToBegin;
	double _drawStartTime;
	double _touchesBeganTimestamp;
	CGPoint _drawTouchStartPoint;
	/*^block*/id _timeoutBlock;
	/*^block*/id _longPressTentativeBlock;
	/*^block*/id _longPressSuccessBlock;
	/*^block*/id _notMovingCancelBlock;
	/*^block*/id _gestureEnvironmentResetTimeoutBlock;
	BOOL _drawingTargetIsDrawing;
	BOOL _isReplaying;
	unsigned long long _activeInputProperties;
	id<PKDrawingGestureTarget> drawingTarget;
	long long _strokeAcceptanceState;
	long long _longPressState;
	PKTextInputElement* _targetElement;
	UITouch* _drawingTouch;
	long long _panState;
	long long _panDirection;

}

@property (nonatomic,retain) UITouch * drawingTouch;                                                         //@synthesize drawingTouch=_drawingTouch - In the implementation block
@property (assign,setter=_setDrawingTargetIsDrawing:,nonatomic) BOOL drawingTargetIsDrawing;                 //@synthesize drawingTargetIsDrawing=_drawingTargetIsDrawing - In the implementation block
@property (assign,setter=_setStrokeAcceptanceState:,nonatomic) long long strokeAcceptanceState;              //@synthesize strokeAcceptanceState=_strokeAcceptanceState - In the implementation block
@property (assign,setter=_setLongPressState:,nonatomic) long long longPressState;                            //@synthesize longPressState=_longPressState - In the implementation block
@property (assign,setter=_setPanState:,nonatomic) long long panState;                                        //@synthesize panState=_panState - In the implementation block
@property (assign,setter=_setPanDirection:,nonatomic) long long panDirection;                                //@synthesize panDirection=_panDirection - In the implementation block
@property (nonatomic,retain) PKTextInputElement * targetElement;                                             //@synthesize targetElement=_targetElement - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) BOOL isReplaying;                                                               //@synthesize isReplaying=_isReplaying - In the implementation block
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
@property (nonatomic,readonly) unsigned long long activeInputProperties;                                     //@synthesize activeInputProperties=_activeInputProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_systemGestureClassesToAvoid;
-(void)end;
-(void)cancel;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setState:(long long)arg1 ;
-(PKTextInputElement *)targetElement;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setTargetElement:(PKTextInputElement *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(long long)panState;
-(NSString *)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)reportDebugStateDescription:(/*^block*/id)arg1 ;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id<PKDrawingGestureTarget>)arg1 ;
-(BOOL)isReplaying;
-(unsigned long long)activeInputProperties;
-(void)_replayDrawingBegan:(SCD_Struct_PK6)arg1 ;
-(void)_replayDrawingMoved:(SCD_Struct_PK6)arg1 ;
-(void)_replayDrawingEnded;
-(void)_replayDrawingCancelled;
-(void)setIsReplaying:(BOOL)arg1 ;
-(BOOL)drawingTargetIsDrawing;
-(void)_endDrawing;
-(UITouch *)drawingTouch;
-(long long)strokeAcceptanceState;
-(void)cancelDrawing;
-(long long)longPressState;
-(BOOL)hasMovedPastTapUseTimestampFromTouch:(BOOL)arg1 ;
-(void)finishedElementFindingWithElement:(id)arg1 candidateElements:(id)arg2 ;
-(void)_drawingBegan;
-(void)_drawingMoved:(id)arg1 ;
-(void)_drawingEnded;
-(void)setDrawingTouch:(UITouch *)arg1 ;
-(void)_cancelOrFailGesture;
-(void)_updatePanStateForCandidateElements:(id)arg1 ;
-(void)_evaluateMovingToBeganStateUseTimestampFromTouch:(BOOL)arg1 ;
-(void)_updateStrokeAcceptanceStateUseTimestampFromTouch:(BOOL)arg1 ;
-(double)timeIntervalSinceStartOfGesture;
-(double)_distanceFromStartPositionForTouch:(id)arg1 ;
-(BOOL)_gestureStartedInsideTargetElement;
-(double)timeIntervalSinceTouchesBeganForTouch:(id)arg1 ;
-(BOOL)_isValidLongPressOverDuration:(double)arg1 ;
-(BOOL)_isWithinLongPressDistanceForTouch:(id)arg1 ;
-(void)_cancelLongPressTimerBlocks;
-(void)_longPressTentativeTimerFired;
-(void)_longPressSuccessTimerFired;
-(void)_setLongPressState:(long long)arg1 ;
-(BOOL)_isValidLongPress;
-(BOOL)_hasMovedPastMinimumPanThresholdForTouch:(id)arg1 ;
-(long long)_panDirectionForTouch:(id)arg1 ;
-(void)_setPanDirection:(long long)arg1 ;
-(long long)panDirection;
-(void)_setPanState:(long long)arg1 ;
-(BOOL)_hasMovedPastScrollThresholdForTouch:(id)arg1 ;
-(void)_beginDrawingIfNeeded;
-(void)_scheduleLongPressTimerBlocks;
-(void)_updateLongPressValidityForTouch:(id)arg1 ;
-(void)_enumerateTouchesForUpdateWithEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_updatePanGestureStateForTouch:(id)arg1 ;
-(void)_cancelScheduledStrokeAcceptanceBlock;
-(void)_acceptStrokeTimeoutTriggered;
-(void)_cancelNotMovingCancellationBlock;
-(void)_evaluateCancelIfNotMoving;
-(void)_setStrokeAcceptanceState:(long long)arg1 ;
-(void)_setDrawingTargetIsDrawing:(BOOL)arg1 ;
@end
