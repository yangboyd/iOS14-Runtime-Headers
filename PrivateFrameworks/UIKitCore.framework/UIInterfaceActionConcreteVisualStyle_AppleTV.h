/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle_AppleTV : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)contentMargin;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(double)actionSectionSpacing;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(CGSize)minimumActionContentSize;
-(id)defaultScreen;
-(double)horizontalImageContentSpacing;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(double)contentCornerRadius;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(double)verticalImageContentSpacing;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(id)actionPropertiesAffectingLabelStyling;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(BOOL)selectByPressGestureRequired;
@end

