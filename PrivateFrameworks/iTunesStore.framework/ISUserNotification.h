/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class NSDictionary;

@interface ISUserNotification : NSObject {

	long long _allowedRetryCount;
	long long _currentRetryCount;
	NSDictionary* _dictionary;
	unsigned long long _optionFlags;
	NSDictionary* _userInfo;

}

@property (readonly) NSDictionary * dictionary; 
@property (readonly) unsigned long long optionFlags; 
@property (assign) long long allowedRetryCount;                   //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign) long long currentRetryCount;                   //@synthesize currentRetryCount=_currentRetryCount - In the implementation block
@property (retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
-(long long)allowedRetryCount;
-(void)dealloc;
-(unsigned long long)optionFlags;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)userInfo;
-(NSDictionary *)dictionary;
-(CFUserNotificationRef)copyUserNotification;
-(long long)currentRetryCount;
-(void)setCurrentRetryCount:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 ;
@end

