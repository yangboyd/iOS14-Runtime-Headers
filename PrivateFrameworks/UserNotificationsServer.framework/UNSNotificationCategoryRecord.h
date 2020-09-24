/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface UNSNotificationCategoryRecord : NSObject {

	BOOL _hasCustomDismissAction;
	BOOL _hasCustomSilenceAction;
	BOOL _shouldAllowInCarPlay;
	BOOL _shouldAllowSpoken;
	BOOL _privacyOptionShowTitle;
	BOOL _privacyOptionShowSubtitle;
	BOOL _preventAutomaticRemovalFromRecent;
	BOOL _revealAdditionalContentWhenPresented;
	BOOL _preventAutomaticLock;
	BOOL _preventDismissWhenClosed;
	BOOL _presentFullScreenAlertOverList;
	BOOL _shouldAllowActionsInCarPlay;
	BOOL _shouldAllowPersistentBannersInCarPlay;
	BOOL _playMediaWhenRaised;
	BOOL _preventClearFromList;
	BOOL _alwaysDisplayNotificationsIndicator;
	BOOL _suppressDelayForForwardedNotifications;
	BOOL _suppressDismissActionInCarPlay;
	NSArray* _actions;
	NSString* _identifier;
	NSArray* _intentIdentifiers;
	NSArray* _minimalActions;
	NSString* _privateBody;
	NSString* _summaryFormat;
	NSString* _backgroundStyle;
	NSString* _listPriority;

}

@property (nonatomic,copy) NSArray * actions;                                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL hasCustomDismissAction;                              //@synthesize hasCustomDismissAction=_hasCustomDismissAction - In the implementation block
@property (assign,nonatomic) BOOL hasCustomSilenceAction;                              //@synthesize hasCustomSilenceAction=_hasCustomSilenceAction - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * intentIdentifiers;                                //@synthesize intentIdentifiers=_intentIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * minimalActions;                                   //@synthesize minimalActions=_minimalActions - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowInCarPlay;                                //@synthesize shouldAllowInCarPlay=_shouldAllowInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowSpoken;                                   //@synthesize shouldAllowSpoken=_shouldAllowSpoken - In the implementation block
@property (assign,nonatomic) BOOL privacyOptionShowTitle;                              //@synthesize privacyOptionShowTitle=_privacyOptionShowTitle - In the implementation block
@property (assign,nonatomic) BOOL privacyOptionShowSubtitle;                           //@synthesize privacyOptionShowSubtitle=_privacyOptionShowSubtitle - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticRemovalFromRecent;                   //@synthesize preventAutomaticRemovalFromRecent=_preventAutomaticRemovalFromRecent - In the implementation block
@property (assign,nonatomic) BOOL revealAdditionalContentWhenPresented;                //@synthesize revealAdditionalContentWhenPresented=_revealAdditionalContentWhenPresented - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticLock;                                //@synthesize preventAutomaticLock=_preventAutomaticLock - In the implementation block
@property (assign,nonatomic) BOOL preventDismissWhenClosed;                            //@synthesize preventDismissWhenClosed=_preventDismissWhenClosed - In the implementation block
@property (assign,nonatomic) BOOL presentFullScreenAlertOverList;                      //@synthesize presentFullScreenAlertOverList=_presentFullScreenAlertOverList - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowActionsInCarPlay;                         //@synthesize shouldAllowActionsInCarPlay=_shouldAllowActionsInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowPersistentBannersInCarPlay;               //@synthesize shouldAllowPersistentBannersInCarPlay=_shouldAllowPersistentBannersInCarPlay - In the implementation block
@property (assign,nonatomic) BOOL playMediaWhenRaised;                                 //@synthesize playMediaWhenRaised=_playMediaWhenRaised - In the implementation block
@property (assign,nonatomic) BOOL preventClearFromList;                                //@synthesize preventClearFromList=_preventClearFromList - In the implementation block
@property (assign,nonatomic) BOOL alwaysDisplayNotificationsIndicator;                 //@synthesize alwaysDisplayNotificationsIndicator=_alwaysDisplayNotificationsIndicator - In the implementation block
@property (assign,nonatomic) BOOL suppressDelayForForwardedNotifications;              //@synthesize suppressDelayForForwardedNotifications=_suppressDelayForForwardedNotifications - In the implementation block
@property (assign,nonatomic) BOOL suppressDismissActionInCarPlay;                      //@synthesize suppressDismissActionInCarPlay=_suppressDismissActionInCarPlay - In the implementation block
@property (nonatomic,copy) NSString * privateBody;                                     //@synthesize privateBody=_privateBody - In the implementation block
@property (nonatomic,copy) NSString * summaryFormat;                                   //@synthesize summaryFormat=_summaryFormat - In the implementation block
@property (nonatomic,copy) NSString * backgroundStyle;                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,copy) NSString * listPriority;                                    //@synthesize listPriority=_listPriority - In the implementation block
-(NSString *)identifier;
-(void)setBackgroundStyle:(NSString *)arg1 ;
-(NSString *)privateBody;
-(void)setPresentFullScreenAlertOverList:(BOOL)arg1 ;
-(BOOL)shouldAllowInCarPlay;
-(void)setSuppressDelayForForwardedNotifications:(BOOL)arg1 ;
-(BOOL)shouldAllowActionsInCarPlay;
-(void)setShouldAllowSpoken:(BOOL)arg1 ;
-(void)setListPriority:(NSString *)arg1 ;
-(BOOL)preventDismissWhenClosed;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setRevealAdditionalContentWhenPresented:(BOOL)arg1 ;
-(void)setPrivacyOptionShowSubtitle:(BOOL)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setAlwaysDisplayNotificationsIndicator:(BOOL)arg1 ;
-(NSArray *)minimalActions;
-(NSArray *)actions;
-(BOOL)playMediaWhenRaised;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)listPriority;
-(void)setPreventAutomaticRemovalFromRecent:(BOOL)arg1 ;
-(void)setHasCustomSilenceAction:(BOOL)arg1 ;
-(void)setPreventClearFromList:(BOOL)arg1 ;
-(void)setShouldAllowInCarPlay:(BOOL)arg1 ;
-(BOOL)alwaysDisplayNotificationsIndicator;
-(NSString *)backgroundStyle;
-(void)setShouldAllowActionsInCarPlay:(BOOL)arg1 ;
-(BOOL)suppressDelayForForwardedNotifications;
-(void)setHasCustomDismissAction:(BOOL)arg1 ;
-(void)setPlayMediaWhenRaised:(BOOL)arg1 ;
-(BOOL)suppressDismissActionInCarPlay;
-(void)setPreventAutomaticLock:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCustomDismissAction;
-(BOOL)preventAutomaticLock;
-(BOOL)shouldAllowSpoken;
-(void)setActions:(NSArray *)arg1 ;
-(void)setPreventDismissWhenClosed:(BOOL)arg1 ;
-(void)setPrivacyOptionShowTitle:(BOOL)arg1 ;
-(NSArray *)intentIdentifiers;
-(void)setShouldAllowPersistentBannersInCarPlay:(BOOL)arg1 ;
-(BOOL)privacyOptionShowTitle;
-(void)setSummaryFormat:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setPrivateBody:(NSString *)arg1 ;
-(NSString *)summaryFormat;
-(BOOL)revealAdditionalContentWhenPresented;
-(BOOL)presentFullScreenAlertOverList;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(BOOL)hasCustomSilenceAction;
-(id)description;
-(BOOL)privacyOptionShowSubtitle;
-(BOOL)shouldAllowPersistentBannersInCarPlay;
-(BOOL)preventClearFromList;
-(BOOL)preventAutomaticRemovalFromRecent;
-(void)setSuppressDismissActionInCarPlay:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
