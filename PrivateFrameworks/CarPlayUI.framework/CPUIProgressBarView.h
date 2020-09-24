/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface CPUIProgressBarView : UIView {

	UIView* _overallBarView;
	UIView* _progressBarView;
	double _progress;

}

@property (nonatomic,retain) UIView * overallBarView;               //@synthesize overallBarView=_overallBarView - In the implementation block
@property (nonatomic,retain) UIView * progressBarView;              //@synthesize progressBarView=_progressBarView - In the implementation block
@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(UIView *)overallBarView;
-(UIView *)progressBarView;
-(void)setOverallBarView:(UIView *)arg1 ;
-(void)setProgressBarView:(UIView *)arg1 ;
@end
