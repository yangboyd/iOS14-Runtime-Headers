/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CALNNotificationDataSourceUtils : NSObject
+(id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4 ;
+(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)sourceClientIdentifierForNotification:(id)arg1 ;
+(void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(BOOL)arg4 ;
+(void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2 ;
+(id)objectIDWithSourceClientIdentifier:(id)arg1 ;
+(id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)eventWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
@end
