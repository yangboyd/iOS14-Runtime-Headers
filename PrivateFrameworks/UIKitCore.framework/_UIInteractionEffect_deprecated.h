/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDynamicReferenceSystem.h>

@class UIDynamicAnimator, _UIDynamicTransformer, _UISpringBehavior, UIPushBehavior, UIDynamicItemBehavior, NSString;

@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem> {

	UIDynamicAnimator* _animator;
	_UIDynamicTransformer* _transformer;
	_UISpringBehavior* _springBehavior;
	UIPushBehavior* _forceBehavior;
	UIDynamicItemBehavior* _itemProperties;
	double _damping;
	double _frequency;
	double _density;
	double _resistance;
	CGAffineTransform _preferredContentTransform;
	double _progress;
	double _forceFactor;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) double forceFactor;                                         //@synthesize forceFactor=_forceFactor - In the implementation block
@property (nonatomic,copy) id updateBlock;                                               //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) CGAffineTransform preferredContentTransform; 
@property (nonatomic,readonly) double progress; 
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(void)setForceFactor:(double)arg1 ;
-(double)forceFactor;
-(void)_prepareAnimatorIfNeeded;
-(void)_updateAnimatorIfNeeded;
-(void)_updateFromTransformer:(id)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)init;
-(void)_stopAnimations;
-(id)updateBlock;
-(double)progress;
-(CGAffineTransform)preferredContentTransform;
@end

