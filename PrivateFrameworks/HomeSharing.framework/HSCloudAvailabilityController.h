/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/HSCloudAvailability.h>

@protocol OS_dispatch_queue;
@class NSObject, RadiosPreferences, NSString;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasProperNetworkConditionsToShowCloudMedia;
	BOOL _isAirplaneModeActive;
	BOOL _isAutoDownloadOnCellularAllowed;
	BOOL _isCellularDataActive;
	BOOL _isCellularDataRestrictedForMusic;
	BOOL _isShowingAllMusic;
	BOOL _isShowingAllVideo;
	BOOL _isUpdateInProgress;
	BOOL _isWiFiEnabled;
	BOOL _isWiFiAssociated;
	BOOL _isNetworkReachable;
	BOOL _canShowCloudMusic;
	BOOL _canShowCloudVideo;
	BOOL _canShowCloudDownloadButtons;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	long long _networkType;
	RadiosPreferences* _radiosPreferences;
	unsigned long long _networkReachabilityObservationCount;
	CTServerConnectionRef _ctServerConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)airplaneModeChanged;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudMusic;
-(void)_setNewIsNetworkReachable:(BOOL)arg1 networkType:(long long)arg2 ;
-(BOOL)isNetworkReachable;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(void)_onQueue_beginObservingReachabilityChanges;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)_hasWiFiCapability;
-(BOOL)canShowCloudVideo;
-(void)dealloc;
-(BOOL)_hasCellularCapability;
-(void)beginObservingNetworkReachability;
-(id)init;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1 ;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)_uncachedIsShowingAllVideo;
-(BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
-(BOOL)_uncachedIsShowingAllMusic;
-(void)endObservingNetworkReachability;
-(BOOL)_isAutoDownloadOnCellularAllowed;
-(void)_wifiStateDidChangeNotification:(id)arg1 ;
-(void)_onQueue_updateIsCellularDataRestrictedForMusic;
-(void)_onQueue_endObservingReachabilityChanges;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end

