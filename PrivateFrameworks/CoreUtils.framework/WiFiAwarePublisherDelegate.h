/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwarePublisherDelegate <NSObject>
@optional
-(void)publisher:(id)arg1 receivedMessage:(id)arg2 fromSubscriberID:(unsigned char)arg3 subscriberAddress:(id)arg4;
-(void)publisher:(id)arg1 dataIndicatedForHandle:(id)arg2;
-(void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3;
-(void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned)arg3 serviceSpecificInfo:(id)arg4;

@required
-(void)publisherStarted:(id)arg1;
-(void)publisher:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)publisher:(id)arg1 terminatedWithReason:(long long)arg2;

@end
