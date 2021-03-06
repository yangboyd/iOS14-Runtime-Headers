/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)installApps:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)interface;
+(id)_availableMetadataClasses;
+(void)installApp:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

