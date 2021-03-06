/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CPSBannerView.h>

@class UIStackView, CPUIBannerViewButton, UIImageView, CPSAbridgableLabel;

@interface CPSGuidanceBannerView : CPSBannerView {

	UIStackView* _labelStackView;
	CPUIBannerViewButton* _actionButton;
	UIImageView* _applicationIconImageView;
	UIImageView* _guidanceImageView;
	CPSAbridgableLabel* _guidanceTextLabel;
	CPSAbridgableLabel* _guidanceDetailTextLabel;
	long long _currentInterfaceStyle;

}

@property (nonatomic,retain) UIStackView * labelStackView;                              //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) CPUIBannerViewButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIImageView * applicationIconImageView;                    //@synthesize applicationIconImageView=_applicationIconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * guidanceImageView;                           //@synthesize guidanceImageView=_guidanceImageView - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceTextLabel;                    //@synthesize guidanceTextLabel=_guidanceTextLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * guidanceDetailTextLabel;              //@synthesize guidanceDetailTextLabel=_guidanceDetailTextLabel - In the implementation block
@property (assign,nonatomic) long long currentInterfaceStyle;                           //@synthesize currentInterfaceStyle=_currentInterfaceStyle - In the implementation block
-(void)_updateLabels;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CPUIBannerViewButton *)actionButton;
-(void)setActionButton:(CPUIBannerViewButton *)arg1 ;
-(UIStackView *)labelStackView;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(id)initWithBannerItem:(id)arg1 ;
-(void)_setGuidanceImageViewForImageSet:(id)arg1 ;
-(void)_updateBannerSelectedState;
-(UIImageView *)applicationIconImageView;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)setApplicationIconImageView:(UIImageView *)arg1 ;
-(UIImageView *)guidanceImageView;
-(void)setGuidanceImageView:(UIImageView *)arg1 ;
-(CPSAbridgableLabel *)guidanceTextLabel;
-(void)setGuidanceTextLabel:(CPSAbridgableLabel *)arg1 ;
-(CPSAbridgableLabel *)guidanceDetailTextLabel;
-(void)setGuidanceDetailTextLabel:(CPSAbridgableLabel *)arg1 ;
-(long long)currentInterfaceStyle;
-(void)setCurrentInterfaceStyle:(long long)arg1 ;
@end

