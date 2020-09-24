/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENRegion, NSString;

@interface ENRegionServerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _enEnabled;
	BOOL _hasSubdivisions;
	BOOL _dynamicAlgorithmEnabled;
	char _dynamicThrottleDownRSSI;
	BOOL _enableV1;
	unsigned _dailyDetectExposureLimit;
	unsigned _detectExposureNKDLimit;
	unsigned _numberOfAdvSamplesForRPIThreshold;
	unsigned _dynamicThrottleDownAdvDensity;
	unsigned _dynamicThrottleUpAdvDensity;
	unsigned long long _enVersion;
	ENRegion* _region;
	NSString* _appBundleID;
	NSString* _publicKey;
	NSString* _publicKeyVersion;
	double _applicationBackgroundRuntimeInterval;
	double _rpiAdvertisementTolerance;
	double _rpiDuplicateAdvertisementTolerance;
	double _callbackInterval;
	double _forceAPWakeIntervalThreshold;
	double _dynamicThrottleDownDuration;
	double _dynamicThrottleUpDuration;
	double _osTriggeredAppRunInterval;
	double _regionTransitionGracePeriod;
	double _regionDisabledTransitionGracePeriod;
	NSString* _phaTelemetryPublicCertificateChain;
	NSString* _phaTelemetryAppleCertificateChain;
	NSString* _partnerTelemetryPublicCertificateChain;
	NSString* _partnerTelemetryAppleCertificateChain;
	NSString* _appleTelemetryEndpoint;
	NSString* _appleTelemetryEndpointCredentials;

}

@property (nonatomic,readonly) unsigned long long enVersion;                               //@synthesize enVersion=_enVersion - In the implementation block
@property (nonatomic,readonly) BOOL enEnabled;                                             //@synthesize enEnabled=_enEnabled - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * region;                                     //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) BOOL hasSubdivisions;                                       //@synthesize hasSubdivisions=_hasSubdivisions - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleID;                                //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicKey;                                  //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicKeyVersion;                           //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (nonatomic,readonly) double applicationBackgroundRuntimeInterval;                //@synthesize applicationBackgroundRuntimeInterval=_applicationBackgroundRuntimeInterval - In the implementation block
@property (nonatomic,readonly) double rpiAdvertisementTolerance;                           //@synthesize rpiAdvertisementTolerance=_rpiAdvertisementTolerance - In the implementation block
@property (nonatomic,readonly) double rpiDuplicateAdvertisementTolerance;                  //@synthesize rpiDuplicateAdvertisementTolerance=_rpiDuplicateAdvertisementTolerance - In the implementation block
@property (nonatomic,readonly) double callbackInterval;                                    //@synthesize callbackInterval=_callbackInterval - In the implementation block
@property (nonatomic,readonly) unsigned dailyDetectExposureLimit;                          //@synthesize dailyDetectExposureLimit=_dailyDetectExposureLimit - In the implementation block
@property (nonatomic,readonly) unsigned detectExposureNKDLimit;                            //@synthesize detectExposureNKDLimit=_detectExposureNKDLimit - In the implementation block
@property (nonatomic,readonly) unsigned numberOfAdvSamplesForRPIThreshold;                 //@synthesize numberOfAdvSamplesForRPIThreshold=_numberOfAdvSamplesForRPIThreshold - In the implementation block
@property (nonatomic,readonly) double forceAPWakeIntervalThreshold;                        //@synthesize forceAPWakeIntervalThreshold=_forceAPWakeIntervalThreshold - In the implementation block
@property (nonatomic,readonly) BOOL dynamicAlgorithmEnabled;                               //@synthesize dynamicAlgorithmEnabled=_dynamicAlgorithmEnabled - In the implementation block
@property (nonatomic,readonly) double dynamicThrottleDownDuration;                         //@synthesize dynamicThrottleDownDuration=_dynamicThrottleDownDuration - In the implementation block
@property (nonatomic,readonly) unsigned dynamicThrottleDownAdvDensity;                     //@synthesize dynamicThrottleDownAdvDensity=_dynamicThrottleDownAdvDensity - In the implementation block
@property (nonatomic,readonly) char dynamicThrottleDownRSSI;                               //@synthesize dynamicThrottleDownRSSI=_dynamicThrottleDownRSSI - In the implementation block
@property (nonatomic,readonly) double dynamicThrottleUpDuration;                           //@synthesize dynamicThrottleUpDuration=_dynamicThrottleUpDuration - In the implementation block
@property (nonatomic,readonly) unsigned dynamicThrottleUpAdvDensity;                       //@synthesize dynamicThrottleUpAdvDensity=_dynamicThrottleUpAdvDensity - In the implementation block
@property (nonatomic,readonly) double osTriggeredAppRunInterval;                           //@synthesize osTriggeredAppRunInterval=_osTriggeredAppRunInterval - In the implementation block
@property (nonatomic,readonly) double regionTransitionGracePeriod;                         //@synthesize regionTransitionGracePeriod=_regionTransitionGracePeriod - In the implementation block
@property (nonatomic,readonly) double regionDisabledTransitionGracePeriod;                 //@synthesize regionDisabledTransitionGracePeriod=_regionDisabledTransitionGracePeriod - In the implementation block
@property (nonatomic,readonly) BOOL enableV1;                                              //@synthesize enableV1=_enableV1 - In the implementation block
@property (nonatomic,copy) NSString * phaTelemetryPublicCertificateChain;                  //@synthesize phaTelemetryPublicCertificateChain=_phaTelemetryPublicCertificateChain - In the implementation block
@property (nonatomic,copy) NSString * phaTelemetryAppleCertificateChain;                   //@synthesize phaTelemetryAppleCertificateChain=_phaTelemetryAppleCertificateChain - In the implementation block
@property (nonatomic,copy) NSString * partnerTelemetryPublicCertificateChain;              //@synthesize partnerTelemetryPublicCertificateChain=_partnerTelemetryPublicCertificateChain - In the implementation block
@property (nonatomic,copy) NSString * partnerTelemetryAppleCertificateChain;               //@synthesize partnerTelemetryAppleCertificateChain=_partnerTelemetryAppleCertificateChain - In the implementation block
@property (nonatomic,copy) NSString * appleTelemetryEndpoint;                              //@synthesize appleTelemetryEndpoint=_appleTelemetryEndpoint - In the implementation block
@property (nonatomic,copy) NSString * appleTelemetryEndpointCredentials;                   //@synthesize appleTelemetryEndpointCredentials=_appleTelemetryEndpointCredentials - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)publicKey;
-(id)initWithServerResponseDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ENRegion *)region;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)publicKeyVersion;
-(id)description;
-(NSString *)appBundleID;
-(BOOL)enableV1;
-(double)callbackInterval;
-(unsigned long long)enVersion;
-(BOOL)enEnabled;
-(BOOL)hasSubdivisions;
-(double)applicationBackgroundRuntimeInterval;
-(double)rpiAdvertisementTolerance;
-(unsigned)dailyDetectExposureLimit;
-(double)rpiDuplicateAdvertisementTolerance;
-(unsigned)detectExposureNKDLimit;
-(unsigned)numberOfAdvSamplesForRPIThreshold;
-(double)forceAPWakeIntervalThreshold;
-(BOOL)dynamicAlgorithmEnabled;
-(double)dynamicThrottleDownDuration;
-(unsigned)dynamicThrottleDownAdvDensity;
-(char)dynamicThrottleDownRSSI;
-(double)dynamicThrottleUpDuration;
-(unsigned)dynamicThrottleUpAdvDensity;
-(double)osTriggeredAppRunInterval;
-(double)regionTransitionGracePeriod;
-(double)regionDisabledTransitionGracePeriod;
-(NSString *)phaTelemetryPublicCertificateChain;
-(void)setPhaTelemetryPublicCertificateChain:(NSString *)arg1 ;
-(NSString *)phaTelemetryAppleCertificateChain;
-(void)setPhaTelemetryAppleCertificateChain:(NSString *)arg1 ;
-(NSString *)partnerTelemetryPublicCertificateChain;
-(void)setPartnerTelemetryPublicCertificateChain:(NSString *)arg1 ;
-(NSString *)partnerTelemetryAppleCertificateChain;
-(void)setPartnerTelemetryAppleCertificateChain:(NSString *)arg1 ;
-(NSString *)appleTelemetryEndpoint;
-(void)setAppleTelemetryEndpoint:(NSString *)arg1 ;
-(NSString *)appleTelemetryEndpointCredentials;
-(void)setAppleTelemetryEndpointCredentials:(NSString *)arg1 ;
@end
