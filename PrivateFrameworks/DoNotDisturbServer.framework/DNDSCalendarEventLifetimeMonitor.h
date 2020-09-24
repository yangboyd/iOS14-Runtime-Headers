/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class EKEventStore, PCPersistentTimer;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor {

	EKEventStore* _eventStore;
	PCPersistentTimer* _lifetimeTimer;

}
+(Class)lifetimeClass;
-(void)_timerFired:(id)arg1 ;
-(id)init;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(void)_calendarEventStoreChangedWithNotification:(id)arg1 ;
-(id)activeDateIntervalForCalendarEventLifetime:(id)arg1 assertionStartDate:(id)arg2 ;
@end
