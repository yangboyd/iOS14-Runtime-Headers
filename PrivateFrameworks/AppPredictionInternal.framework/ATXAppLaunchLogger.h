/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>
#import <libobjc.A.dylib/ATXPeriodicLoggerSource.h>

@class NSString;

@interface ATXAppLaunchLogger : ATXNotificationsDatabase <ATXPeriodicLoggerSource> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)createCustomSchema;
-(id)_init;
-(long long)latestVersion;
-(id)getMetrics;
-(void)setEnabled:(BOOL)arg1 ;
-(void)logAppLaunchFrom:(unsigned long long)arg1 at:(id)arg2 ;
@end

