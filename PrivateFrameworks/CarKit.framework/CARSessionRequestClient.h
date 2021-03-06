/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (nonatomic,retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(void)startSessionWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForRemovingWiFiUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startAdvertisingCarPlayControlForUSB;
-(void)dealloc;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)startAdvertisingCarPlayControlForWiFiUUID:(id)arg1 ;
-(void)cancelRequests;
-(NSXPCConnection *)serviceConnection;
@end

