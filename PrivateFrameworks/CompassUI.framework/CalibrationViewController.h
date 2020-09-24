/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompassUI/CompassUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class CompassBackgroundView, CAShapeLayer, UILabel, UIButton, CalibrationBallView, NSMutableArray;

@interface CalibrationViewController : UIViewController {

	CompassBackgroundView* _compassBackgroundView;
	CAShapeLayer* _compassBackgroundViewMask;
	UILabel* _instructionLabel;
	UILabel* _titleLabel;
	UIButton* _cancelButton;
	CalibrationBallView* _ballView;
	CGPoint _compassOriginPoint;
	NSMutableArray* _calibrationConstraints;
	float* _ticsShowingArray;
	double _angleToRim;
	double _calibrationAngle;
	int _quantizationType;
	double _previousTimestamp;
	double _startTicAngle;
	BOOL _ignoreMotionUpdates;
	BOOL _shouldCompleteTics;
	double _previousHorizontalAngle;
	 _previousGravity;
	unsigned long long _numCompleteTics;
	double _compassRadius;

}
-(void)cancel;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMotion:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reset;
-(void)viewWillLayoutSubviews;
-(void)userDefaultsChanged:(id)arg1 ;
-(id)init;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithOriginPoint:(CGPoint)arg1 ;
-(void)_updateSizes;
-(id)updatedMaskingPath;
-(void)hideAllTics;
-(void)addConstraints;
-(void)updateMaskingPath;
-(float)quantizedPercentage:(double)arg1 forAngle:(double)arg2 ;
-(void)showTicsBetweenStartAngle:(double)arg1 endAngle:(double)arg2 withCredit:(double)arg3 ;
-(double)_correctedAngleForCurrentOrientation:(double)arg1 ;
-(void)setBallAngle:(double)arg1 tiltAngle:(double)arg2 ;
-(void)showTicAtAngle:(double)arg1 withCredit:(double)arg2 ;
-(BOOL)circleIsCompleted;
-(double)completeCircle;
@end
