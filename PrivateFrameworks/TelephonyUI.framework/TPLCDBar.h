/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView {

	UIImageView* _shadowView;

}

@property (readonly) UIImageView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
+(double)defaultHeight;
+(id)backgroundImage;
+(double)defaultHeightForOrientation:(long long)arg1 ;
-(UIImageView *)shadowView;
-(id)initWithDefaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end
