/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTimeballServiceProxyInterface.h>
#import <libobjc.A.dylib/MNTimeballServiceProxyDelegate.h>

@protocol MNTimeballServiceProxyDelegate;
@class NSXPCConnection, MNTimeballSubscriberStore, NSString;

@interface MNTimeballServiceRemoteProxy : NSObject <MNTimeballServiceProxyInterface, MNTimeballServiceProxyDelegate> {

	NSXPCConnection* _connection;
	MNTimeballSubscriberStore* _subscriberStore;
	BOOL _requestLeeching;
	id<MNTimeballServiceProxyDelegate> _delegate;

}

@property (assign,nonatomic) id<MNTimeballServiceProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_openConnection;
-(id)_remoteObjectProxy;
-(id)init;
-(void)setDelegate:(id<MNTimeballServiceProxyDelegate>)arg1 ;
-(id<MNTimeballServiceProxyDelegate>)delegate;
-(void)_closeConnection;
-(void)invokeHandlerWithID:(id)arg1 forDestination:(id)arg2 update:(id)arg3 error:(id)arg4 ;
-(void)completedUpdateForHandlerID:(id)arg1 ;
-(void)didReceiveError:(id)arg1 forDestination:(id)arg2 ;
-(void)didReceiveUpdate:(id)arg1 forDestination:(id)arg2 ;
-(void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 handlerID:(id)arg4 ;
-(void)subscribeToDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
-(void)subscribeToAllDestinations;
-(void)unsubscribeFromAllDestinations;
-(void)_registerForNavdRestart;
@end
