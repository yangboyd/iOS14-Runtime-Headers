/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPeerToPeer/WiFiAwareSubscriberXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwareSubscriberXPC, WiFiAwareSubscriberDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiAwareSubscribeConfiguration, NSString;

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _subscribeID;
	id<WiFiAwareSubscriberXPC> _subscriberProxy;
	id<WiFiAwareSubscriberDelegate> _delegate;
	WiFiAwareSubscribeConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<WiFiAwareSubscriberDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiAwareSubscribeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetState;
-(BOOL)isConnected;
-(void)dealloc;
-(void)start;
-(void)setDelegate:(id<WiFiAwareSubscriberDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id<WiFiAwareSubscriberDelegate>)delegate;
-(WiFiAwareSubscribeConfiguration *)configuration;
-(void)stop;
-(NSString *)description;
-(void)handleError;
-(void)subscribeStartedWithInstanceID:(unsigned char)arg1 ;
-(void)subscribeTerminatedWithReason:(long long)arg1 ;
-(void)subscribeReceivedDiscoveryResult:(id)arg1 ;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)subscribeFailedToStartWithError:(long long)arg1 ;
-(void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startSubscribeSync;
@end

