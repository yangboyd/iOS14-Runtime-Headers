/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying.h>

@class UIVisualEffectView, NSString;

@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {

	UIVisualEffectView* _effectView;
	long long _style;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(long long)style;
-(void)setCornerRadius:(double)arg1 ;
-(id)init;
-(void)setRoundedCornerPosition:(unsigned long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_configureWithStyle:(long long)arg1 ;
@end

