/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol {

	NSDictionary* _providerConfiguration;
	NSString* _providerBundleIdentifier;
	NSString* _pluginType;
	NSString* _designatedRequirement;

}

@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * designatedRequirement;                  //@synthesize designatedRequirement=_designatedRequirement - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDesignatedRequirement:(NSString *)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setPluginType:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)providerConfiguration;
-(NSString *)providerBundleIdentifier;
-(NSString *)designatedRequirement;
-(id)init;
-(id)initWithPluginType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)pluginType;
@end

