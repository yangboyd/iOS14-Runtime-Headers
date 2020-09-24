/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarImageView, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {

	_UIStatusBarImageView* _bodyView;
	_UIStatusBarImageView* _shackleView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) _UIStatusBarImageView * bodyView;                                       //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * shackleView;                                    //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(CGSize)intrinsicContentSize;
-(_UIStatusBarImageView *)bodyView;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UIStatusBarImageView *)shackleView;
-(void)setBodyView:(_UIStatusBarImageView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setShackleView:(_UIStatusBarImageView *)arg1 ;
-(void)animateUnlockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)jiggleWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(void)resetLock;
@end
