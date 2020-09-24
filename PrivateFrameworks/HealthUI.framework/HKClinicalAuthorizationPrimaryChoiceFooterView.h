/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface HKClinicalAuthorizationPrimaryChoiceFooterView : UIView {

	UIButton* _primaryButton;

}

@property (nonatomic,readonly) UIButton * primaryButton;              //@synthesize primaryButton=_primaryButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)primaryButton;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpSubviews;
-(void)_updateMetricsWithTraitCollection:(id)arg1 ;
-(double)_bottomMarginForTraitCollection:(id)arg1 ;
@end
