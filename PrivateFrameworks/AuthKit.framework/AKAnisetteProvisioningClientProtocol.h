/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteProvisioningClientProtocol <NSObject>
@required
-(void)eraseAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)provisionAnisetteForContext:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
