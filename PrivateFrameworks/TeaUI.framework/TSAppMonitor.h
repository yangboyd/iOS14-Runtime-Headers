/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSAppMonitorType.h>

@interface TSAppMonitor : NSObject <TSAppMonitorType> {

	 isActive;
	 onWindowDidBecomeBackgroundBlock;
	 onWindowWillBecomeForegroundBlock;

}

@property (assign,nonatomic) BOOL isActive; 
-(BOOL)isActive;
-(id)onWindowWillBecomeForegroundWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)triggerWithEvent:(long long)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(id)onWindowDidBecomeBackgroundWithBlock:(/*^block*/id)arg1 ;
@end
