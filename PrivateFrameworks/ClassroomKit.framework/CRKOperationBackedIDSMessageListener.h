/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>
#import <libobjc.A.dylib/CRKIDSListener.h>

@class CATRemoteTaskOperation, NSString;

@interface CRKOperationBackedIDSMessageListener : NSObject <CATTaskOperationNotificationDelegate, CRKIDSListener> {

	CATRemoteTaskOperation* _listenOperation;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) CATRemoteTaskOperation * listenOperation;              //@synthesize listenOperation=_listenOperation - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHandler:(id)arg1 ;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)invalidate;
-(void)dealloc;
-(id)handler;
-(id)initWithListenOperation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(CATRemoteTaskOperation *)listenOperation;
@end
