/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {

	ObjectStorage<API::WebsitePolicies> _websitePolicies;

}

@property (assign,nonatomic) long long preferredContentMode; 
@property (assign,nonatomic) BOOL allowsContentJavaScript; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultPreferences;
-(id)_websiteDataStore;
-(void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1 ;
-(long long)_autoplayPolicy;
-(BOOL)_contentBlockersEnabled;
-(unsigned long long)_deviceOrientationAndMotionAccessPolicy;
-(void)setPreferredContentMode:(long long)arg1 ;
-(void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1 ;
-(Object*)_apiObject;
-(void)_setMouseEventPolicy:(unsigned long long)arg1 ;
-(void)_setAllowedAutoplayQuirks:(unsigned long long)arg1 ;
-(id)_customUserAgent;
-(id)_userContentController;
-(void)_setContentBlockersEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(id)_applicationNameForUserAgentWithModernCompatibility;
-(unsigned long long)_allowedAutoplayQuirks;
-(void)_setCustomNavigatorPlatform:(id)arg1 ;
-(BOOL)allowsContentJavaScript;
-(id)_customUserAgentAsSiteSpecificQuirks;
-(unsigned long long)_popUpPolicy;
-(void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg1 ;
-(void)_setCustomHeaderFields:(id)arg1 ;
-(id)init;
-(void)_setCustomUserAgent:(id)arg1 ;
-(void)_setWebsiteDataStore:(id)arg1 ;
-(id)_customNavigatorPlatform;
-(void)_setAutoplayPolicy:(long long)arg1 ;
-(void)_setPopUpPolicy:(unsigned long long)arg1 ;
-(long long)preferredContentMode;
-(void)_setUserContentController:(id)arg1 ;
-(unsigned long long)_mouseEventPolicy;
-(BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
-(id)_customHeaderFields;
-(void)setAllowsContentJavaScript:(BOOL)arg1 ;
-(void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1 ;
@end
