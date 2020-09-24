/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioIOControllerDelegate <VCBasebandCodecNotifications>
@required
-(void)didStart:(BOOL)arg1 error:(id)arg2;
-(void)controllerFormatChanged:(AudioStreamBasicDescription)arg1;
-(void)didStop:(BOOL)arg1 error:(id)arg2;
-(void)spatialAudioSourceIDChanged:(unsigned long long)arg1;
-(void)didResume;
-(void)didSuspend;

@end
