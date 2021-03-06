/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PKPaletteTextOptionsView : UIView {

	UIButton* _textButton;
	UIButton* _signatureButton;

}

@property (nonatomic,readonly) UIButton * textButton;                   //@synthesize textButton=_textButton - In the implementation block
@property (nonatomic,readonly) UIButton * signatureButton;              //@synthesize signatureButton=_signatureButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)textButton;
-(UIButton *)signatureButton;
@end

