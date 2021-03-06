/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UIStackView, UILabel, _UIPrototypingMenuSlider, UITapGestureRecognizer;

@interface _UIPrototypingMenuNumberCell : _UIPrototypingMenuCell {

	double _min;
	double _max;
	double _current;
	UIStackView* _floatValueStackView;
	UILabel* _minLabel;
	UILabel* _maxLabel;
	_UIPrototypingMenuSlider* _slider;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UIStackView * floatValueStackView;                   //@synthesize floatValueStackView=_floatValueStackView - In the implementation block
@property (nonatomic,retain) UILabel * minLabel;                                  //@synthesize minLabel=_minLabel - In the implementation block
@property (nonatomic,retain) UILabel * maxLabel;                                  //@synthesize maxLabel=_maxLabel - In the implementation block
@property (nonatomic,retain) _UIPrototypingMenuSlider * slider;                   //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) double min;                                          //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                                          //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double current;                                      //@synthesize current=_current - In the implementation block
-(_UIPrototypingMenuSlider *)slider;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setMin:(double)arg1 ;
-(double)min;
-(void)setSlider:(_UIPrototypingMenuSlider *)arg1 ;
-(UILabel *)minLabel;
-(UILabel *)maxLabel;
-(void)setMax:(double)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(double)max;
-(void)setCurrent:(double)arg1 ;
-(double)current;
-(void)_prototypingSettingDidChange;
-(void)_sliderDidChangeValue:(id)arg1 ;
-(void)_tapRecognizerDidRecognizer:(id)arg1 ;
-(UIStackView *)floatValueStackView;
-(void)setFloatValueStackView:(UIStackView *)arg1 ;
-(void)setMinLabel:(UILabel *)arg1 ;
-(void)setMaxLabel:(UILabel *)arg1 ;
@end

