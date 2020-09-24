/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@class _UIButtonBarButtonVisualProvider, NSLayoutConstraint, _UIBarButtonItemData, NSString;

@interface _UIButtonBarButton : UIControl <UIPointerInteractionDelegate, UISpringLoadedInteractionSupporting> {

	_UIButtonBarButtonVisualProvider* _visualProvider;
	NSLayoutConstraint* _widthMinimizingConstraint;
	NSLayoutConstraint* _heightMinimizingConstraint;
	BOOL _backButton;
	_UIBarButtonItemData* _appearanceData;

}

@property (nonatomic,copy,readonly) _UIButtonBarButtonVisualProvider * visualProvider;              //@synthesize visualProvider=_visualProvider - In the implementation block
@property (getter=isBackButton,nonatomic,readonly) BOOL backButton;                                 //@synthesize backButton=_backButton - In the implementation block
@property (assign,nonatomic) BOOL backButtonMaskEnabled; 
@property (nonatomic,retain) _UIBarButtonItemData * appearanceData;                                 //@synthesize appearanceData=_appearanceData - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * widthMinimizingConstraint; 
@property (nonatomic,readonly) NSLayoutConstraint * heightMinimizingConstraint; 
@property (nonatomic,readonly) CGRect _buttonBarHitRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
-(unsigned long long)_controlEventsForActionTriggered;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_configureFromBarItem:(id)arg1 appearanceDelegate:(id)arg2 isBackButton:(BOOL)arg3 ;
-(void)configureBackButtonFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(UIEdgeInsets)alignmentRectInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)configureFromBarItem:(id)arg1 withAppearanceDelegate:(id)arg2 ;
-(void)dealloc;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)layoutSubviews;
-(CGPoint)menuAttachmentPointForConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(id)init;
-(BOOL)isBackButton;
-(BOOL)_accessibilityShouldActivateOnHUDLift;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)_accessibilitySettingsChanged:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isSpringLoaded;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_setTouchHasHighlighted:(BOOL)arg1 ;
-(NSLayoutConstraint *)widthMinimizingConstraint;
-(NSLayoutConstraint *)heightMinimizingConstraint;
-(_UIBarButtonItemData *)appearanceData;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)backButtonMaskEnabled;
-(void)setBackButtonMaskEnabled:(BOOL)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(CGRect)_buttonBarHitRect;
-(id)initWithVisualProvider:(id)arg1 ;
-(void)setAppearanceData:(_UIBarButtonItemData *)arg1 ;
-(void)setNeedsAppearanceUpdate;
-(BOOL)updatePresentedMenuFrom:(id)arg1 ;
@end
