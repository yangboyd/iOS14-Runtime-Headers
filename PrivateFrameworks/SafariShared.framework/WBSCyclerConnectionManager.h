/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol WBSCyclerTestTarget;
@class NSXPCListener, WBSCyclerServiceProxy, NSString;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	WBSCyclerServiceProxy* _cyclerProxy;
	id<WBSCyclerTestTarget> _testTarget;

}

@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTarget;              //@synthesize testTarget=_testTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isCyclerEnabled;
-(void)connect;
-(id<WBSCyclerTestTarget>)testTarget;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithTestTarget:(id)arg1 ;
-(id)init;
@end

