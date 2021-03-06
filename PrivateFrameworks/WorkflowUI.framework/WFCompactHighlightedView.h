/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSArray, UIView, NSString;

@interface WFCompactHighlightedView : UIView <MTVisualStylingRequiring> {

	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _contentDimmingView;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentDimmingView;                          //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)contentView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentDimmingView:(UIView *)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIView *)contentDimmingView;
-(NSArray *)requiredVisualStyleCategories;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

