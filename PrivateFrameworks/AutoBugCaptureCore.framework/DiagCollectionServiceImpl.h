/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DiagnosticExtensionController, ABCAdministrator, NSString;

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> queue;
	DiagnosticExtensionController* deController;
	ABCAdministrator* _administrator;

}

@property (assign,nonatomic,__weak) ABCAdministrator * administrator;              //@synthesize administrator=_administrator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdministrator:(ABCAdministrator *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(ABCAdministrator *)administrator;
-(void)shutdown;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)diagnosticExtensionController;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 ;
@end
