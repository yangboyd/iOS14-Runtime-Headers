/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService {

	BOOL _deliverData;
	long long _preferredSensorLocation;

}

@property (assign,nonatomic) long long preferredSensorLocation;              //@synthesize preferredSensorLocation=_preferredSensorLocation - In the implementation block
+(id)serviceUUID;
+(long long)serviceType;
-(id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(BOOL)supportsOperation:(id)arg1 ;
-(void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPreferredSensorLocation:(long long)arg1 ;
-(void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deliverData;
-(void)handleHeartRate:(id)arg1 ;
-(void)handleBodyLocation:(id)arg1 ;
-(void)setDeliverData:(BOOL)arg1 ;
-(long long)preferredSensorLocation;
@end

