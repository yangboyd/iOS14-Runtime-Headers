/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface SSRankingFeedbackHandler : NSObject {

	NSMutableDictionary* _mapProtectionClassToBundleIdToItem;
	NSMutableArray* _sectionCSItems;
	NSObject*<OS_dispatch_queue> _countQueue;

}

@property (retain) NSMutableDictionary * mapProtectionClassToBundleIdToItem;              //@synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem - In the implementation block
@property (retain) NSMutableArray * sectionCSItems;                                       //@synthesize sectionCSItems=_sectionCSItems - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> countQueue;                               //@synthesize countQueue=_countQueue - In the implementation block
+(id)sharedInstance;
+(id)copyRenderEngagementCounts;
-(void)testCountsUptoQuarter;
-(void)fetchBundleRenderAndEngagementInfo:(id)arg1 ;
-(void)testForDummyEntry;
-(id)getSyntheticTestRankingItem;
-(NSMutableArray *)sectionCSItems;
-(void)setMapProtectionClassToBundleIdToItem:(NSMutableDictionary *)arg1 ;
-(void)resetResultWithRankingItems:(id)arg1 ;
-(void)testCountsUptoYear;
-(void)testCountsUptoMonth;
-(void)testCountsMovingDaysInPast;
-(void)testCountsForRegularEngagement;
-(void)testCountsUptoHalfYear;
-(void)testCountsMovingCoupleOfYearsInPast;
-(id)init;
-(NSMutableDictionary *)mapProtectionClassToBundleIdToItem;
-(void)setCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchBundleRenderAndEngagementInfo;
-(void)didEngageResultWithRankingItem:(id)arg1 startDate:(id)arg2 protectionClass:(id)arg3 ;
-(void)setSectionCSItems:(NSMutableArray *)arg1 ;
-(void)testCountsAfterCoupleYears;
-(id)getSyntheticTestRankingItemsForStressTest;
-(void)testCountsUptoOneDay;
-(id)fetchResults;
-(NSObject*<OS_dispatch_queue>)countQueue;
-(void)resultsWithRankingItemsDidBecomeVisible:(id)arg1 date:(id)arg2 protectionClassMapping:(id)arg3 ;
-(void)testCountsUptoWeek;
-(void)stressTestCounts;
-(void)_indexItemWithIdentifier:(id)arg1 bundleID:(id)arg2 startDate:(id)arg3 pc:(id)arg4 ;
-(void)testCountsAfterYear;
-(void)writeRenderAndEngagementInfo;
-(void)testForDurationWithIntervals:(int*)arg1 maxIndex:(int)arg2 duration:(long long)arg3 counts:(id)arg4 ;
-(void)testCountsMovingYearInPast;
@end
