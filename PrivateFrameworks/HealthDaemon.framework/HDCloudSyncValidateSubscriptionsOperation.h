/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation {

	BOOL _includeSecondaryContainers;

}

@property (assign,nonatomic) BOOL includeSecondaryContainers;              //@synthesize includeSecondaryContainers=_includeSecondaryContainers - In the implementation block
-(void)main;
-(id)_subcriptionsToValidate;
-(id)_registerOperationForSubscriptions:(id)arg1 container:(id)arg2 ;
-(BOOL)includeSecondaryContainers;
-(void)setIncludeSecondaryContainers:(BOOL)arg1 ;
@end
