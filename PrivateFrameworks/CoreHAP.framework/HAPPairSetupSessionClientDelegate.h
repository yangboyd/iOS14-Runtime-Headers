/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
@optional
-(void)pairSetupSession:(id)arg1 didReceiveProductData:(id)arg2;
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;

@required
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2;

@end
