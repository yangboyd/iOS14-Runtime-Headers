/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXEndpointVending.h>

@protocol AXDragEndpointRequestSatisfierDelegate;
@class NSXPCConnection, NSString;

@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending> {

	NSXPCConnection* _connection;
	id<AXDragEndpointRequestSatisfierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragEndpointRequestSatisfierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)requestDragEndpoint:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<AXDragEndpointRequestSatisfierDelegate>)arg1 ;
-(id<AXDragEndpointRequestSatisfierDelegate>)delegate;
@end

