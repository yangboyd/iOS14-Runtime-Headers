/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSSettingsInterface.h>

@protocol VUIJSSettingsInterface <JSExport>
@required
-(id)consentedBrands;
-(id)userPreferences;
-(id)deniedBrands;
-(BOOL)sportsScoreSpoilersAllowed;
-(BOOL)privateModeEnabled;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1;

@end


@interface VUIJSSettingsInterface : IKJSObject <VUIJSSettingsInterface>
-(void)dealloc;
-(id)consentedBrands;
-(id)userPreferences;
-(id)deniedBrands;
-(BOOL)sportsScoreSpoilersAllowed;
-(BOOL)privateModeEnabled;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleSettingsDidChange:(id)arg1 ;
-(unsigned long long)privacyFlowContentVersion;
-(void)forceUpdateWithCallback:(id)arg1 ;
-(id)appSettingsByChannelID;
-(id)wlkOverrides;
-(void)updateFeaturesConfiguration:(id)arg1 ;
@end

