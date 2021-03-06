/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIStackView.h>

@protocol _TVMenuBarStackViewDelegate;
@class NSArray;

@interface _TVMenuBarStackView : UIStackView {

	id<_TVMenuBarStackViewDelegate> _delegate;
	unsigned long long _selectedIndex;
	NSArray* _tabBarItems;

}

@property (assign,nonatomic,__weak) id<_TVMenuBarStackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                             //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                          //@synthesize tabBarItems=_tabBarItems - In the implementation block
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_TVMenuBarStackViewDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)selectedIndex;
-(id<_TVMenuBarStackViewDelegate>)delegate;
-(void)_configureView;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
-(void)_buttonEventTouchUpInside:(id)arg1 ;
@end

