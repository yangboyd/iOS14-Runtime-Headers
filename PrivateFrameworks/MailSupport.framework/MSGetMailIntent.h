/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class INPerson, NSString;

@interface MSGetMailIntent : INIntent

@property (assign,nonatomic) long long readStatus; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) INPerson * recipient; 
@property (nonatomic,copy) NSString * subject; 
@end
