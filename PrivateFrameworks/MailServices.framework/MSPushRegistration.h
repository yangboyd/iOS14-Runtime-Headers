/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@class NSString, NSArray;

@interface MSPushRegistration : MSMailDefaultService {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;
	NSString* _notificationNamePrefix;
	NSArray* _mailboxNames;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationNamePrefix;              //@synthesize notificationNamePrefix=_notificationNamePrefix - In the implementation block
@property (nonatomic,copy) NSArray * mailboxNames;                         //@synthesize mailboxNames=_mailboxNames - In the implementation block
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)accountIdentifier;
-(id)init;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)registerForPush:(/*^block*/id)arg1 ;
-(NSString *)notificationNamePrefix;
-(void)setNotificationNamePrefix:(NSString *)arg1 ;
-(NSArray *)mailboxNames;
-(void)setMailboxNames:(NSArray *)arg1 ;
@end
