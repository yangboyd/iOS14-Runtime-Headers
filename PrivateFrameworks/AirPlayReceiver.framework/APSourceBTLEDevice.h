/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APSourceBTLEDevice : NSObject {

	int _lastRSSI;
	unsigned long long _lastUpdateTicks;

}

@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateTicks;              //@synthesize lastUpdateTicks=_lastUpdateTicks - In the implementation block
-(void)setLastRSSI:(int)arg1 ;
-(int)lastRSSI;
-(unsigned long long)lastUpdateTicks;
-(void)setLastUpdateTicks:(unsigned long long)arg1 ;
@end

