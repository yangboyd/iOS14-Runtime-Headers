/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSPSleepClient.h>

@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient> {

	HKSPSleepStore* _sleepStore;

}

@property (assign,nonatomic,__weak) HKSPSleepStore * sleepStore;              //@synthesize sleepStore=_sleepStore - In the implementation block
-(void)getClientIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)setSleepStore:(HKSPSleepStore *)arg1 ;
-(void)sleepModeChanged:(long long)arg1 syncAnchor:(id)arg2 ;
-(void)sleepSettingsChanged:(id)arg1 syncAnchor:(id)arg2 ;
-(void)sleepEventOccurred:(id)arg1 syncAnchor:(id)arg2 ;
-(void)sleepEventRecordChanged:(id)arg1 syncAnchor:(id)arg2 ;
-(void)sleepScheduleStateChanged:(unsigned long long)arg1 syncAnchor:(id)arg2 ;
-(HKSPSleepStore *)sleepStore;
-(void)sleepScheduleChanged:(id)arg1 syncAnchor:(id)arg2 ;
@end
