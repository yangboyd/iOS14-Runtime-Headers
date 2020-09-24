/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchConnection.h>

@class NSString;

@interface CSPrivateSearchConnection : CSSearchConnection {

	NSString* _token;

}

@property (nonatomic,retain) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)privateSearchConnectionWithToken:(id)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
