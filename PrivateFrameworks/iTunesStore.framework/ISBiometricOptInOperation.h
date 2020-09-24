/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISURLBag, NSString;

@interface ISBiometricOptInOperation : ISOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _promptUser;
	/*^block*/id _resultBlock;
	ISURLBag* _urlBag;
	NSString* _topicName;
	NSString* _userAgent;

}

@property (assign) BOOL promptUser; 
@property (copy) NSString * topicName;              //@synthesize topicName=_topicName - In the implementation block
@property (copy) NSString * userAgent;              //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) id resultBlock; 
-(void)setResultBlock:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)run;
-(void)_loadURLBag;
-(id)resultBlock;
-(id)init;
-(NSString *)topicName;
-(void)setPromptUser:(BOOL)arg1 ;
-(void)setTopicName:(NSString *)arg1 ;
-(BOOL)promptUser;
-(BOOL)_performOptInDialogOperationWithError:(id*)arg1 ;
-(BOOL)_performPasscodeDialogOperationWithError:(id*)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(id)_newSourceByStartingTimeoutTimer;
-(void)_performOptInDialogMetricsWithResult:(BOOL)arg1 error:(id)arg2 ;
@end
