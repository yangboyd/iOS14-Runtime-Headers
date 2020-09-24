/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator {

	long long _timerDuration;

}

@property (assign,nonatomic) long long timerDuration;              //@synthesize timerDuration=_timerDuration - In the implementation block
-(long long)timerDuration;
-(void)setTimerDuration:(long long)arg1 ;
-(id)valueText;
-(id)imageNameForCurrentState;
-(BOOL)canShowValue;
@end
