/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class BSZeroingWeakReference, NSObject, NSHashTable;

@interface BSPowerMonitor : NSObject {

	IONotificationPortRef _notificationPort;
	unsigned _notifier;
	BSZeroingWeakReference* _weakSelfWrapper;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _lock_observers;
	unsigned _rootDomainConnect;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
