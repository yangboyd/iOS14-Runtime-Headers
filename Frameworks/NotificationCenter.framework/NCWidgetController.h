/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NCWidgetController_Service_IPC.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC> {

	NCWidgetController* _strongReference;
	NSXPCConnection* _connection;

}

@property (setter=_setStrongReference:,getter=_strongReference,nonatomic,retain) NCWidgetController * strongReference;              //@synthesize strongReference=_strongReference - In the implementation block
@property (setter=_setConnection:,getter=_connection,nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
+(id)widgetController;
+(id)widgetContentUnavailableViewWithButtonTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
+(id)widgetContentUnavailableViewWithTitle:(id)arg1 ;
-(void)dealloc;
-(void)_setConnection:(id)arg1 ;
-(id)_connection;
-(void)_invalidateConnection;
-(void)_setStrongReference:(id)arg1 ;
-(void)__didReceiveHasContentRequest;
-(id)_connectionForRequest;
-(void)setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(id)_strongReference;
@end

