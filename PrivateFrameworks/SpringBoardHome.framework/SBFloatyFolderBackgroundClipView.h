/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class SBFolderBackgroundView;

@interface SBFloatyFolderBackgroundClipView : UIView {

	SBFolderBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) SBFolderBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundEffect; 
@property (assign,nonatomic) double cornerRadius; 
-(double)cornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundEffect:(unsigned long long)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(unsigned long long)backgroundEffect;
-(SBFolderBackgroundView *)backgroundView;
@end

