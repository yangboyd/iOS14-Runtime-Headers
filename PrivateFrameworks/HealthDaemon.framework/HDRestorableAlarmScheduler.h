/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMapTable, HDXPCAlarm, NSDate, NSString;

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	int _significantTimeChangeNotificationToken;
	NSMapTable* _clients;
	BOOL _hasInitializedSystemScheduler;
	BOOL _maintenanceOperationQueued;
	BOOL _needsMaintenanceNotifyAndSchedule;
	BOOL _needsLockStateUpdates;
	BOOL _isDeviceOnWrist;
	BOOL _isRegisteredForOnWristUpdates;
	BOOL _isRegisteredForLockStateUpdates;
	HDXPCAlarm* _systemScheduler;
	NSDate* __unitTest_currentDate;

}

@property (nonatomic,copy) NSDate * _unitTest_currentDate;                        //@synthesize _unitTest_currentDate=__unitTest_currentDate - In the implementation block
@property (nonatomic,readonly) BOOL isRegisteredForOnWristUpdates;                //@synthesize isRegisteredForOnWristUpdates=_isRegisteredForOnWristUpdates - In the implementation block
@property (nonatomic,readonly) BOOL isRegisteredForLockStateUpdates;              //@synthesize isRegisteredForLockStateUpdates=_isRegisteredForLockStateUpdates - In the implementation block
@property (nonatomic,readonly) HDXPCAlarm * systemScheduler;                      //@synthesize systemScheduler=_systemScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)_currentDate;
-(void)daemonReady:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(void)_queue_enqueueMaintenanceNotifyAndScheduleWithReason:(id)arg1 ;
-(void)_queue_processDueEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_queue_registerForWristStateUpdates:(BOOL)arg1 ;
-(id)diagnosticDescription;
-(void)_queue_registerForLockStateUpdates:(BOOL)arg1 ;
-(void)_queue_fetchCurrentWristStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)removeEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)isRegisteredForOnWristUpdates;
-(void)_queue_updateProtectedDataObserverStateIfRequired;
-(BOOL)removeAllEventsWithClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_queue_beginReceivingSystemEventsIfNecessary;
-(BOOL)replaceAllScheduledEventsWithClientIdentifier:(id)arg1 newEvents:(id)arg2 error:(id*)arg3 ;
-(void)set_unitTest_currentDate:(NSDate *)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(void)_queue_runMaintenanceNotifyAndScheduleWithReason:(id)arg1 ;
-(void)checkForDueEventsImmediatelyWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)_unitTest_currentDate;
-(BOOL)_queue_notifyClientsOfDueEventsAndScheduleNextFireDateWithError:(id*)arg1 ;
-(HDXPCAlarm *)systemScheduler;
-(BOOL)scheduleEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performWriteTransactionAndFireEventsWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(void)_queue_setNeedsMaintenanceNotifyAndSchedule:(BOOL)arg1 ;
-(void)_queue_significantTimeChangeDidOccur;
-(id)scheduledEventsForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_stopObservingSignificantTimeChangeNotification;
-(BOOL)isRegisteredForLockStateUpdates;
-(NSString *)description;
-(BOOL)_enumerateAllAlarmEventsWithError:(id*)arg1 enumerationHandler:(/*^block*/id)arg2 ;
-(void)_startObservingSignificantTimeChangeNotification;
@end

