/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CALNUserNotificationCenter <CalActivatable>
@property (assign,nonatomic,__weak) id<CALNUserNotificationCenterDelegate> delegate; 
@required
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
-(id)deliveredNotifications;
-(void)setNotificationCategories:(id)arg1;
-(void)removeAllDeliveredNotifications;
-(id)notificationCategories;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2;
-(void)collectSettingsStats:(id)arg1;

@end
