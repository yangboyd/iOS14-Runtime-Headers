/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REDateRelevanceProviderManagerProperties.h>

@class NSDate, NSDateInterval;

@interface REDateRelevanceProviderManager : RERelevanceProviderManager <REDateRelevanceProviderManagerProperties> {

	NSDate* _lastDateUpdate;
	NSDateInterval* _todayInterval;

}

@property (nonatomic,readonly) NSDate * lastDateUpdate; 
@property (nonatomic,readonly) NSDate * todayStart; 
@property (nonatomic,readonly) NSDate * todayEnd; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)_supportsHistoricProviders;
+(id)_dependencyClasses;
-(void)pause;
-(void)_handleSignificantTimeChange;
-(void)resume;
-(id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3 ;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)_addedProvider:(id)arg1 ;
-(BOOL)_isHistoricProvider:(id)arg1 ;
-(id)_valueForHistoricProvider:(id)arg1 feature:(id)arg2 ;
-(void)_scheduleUpdatesForDateProvider:(id)arg1 ;
-(void)_scheduleUpdateForDate:(id)arg1 ;
-(NSDate *)lastDateUpdate;
-(NSDate *)todayStart;
-(NSDate *)todayEnd;
@end

