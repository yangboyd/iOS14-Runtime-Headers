/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCListenerEndpoint, NSObject, NSXPCListener, NSString;

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding> {

	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)configuredEndpointWithUpdateHandler:(/*^block*/id)arg1 withConnection:(id)arg2 ;
+(/*^block*/id)remoteUpdateHanderForEndpoint:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)invalidate;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithCoder:(id)arg1 ;
-(id)handler;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCListener *)listener;
@end

