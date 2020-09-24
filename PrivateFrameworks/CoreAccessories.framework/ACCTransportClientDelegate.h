/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCTransportClientDelegate <NSObject>
@optional
-(void)transportClient:(id)arg1 authStatusDidChange:(BOOL)arg2 forConnectionWithUUID:(id)arg3;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forConnectionWithUUID:(id)arg3 previousProperties:(id)arg4;
-(void)transportClient:(id)arg1 propertiesDidChange:(id)arg2 forEndpointWithUUID:(id)arg3 previousProperties:(id)arg4 connectionUUID:(id)arg5;
-(void)transportClientServerDisconnected:(id)arg1;

@end
