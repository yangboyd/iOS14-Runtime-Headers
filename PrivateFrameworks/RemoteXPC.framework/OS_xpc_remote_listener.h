/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteXPC.framework/RemoteXPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface OS_xpc_remote_listener : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	int type;
	/*^block*/id accept_handler;
	/*^block*/id cancel_handler;
	BOOL canceled;

}
-(void)dealloc;
@end
