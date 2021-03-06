/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface HCXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	unsigned long long _requestedUpdates;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestedUpdates;                 //@synthesize requestedUpdates=_requestedUpdates - In the implementation block
+(id)clientWithConnection:(id)arg1 ;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequestedUpdates:(unsigned long long)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)dealloc;
-(BOOL)sendMessage:(id)arg1 errorBlock:(/*^block*/id)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)teardownConnection;
-(unsigned long long)requestedUpdates;
-(id)description;
-(void)setWantsUpdates:(BOOL)arg1 forIdentifier:(unsigned long long)arg2 ;
@end

