/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, SearchUIHorizontallyScrollingContainerButtonController;

@interface SearchUIContainerButton : UIButton {

	UIView* _contentView;
	SearchUIHorizontallyScrollingContainerButtonController* _buttonController;

}

@property (nonatomic,retain) UIView * contentView;                                                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) SearchUIHorizontallyScrollingContainerButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
-(UIView *)contentView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(id)initWithContainerButtonController:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(SearchUIHorizontallyScrollingContainerButtonController *)buttonController;
-(void)setButtonController:(SearchUIHorizontallyScrollingContainerButtonController *)arg1 ;
@end

