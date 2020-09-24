/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying> {

	long long _appSessionDuration;
	int _appsAutoSubscribeFeedCount;
	NSMutableArray* _autoSubscribedFeedIds;
	int _channelSubscriptionCount;
	NSMutableArray* _groupableFeedIds;
	int _internalAutoSubscribeFeedCount;
	NSMutableArray* _lastVisibleViews;
	NSMutableArray* _notificationChannelIds;
	int _notificationEnabledChannelsCount;
	int _notitificationsEnabledChannelsCount;
	NSMutableArray* _paidSubscriptionChannelIds;
	int _portraitAutoSubscribeFeedCount;
	int _safariAutoSubscribeFeedCount;
	int _sessionEndReason;
	NSMutableArray* _subscribedFeedIds;
	int _topicSubscriptionCount;
	BOOL _breakingNewsAvailableDuringSession;
	BOOL _breakingNewsDismissedDuringSession;
	BOOL _syncedOtherUserIdDuringSession;
	SCD_Struct_NT34 _has;

}

@property (assign,nonatomic) BOOL hasSessionEndReason; 
@property (assign,nonatomic) int sessionEndReason;                                     //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastVisibleViews;                        //@synthesize lastVisibleViews=_lastVisibleViews - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSubscriptionCount; 
@property (assign,nonatomic) int channelSubscriptionCount;                             //@synthesize channelSubscriptionCount=_channelSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopicSubscriptionCount; 
@property (assign,nonatomic) int topicSubscriptionCount;                               //@synthesize topicSubscriptionCount=_topicSubscriptionCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppSessionDuration; 
@property (assign,nonatomic) long long appSessionDuration;                             //@synthesize appSessionDuration=_appSessionDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * paidSubscriptionChannelIds;              //@synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotitificationsEnabledChannelsCount; 
@property (assign,nonatomic) int notitificationsEnabledChannelsCount;                  //@synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationChannelIds;                  //@synthesize notificationChannelIds=_notificationChannelIds - In the implementation block
@property (assign,nonatomic) BOOL hasNotificationEnabledChannelsCount; 
@property (assign,nonatomic) int notificationEnabledChannelsCount;                     //@synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                       //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsAvailableDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsAvailableDuringSession;                  //@synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsDismissedDuringSession; 
@property (assign,nonatomic) BOOL breakingNewsDismissedDuringSession;                  //@synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoSubscribedFeedIds;                   //@synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupableFeedIds;                        //@synthesize groupableFeedIds=_groupableFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasPortraitAutoSubscribeFeedCount; 
@property (assign,nonatomic) int portraitAutoSubscribeFeedCount;                       //@synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSafariAutoSubscribeFeedCount; 
@property (assign,nonatomic) int safariAutoSubscribeFeedCount;                         //@synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppsAutoSubscribeFeedCount; 
@property (assign,nonatomic) int appsAutoSubscribeFeedCount;                           //@synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasInternalAutoSubscribeFeedCount; 
@property (assign,nonatomic) int internalAutoSubscribeFeedCount;                       //@synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount - In the implementation block
@property (assign,nonatomic) BOOL hasSyncedOtherUserIdDuringSession; 
@property (assign,nonatomic) BOOL syncedOtherUserIdDuringSession;                      //@synthesize syncedOtherUserIdDuringSession=_syncedOtherUserIdDuringSession - In the implementation block
+(Class)subscribedFeedIdsType;
+(Class)groupableFeedIdsType;
+(Class)paidSubscriptionChannelIdsType;
+(Class)lastVisibleViewsType;
+(Class)autoSubscribedFeedIdsType;
+(Class)notificationChannelIdsType;
-(void)setNotificationEnabledChannelsCount:(int)arg1 ;
-(BOOL)hasSafariAutoSubscribeFeedCount;
-(BOOL)hasChannelSubscriptionCount;
-(int)internalAutoSubscribeFeedCount;
-(void)addGroupableFeedIds:(id)arg1 ;
-(void)setAppsAutoSubscribeFeedCount:(int)arg1 ;
-(void)addPaidSubscriptionChannelIds:(id)arg1 ;
-(void)clearNotificationChannelIds;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(void)setHasInternalAutoSubscribeFeedCount:(BOOL)arg1 ;
-(id)groupableFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setSafariAutoSubscribeFeedCount:(int)arg1 ;
-(void)addAutoSubscribedFeedIds:(id)arg1 ;
-(unsigned long long)subscribedFeedIdsCount;
-(void)clearGroupableFeedIds;
-(int)portraitAutoSubscribeFeedCount;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasNotificationEnabledChannelsCount:(BOOL)arg1 ;
-(BOOL)hasAppsAutoSubscribeFeedCount;
-(NSMutableArray *)autoSubscribedFeedIds;
-(unsigned long long)notificationChannelIdsCount;
-(void)setHasChannelSubscriptionCount:(BOOL)arg1 ;
-(void)addNotificationChannelIds:(id)arg1 ;
-(void)setPaidSubscriptionChannelIds:(NSMutableArray *)arg1 ;
-(id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subscribedFeedIds;
-(unsigned long long)groupableFeedIdsCount;
-(void)setAutoSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(void)setNotificationChannelIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)notificationChannelIds;
-(id)notificationChannelIdsAtIndex:(unsigned long long)arg1 ;
-(int)channelSubscriptionCount;
-(void)setNotitificationsEnabledChannelsCount:(int)arg1 ;
-(void)clearSubscribedFeedIds;
-(BOOL)hasPortraitAutoSubscribeFeedCount;
-(unsigned long long)autoSubscribedFeedIdsCount;
-(BOOL)syncedOtherUserIdDuringSession;
-(void)setHasAppsAutoSubscribeFeedCount:(BOOL)arg1 ;
-(int)notificationEnabledChannelsCount;
-(int)topicSubscriptionCount;
-(void)setTopicSubscriptionCount:(int)arg1 ;
-(unsigned long long)paidSubscriptionChannelIdsCount;
-(BOOL)hasNotificationEnabledChannelsCount;
-(id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasPortraitAutoSubscribeFeedCount:(BOOL)arg1 ;
-(void)clearAutoSubscribedFeedIds;
-(void)clearPaidSubscriptionChannelIds;
-(void)setChannelSubscriptionCount:(int)arg1 ;
-(void)setGroupableFeedIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)paidSubscriptionChannelIds;
-(int)notitificationsEnabledChannelsCount;
-(void)setInternalAutoSubscribeFeedCount:(int)arg1 ;
-(void)setPortraitAutoSubscribeFeedCount:(int)arg1 ;
-(BOOL)hasNotitificationsEnabledChannelsCount;
-(int)safariAutoSubscribeFeedCount;
-(void)setBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(NSMutableArray *)groupableFeedIds;
-(void)setHasNotitificationsEnabledChannelsCount:(BOOL)arg1 ;
-(void)setHasTopicSubscriptionCount:(BOOL)arg1 ;
-(BOOL)hasTopicSubscriptionCount;
-(BOOL)hasInternalAutoSubscribeFeedCount;
-(int)appsAutoSubscribeFeedCount;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(void)setHasSafariAutoSubscribeFeedCount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)appSessionDuration;
-(void)clearLastVisibleViews;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBreakingNewsDismissedDuringSession;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAppSessionDuration:(long long)arg1 ;
-(int)sessionEndReason;
-(id)lastVisibleViewsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastVisibleViewsCount;
-(void)setBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(void)setHasBreakingNewsDismissedDuringSession:(BOOL)arg1 ;
-(BOOL)hasAppSessionDuration;
-(BOOL)hasSyncedOtherUserIdDuringSession;
-(void)mergeFrom:(id)arg1 ;
-(void)setLastVisibleViews:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addLastVisibleViews:(id)arg1 ;
-(BOOL)breakingNewsDismissedDuringSession;
-(BOOL)hasBreakingNewsAvailableDuringSession;
-(BOOL)breakingNewsAvailableDuringSession;
-(void)setSessionEndReason:(int)arg1 ;
-(void)setHasAppSessionDuration:(BOOL)arg1 ;
-(BOOL)hasSessionEndReason;
-(void)setHasSessionEndReason:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(NSMutableArray *)lastVisibleViews;
-(void)setHasBreakingNewsAvailableDuringSession:(BOOL)arg1 ;
-(id)description;
-(void)setSyncedOtherUserIdDuringSession:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
