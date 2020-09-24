/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKUserContentWorld, WKContentWorld, NSString;

@interface WKUserScript : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserScript> _userScript;

}

@property (nonatomic,readonly) _WKUserContentWorld * _userContentWorld; 
@property (nonatomic,readonly) WKContentWorld * _contentWorld; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) long long injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 userContentWorld:(id)arg7 ;
-(Object*)_apiObject;
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 inContentWorld:(id)arg4 ;
-(void)dealloc;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 contentWorld:(id)arg6 ;
-(WKContentWorld *)_contentWorld;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 deferRunningUntilNotification:(BOOL)arg8 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 userContentWorld:(id)arg6 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 includeMatchPatternStrings:(id)arg4 excludeMatchPatternStrings:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 deferRunningUntilNotification:(BOOL)arg8 ;
-(id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 ;
-(id)_initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(BOOL)arg3 legacyWhitelist:(id)arg4 legacyBlacklist:(id)arg5 associatedURL:(id)arg6 contentWorld:(id)arg7 ;
-(BOOL)isForMainFrameOnly;
-(NSString *)source;
-(_WKUserContentWorld *)_userContentWorld;
-(long long)injectionTime;
@end
