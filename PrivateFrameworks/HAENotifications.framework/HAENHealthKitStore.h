/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, HKHealthStore;

@interface HAENHealthKitStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	HKHealthStore* _healthStore;

}
+(id)sharedInstance;
-(id)init;
-(id)createHKCategorySampleForEvent:(id)arg1 ;
-(id)saveNotificationEventToHealthKit:(id)arg1 ;
-(id)saveNotificationEventToHealthKit:(id)arg1 withDelegate:(id)arg2 ;
@end

