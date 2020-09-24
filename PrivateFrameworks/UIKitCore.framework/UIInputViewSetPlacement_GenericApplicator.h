/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (retain,readonly) UIView * twoFingerDraggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) CGRect popoverFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(void)invalidate;
-(UIEdgeInsets)contentInsets;
-(BOOL)allConstraintsActive;
-(void)prepare;
-(CGPoint)origin;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(void)checkVerticalConstraint;
-(CGRect)popoverFrame;
-(BOOL)isEqual:(id)arg1 ;
-(UIView *)draggableView;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(NSArray *)constraints;
-(CGRect)targetRect;
-(void)applyChanges:(id)arg1 ;
-(UIView *)twoFingerDraggableView;
-(NSString *)description;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
@end
