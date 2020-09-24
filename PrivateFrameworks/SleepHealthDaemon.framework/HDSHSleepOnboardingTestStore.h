/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthDaemon.framework/SleepHealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSPSleepOnboardingStore.h>

@protocol HKSPSleepStoreObserver;
@class HKSPMutableSleepEventRecord, HKSPMutableSleepSettings, NSDate;

@interface HDSHSleepOnboardingTestStore : NSObject <HKSPSleepOnboardingStore> {

	HKSPMutableSleepEventRecord* _sleepEventRecord;
	HKSPMutableSleepSettings* _sleepSettings;
	id<HKSPSleepStoreObserver> _observer;
	NSDate* _currentDate;

}

@property (nonatomic,retain) NSDate * currentDate;                          //@synthesize currentDate=_currentDate - In the implementation block
@property (assign,nonatomic) BOOL springBoardGreetingDisabled; 
-(BOOL)springBoardGreetingDisabled;
-(void)setSpringBoardGreetingDisabled:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSDate *)currentDate;
-(void)removeObserver:(id)arg1 ;
-(void)currentSleepEventRecordWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)saveCurrentSleepEventRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)currentSleepEventRecordWithError:(id*)arg1 ;
-(void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)currentSleepSettingsWithError:(id*)arg1 ;
-(void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end
