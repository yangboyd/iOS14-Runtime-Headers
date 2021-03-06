/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class WBSHistoryVisit, NSMutableArray, NSURL, NSString, NSDate, NSArray, NSSet, NSData;

@interface WBSHistoryItem : NSObject {

	WBSHistoryVisit* _lastVisit;
	long long _databaseID;
	int _visitCount;
	int _visitCountScore;
	unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::__1::default_delete<WBSHistoryItemVisitCountScoresStorage> >* _visitCountScores;
	NSMutableArray* _visits;
	BOOL _shouldRecomputeDerivedVisitCountScores;
	NSURL* _url;
	NSString* _urlString;

}

@property (nonatomic,readonly) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* dailyVisitCountScoresPtrOnSynchronizationQueue; 
@property (nonatomic,readonly) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue; 
@property (nonatomic,readonly) const int* weeklyVisitCountScoresPtrOnSynchronizationQueue; 
@property (assign,nonatomic) long long databaseID;                                                                //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSString * urlString;                                                              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) NSURL * url;                                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * stringForUserTypedDomainExpansion; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisit; 
@property (nonatomic,readonly) double lastVisitedTimeInterval; 
@property (nonatomic,readonly) NSDate * lastVisitedDate; 
@property (nonatomic,readonly) NSArray * visits;                                                                  //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) int visitCount; 
@property (nonatomic,readonly) int visitCountScore;                                                               //@synthesize visitCountScore=_visitCountScore - In the implementation block
@property (nonatomic,readonly) BOOL shouldRecomputeDerivedVisitCountScores;                                       //@synthesize shouldRecomputeDerivedVisitCountScores=_shouldRecomputeDerivedVisitCountScores - In the implementation block
@property (nonatomic,readonly) BOOL lastVisitWasHTTPNonGet; 
@property (assign,nonatomic) BOOL lastVisitWasFailure; 
@property (nonatomic,readonly) WBSHistoryItem * lastVisitRedirectDestinationItem; 
@property (nonatomic,readonly) WBSHistoryItem * endOfLastVisitRedirectChain; 
@property (nonatomic,readonly) WBSHistoryVisit * lastVisitOnSynchronizationQueue; 
@property (nonatomic,readonly) double lastVisitedTimeIntervalOnSynchronizationQueue; 
@property (nonatomic,readonly) NSSet * visitsPendingWriteToDataStoreOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * dailyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,readonly) NSData * weeklyVisitCountScoresDataOnSynchronizationQueue; 
@property (nonatomic,copy,readonly) NSString * userVisibleHostOrFallbackURLString; 
+(void)initialize;
+(double)timeIntervalForDailyAndWeeklyVisitCountScores;
+(id)synchronizationQueue;
-(id)initWithSQLiteRow:(id)arg1 ;
-(NSString *)urlString;
-(void)setDatabaseID:(long long)arg1 ;
-(void)updateLastVisitIfNil:(id)arg1 ;
-(long long)databaseID;
-(BOOL)lastVisitWasFailure;
-(void)_addVisitToPendingWriteSet:(id)arg1 ;
-(NSArray *)visits;
-(WBSHistoryVisit *)lastVisitOnSynchronizationQueue;
-(void)_addExistingVisit:(id)arg1 ;
-(id)initWithHistoryStreamedItem:(const HistoryStreamedItem*)arg1 ;
-(BOOL)shouldRecomputeDerivedVisitCountScores;
-(void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2 ;
-(void)mergeDataFromItem:(id)arg1 ;
-(NSData *)weeklyVisitCountScoresDataOnSynchronizationQueue;
-(void)setLastVisitWasFailure:(BOOL)arg1 ;
-(void)scoreOfVisit:(id)arg1 wasUpdatedFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(const int*)dailyVisitCountScoresPtrOnSynchronizationQueue;
-(void)dealloc;
-(NSString *)title;
-(int)visitCount;
-(int)visitCountScore;
-(void)wasVisited:(id)arg1 ;
-(BOOL)lastVisitWasHTTPNonGet;
-(void)_wasVisitedOnSynchronizationQueue:(id)arg1 ;
-(NSString *)stringForUserTypedDomainExpansion;
-(void)wasRedirectedFrom:(id)arg1 to:(id)arg2 ;
-(unsigned long long)dailyVisitCountScoresCountOnSynchronizationQueue;
-(NSSet *)visitsPendingWriteToDataStoreOnSynchronizationQueue;
-(void)recomputeDerivedVisitCountScoresWithVisits:(id)arg1 ;
-(double)lastVisitedTimeIntervalOnSynchronizationQueue;
-(void)removeVisitsOnSynchronizationQueue:(id)arg1 candidateLastVisit:(id)arg2 ;
-(id)initWithURLString:(id)arg1 ;
-(WBSHistoryItem *)endOfLastVisitRedirectChain;
-(WBSHistoryVisit *)lastVisit;
-(NSString *)userVisibleHostOrFallbackURLString;
-(const int*)weeklyVisitCountScoresPtrOnSynchronizationQueue;
-(unsigned long long)weeklyVisitCountScoresCountOnSynchronizationQueue;
-(BOOL)_visitsPendingWriteSetContains:(id)arg1 ;
-(void)updateWithStreamedItem:(const HistoryStreamedItem*)arg1 ;
-(void)_addVisit:(id)arg1 ;
-(double)lastVisitedTimeInterval;
-(WBSHistoryItem *)lastVisitRedirectDestinationItem;
-(void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
-(NSDate *)lastVisitedDate;
-(NSURL *)url;
-(id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)addExistingVisit:(id)arg1 ;
-(NSString *)userVisibleURLString;
-(NSData *)dailyVisitCountScoresDataOnSynchronizationQueue;
-(void)_accessVisitCountScoresStorage:(/*^block*/id)arg1 ;
-(void)visitWasModified:(id)arg1 ;
@end

