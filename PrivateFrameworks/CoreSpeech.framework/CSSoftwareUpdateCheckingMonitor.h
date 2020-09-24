/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {

	int _notifyToken;
	BOOL _isSoftwareUpdateCheckingRunning;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)isSoftwareUpdateCheckingRunning;
-(BOOL)_checkSoftwareUpdateCheckingState;
-(void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg1 ;
-(unsigned char)_softwareUpdateCheckingState;
-(void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(BOOL)arg2 ;
-(void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg1 ;
@end
