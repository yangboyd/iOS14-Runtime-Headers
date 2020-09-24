/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventIDMap;
	NSMutableDictionary* _mutableActivityMap;
	NSMutableDictionary* _mutableEventCallbackMap;
	BOOL _invalidated;
	NSXPCConnection* _XPCConnection;
	long long _serviceType;

}

@property (assign) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                     //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) long long serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)clearAllEventHandlers;
-(BOOL)invalidated;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCConnection *)XPCConnection;
-(void)invalidate;
-(void)stopMonitoringAllEvents:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)dealloc;
-(void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)suspend;
-(id)init;
-(BOOL)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endAllActivities:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)resume;
-(void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2 ;
-(void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(void)endActivity:(id)arg1 requestParameters:(id)arg2 ;
-(long long)serviceType;
@end
