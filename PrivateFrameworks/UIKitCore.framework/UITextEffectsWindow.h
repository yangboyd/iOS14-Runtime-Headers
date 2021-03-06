/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>
#import <UIKitCore/_UICanvasBasedObject.h>

@class NSDictionary, UIWindowScene, UIEditingOverlayViewController, NSLayoutConstraint, NSString;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UICanvasBasedObject> {

	BOOL _inDealloc;
	unsigned long long _activeEffectsCount;
	BOOL _isFullscreen;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	NSDictionary* _perCanvasOptions;
	UIWindowScene* __intendedWindowScene;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];
	CGSize _hostedSceneSize;
	BOOL _manualHostingOverride;
	UIEditingOverlayViewController* _editingOverlayViewController;
	NSLayoutConstraint* _bottomConstraint;
	UIEdgeInsets _hostedSafeInsets;

}

@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEditingOverlayViewController * editingOverlayViewController;              //@synthesize editingOverlayViewController=_editingOverlayViewController - In the implementation block
@property (readonly) unsigned contextID; 
@property (nonatomic,readonly) BOOL isFullscreen;                                                          //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) double defaultWindowLevel;                                                    //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;                                                   //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                                                       //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedSafeInsets;                                                //@synthesize hostedSafeInsets=_hostedSafeInsets - In the implementation block
+(id)_sharedTextEffectsWindowforWindowScene:(id)arg1 allowHosted:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3 shouldCreateIfNecessary:(BOOL)arg4 ;
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowForCanvas:(id)arg1 ;
+(BOOL)_isSecure;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
+(id)_canvasForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)activeTextEffectsWindowForWindowScene:(id)arg1 ;
+(void)releaseSharedInstances;
+(id)activeTextEffectsWindowForCanvas:(id)arg1 ;
+(id)sharedTextEffectsWindowForWindowScene:(id)arg1 ;
-(void)_setWindowLevel:(double)arg1 ;
-(BOOL)_isFullscreen;
-(void)updateEditingOverlayContainer;
-(UIEditingOverlayViewController *)editingOverlayViewController;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(CGRect)_sceneBounds;
-(BOOL)_shouldInstallRootPresentationController;
-(void)updateSubviewOrdering;
-(void)updateForOrientation:(long long)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(BOOL)_canAffectStatusBarAppearance;
-(CGRect)_sceneReferenceBounds;
-(void)becomeKeyWindow;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)addBottomPadding:(double)arg1 ;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)_matchDeviceOrientation;
-(void)_didSnapshot;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setHostedSceneSize:(CGSize)arg1 ;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(void)setHostedSafeInsets:(UIEdgeInsets)arg1 ;
-(BOOL)_extendsScreenSceneLifetime;
-(void)sendSubviewToBack:(id)arg1 ;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(void)_sortSubviewsOfView:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(CGPoint)hostedWindowOffset;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(long long)interfaceOrientation;
-(void)delayHideWindow;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_commonTextEffectsInit;
-(void)_sceneBoundsDidChange;
-(BOOL)isFullscreen;
-(CGRect)actualSceneFrame;
-(void)setEnableRemoteHosting:(BOOL)arg1 ;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(UIWindowScene *)_intendedCanvas;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(CGRect)_usableSceneBounds;
-(id)_initBasicWithCanvas:(id)arg1 options:(id)arg2 ;
-(CGRect)actualSceneBounds;
-(BOOL)isInternalWindow;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(id)aboveStatusBarWindow;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(UIEdgeInsets)hostedSafeInsets;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sortSubviews;
-(void)resetTransform;
-(BOOL)_shouldResizeWithScene;
-(void)_willSnapshot;
-(void)_commonInitWithOptions:(id)arg1 ;
-(BOOL)enableRemoteHosting;
-(id)_inputWindowController;
-(void)_restoreWindowLevel;
-(long long)actualSceneOrientation;
-(void)_didRemoveSubview:(id)arg1 ;
-(unsigned)contextID;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(double)slideOverWindowVerticalOffset;
-(NSDictionary *)_options;
-(CGRect)hostedFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)hostedSceneSize;
-(double)defaultWindowLevel;
-(BOOL)_isTextEffectsWindow;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(void)_updateTransformLayer;
-(CGRect)actualSceneFrameForOrientation:(long long)arg1 ;
-(void)didAddSubview:(id)arg1 ;
@end

