/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSNumber;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _usage;
	id _validationToken;

}

@property (nonatomic,readonly) NSNumber * staticUsage; 
@property (nonatomic,readonly) NSNumber * dynamicUsage; 
@property (nonatomic,readonly) NSNumber * onDemandResourcesUsage; 
@property (nonatomic,readonly) NSNumber * sharedUsage; 
+(id)propertyQueue;
+(BOOL)supportsSecureCoding;
+(id)usageFromMobileInstallationForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)_serverQueue;
+(id)ODRUsageForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)mobileInstallationQueue;
+(id)ODRConnection;
-(NSNumber *)dynamicUsage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(BOOL)fetchServerSideWithConnection:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2 validationToken:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_fetchWithXPCConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeAllCachedUsageValues;
-(NSNumber *)onDemandResourcesUsage;
-(NSNumber *)staticUsage;
-(NSNumber *)sharedUsage;
-(BOOL)fetchClientSideWithError:(id*)arg1 ;
@end
