/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {

	UIKBBackgroundView* _backgroundView;
	UIKBTree* _keyplane;

}
+(id)activeInstance;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(BOOL)keyboardInputMode:(id)arg1 supportsResizingOffsetForScreenTraits:(id)arg2 ;
-(BOOL)visible;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(id)currentKeyplane;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(CGSize)splitLeftSize;
-(void)layoutSubviews;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(BOOL)usesAutoShift;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)shouldFadeToLayout;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg1 ;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(BOOL)shouldFadeFromLayout;
@end

