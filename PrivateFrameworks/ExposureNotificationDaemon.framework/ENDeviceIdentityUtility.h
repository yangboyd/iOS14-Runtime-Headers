/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CUSystemMonitor;

@interface ENDeviceIdentityUtility : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CUSystemMonitor* _systemMonitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) CUSystemMonitor * systemMonitor;                       //@synthesize systemMonitor=_systemMonitor - In the implementation block
-(CUSystemMonitor *)systemMonitor;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setSystemMonitor:(CUSystemMonitor *)arg1 ;
-(id)initWithSystemMonitor:(id)arg1 ;
-(void)signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
