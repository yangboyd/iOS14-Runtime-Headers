/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKUIAccountRefresherDelegate;
@class CalendarModel, NSDate, NSArray;

@interface EKUIAccountRefresher : NSObject {

	CalendarModel* _model;
	BOOL _currentlySyncing;
	NSDate* _refreshStartDate;
	NSArray* _refreshingSources;
	NSArray* _refreshingCalendars;
	BOOL _refreshing;
	id<EKUIAccountRefresherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKUIAccountRefresherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL refreshing;                                             //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,readonly) BOOL allAccountsOffline; 
-(void)refresh;
-(void)_eventStoreChanged:(id)arg1 ;
-(BOOL)refreshing;
-(void)_syncDidStart;
-(void)setDelegate:(id<EKUIAccountRefresherDelegate>)arg1 ;
-(void)_syncDidEnd;
-(BOOL)_areAnySourcesCurrentlySyncing;
-(BOOL)_areAnyCalendarsCurrentlySyncing;
-(void)_cancelSyncStartTimeout;
-(BOOL)_allSourcesRefreshed;
-(BOOL)_allCalendarsRefreshed;
-(void)_syncCompleted;
-(void)_beginSyncStartTimeout;
-(BOOL)sourceFinishedRefreshing:(id)arg1 ;
-(BOOL)calendarFinishedRefreshing:(id)arg1 ;
-(void)_beginMaximumTimeElapsedTimeout;
-(void)_cancelMaximumTimeElapsedTimeout;
-(void)_syncStartTimeoutExpired;
-(void)_refreshControlMaximumVisibleTimeElapsed;
-(BOOL)allAccountsOffline;
-(id)initWithCalendarModel:(id)arg1 ;
-(id<EKUIAccountRefresherDelegate>)delegate;
@end

