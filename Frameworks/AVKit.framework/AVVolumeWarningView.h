/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView {

	BOOL _stopping;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (assign,getter=isStopping,nonatomic) BOOL stopping;                //@synthesize stopping=_stopping - In the implementation block
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isStopping;
-(void)setStopping:(BOOL)arg1 ;
-(void)stopAnimatingAndRemoveFromSuperview;
-(void)continueAnimating;
-(void)startAnimating;
@end

