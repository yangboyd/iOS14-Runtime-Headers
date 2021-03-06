/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSString, UILabel, HRVideoPlayerView, UIButton, UIView, HKSeparatorLineView, NSLayoutConstraint;

@interface HROnboardingElectrocardiogramResultView : UIView {

	BOOL _hideNumberedTitle;
	BOOL _alwaysExpanded;
	BOOL _shouldHideSeparatorLine;
	BOOL _expanded;
	NSString* _title;
	UILabel* _numberedTitleLabel;
	HRVideoPlayerView* _playerView;
	NSString* _numberedTitle;
	NSString* _visibleBody;
	UILabel* _visibleBodyLabel;
	UIButton* _learnMoreButton;
	UIView* _expandedView;
	HKSeparatorLineView* _separatorLineView;
	NSLayoutConstraint* _playerViewOrVisibleBodyLabelTopConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * title;                                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * numberedTitle;                                                      //@synthesize numberedTitle=_numberedTitle - In the implementation block
@property (nonatomic,retain) HRVideoPlayerView * playerView;                                              //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,copy) NSString * visibleBody;                                                        //@synthesize visibleBody=_visibleBody - In the implementation block
@property (nonatomic,retain) UILabel * numberedTitleLabel;                                                //@synthesize numberedTitleLabel=_numberedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * visibleBodyLabel;                                                  //@synthesize visibleBodyLabel=_visibleBodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                                  //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * expandedView;                                                       //@synthesize expandedView=_expandedView - In the implementation block
@property (nonatomic,retain) HKSeparatorLineView * separatorLineView;                                     //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playerViewOrVisibleBodyLabelTopConstraint;              //@synthesize playerViewOrVisibleBodyLabelTopConstraint=_playerViewOrVisibleBodyLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                       //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                             //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isHidingNumberedTitle,nonatomic) BOOL hideNumberedTitle;                         //@synthesize hideNumberedTitle=_hideNumberedTitle - In the implementation block
@property (assign,getter=isAlwaysExpanded,nonatomic) BOOL alwaysExpanded;                                 //@synthesize alwaysExpanded=_alwaysExpanded - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSeparatorLine;                                                //@synthesize shouldHideSeparatorLine=_shouldHideSeparatorLine - In the implementation block
+(id)resultViewWithItem:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(NSString *)title;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPlayerView:(HRVideoPlayerView *)arg1 ;
-(UIButton *)learnMoreButton;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)bottomConstraint;
-(HRVideoPlayerView *)playerView;
-(void)_setUpUI;
-(void)setTitle:(NSString *)arg1 ;
-(void)_setUpConstraints;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(NSString *)numberedTitle;
-(id)initWithTitle:(id)arg1 numberedTitle:(id)arg2 visibleBodyText:(id)arg3 video:(id)arg4 expandedView:(id)arg5 ;
-(void)_updateNumberedTitleViewState;
-(void)_updateExpandedViewState;
-(void)setNumberedTitleLabel:(UILabel *)arg1 ;
-(UILabel *)numberedTitleLabel;
-(id)_numberedTitleFont;
-(void)setVisibleBodyLabel:(UILabel *)arg1 ;
-(NSString *)visibleBody;
-(UILabel *)visibleBodyLabel;
-(id)_visibleBodyFont;
-(UIView *)expandedView;
-(void)setSeparatorLineView:(HKSeparatorLineView *)arg1 ;
-(HKSeparatorLineView *)separatorLineView;
-(void)_setUpNumberedTitleLabelConstraints;
-(void)_setUpPlayerViewTopConstraint;
-(double)_visibleBodyFirstBaselineDistance;
-(void)_setUpVisibleBodyLabelTopConstraint;
-(double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
-(double)_learnMoreButtonLastBaselineToBottom;
-(double)_numberedTitleTopToFirstBaseline;
-(NSLayoutConstraint *)playerViewOrVisibleBodyLabelTopConstraint;
-(void)setPlayerViewOrVisibleBodyLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_playerViewOrVisibleBodyLabelTopConstraint;
-(double)_playerViewOrVisibleBodyLabelTopConstant;
-(BOOL)isHidingNumberedTitle;
-(double)_numberedTitleLastBaseLineToVideoTop;
-(BOOL)shouldHideSeparatorLine;
-(id)_visibleBodyFontTextStyle;
-(void)setHideNumberedTitle:(BOOL)arg1 ;
-(void)setAlwaysExpanded:(BOOL)arg1 ;
-(void)setShouldHideSeparatorLine:(BOOL)arg1 ;
-(BOOL)isAlwaysExpanded;
-(void)setNumberedTitle:(NSString *)arg1 ;
-(void)setVisibleBody:(NSString *)arg1 ;
-(void)setExpandedView:(UIView *)arg1 ;
@end

