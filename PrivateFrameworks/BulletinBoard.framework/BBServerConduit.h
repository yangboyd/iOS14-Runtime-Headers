/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBServerConduitClientInterface.h>

@class NSXPCConnection, NSString;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConduit;
+(id)serverInterface;
+(id)clientInterface;
-(void)invalidate;
-(void)dealloc;
-(id)init;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/id)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2 ;
@end

