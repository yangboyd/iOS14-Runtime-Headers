/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTTimer;

@interface MTTimerMigrator : NSObject {

	MTTimer* _timer;

}

@property (nonatomic,retain) MTTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(void)setTimer:(MTTimer *)arg1 ;
-(MTTimer *)timer;
-(void)removeFromOldStorage;
-(void)migrateFromOldStorage;
@end
