/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol _TVListViewCellDelegate;
@class UIColor, UIVisualEffectView, _UIFloatingContentView;

@interface _TVListViewCell : UICollectionViewCell {

	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIVisualEffectView* _backgroundVisualEffectView;
	BOOL _visualEffectViewBackgroundEnabled;
	BOOL _disabled;
	BOOL _shouldAppearSelected;
	_UIFloatingContentView* _floatingView;
	id<_TVListViewCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL visualEffectViewBackgroundEnabled;                   //@synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                    //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic,__weak) id<_TVListViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                          //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)isDisabled;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_descendantsShouldHighlight;
-(void)setDelegate:(id<_TVListViewCellDelegate>)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(id<_TVListViewCellDelegate>)delegate;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)shouldAppearSelected;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(unsigned long long)_floatingViewControlState;
-(void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1 ;
-(void)_updateSelectedBackgroundColor;
-(void)setVisualEffectViewBackgroundEnabled:(BOOL)arg1 ;
-(BOOL)visualEffectViewBackgroundEnabled;
@end
