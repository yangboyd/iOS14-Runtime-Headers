/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry {

	UIColor* _backgroundColor;

}

@property (retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
@end
