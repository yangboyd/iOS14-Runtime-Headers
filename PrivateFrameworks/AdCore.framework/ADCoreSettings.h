/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSURL, NSString, ACAccount;

@interface ADCoreSettings : ADSingleton {

	BOOL _educationModeEnabled;
	BOOL _internationalRoaming;
	BOOL _hasDeterminedRoamingStatus;
	int _connectionType;
	float _timezone;
	int _runState;
	NSURL* _defaultServerURL;
	NSURL* _defaultConfigurationServerURL;
	double _jingleTimeoutInterval;
	double _adServerTimeoutInterval;
	double _NSURLConnectionTimeout;
	double _NSURLTransactionTimeout;
	NSString* _osVersionAndBuild;
	NSString* _deviceModel;
	NSString* _bundleIdentifier;
	NSString* _storefrontLocalizationLanguage;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _iTunesStorefront;

}

@property (nonatomic,retain) NSURL * defaultServerURL;                               //@synthesize defaultServerURL=_defaultServerURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultConfigurationServerURL;                  //@synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL - In the implementation block
@property (assign,nonatomic) int segmentRetrievalInterval; 
@property (assign,nonatomic) int maxSegmentSendInterval; 
@property (assign,nonatomic) double jingleTimeoutInterval;                           //@synthesize jingleTimeoutInterval=_jingleTimeoutInterval - In the implementation block
@property (assign,nonatomic) double adServerTimeoutInterval;                         //@synthesize adServerTimeoutInterval=_adServerTimeoutInterval - In the implementation block
@property (assign,nonatomic) double NSURLConnectionTimeout;                          //@synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout - In the implementation block
@property (assign,nonatomic) double NSURLTransactionTimeout;                         //@synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout - In the implementation block
@property (nonatomic,retain) NSString * osVersionAndBuild;                           //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                 //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int connectionType;                                     //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) float timezone;                                         //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier; 
@property (nonatomic,retain) NSString * storefrontLocalizationLanguage;              //@synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage - In the implementation block
@property (nonatomic,readonly) BOOL isManagedAppleID; 
@property (nonatomic,readonly) BOOL isManagediTunesAccount; 
@property (nonatomic,readonly) BOOL isManagediCloudAccount; 
@property (assign,nonatomic) BOOL isPersonalizedAdsEnabled; 
@property (nonatomic,readonly) BOOL educationModeEnabled;                            //@synthesize educationModeEnabled=_educationModeEnabled - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                                //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                                //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (assign,nonatomic) BOOL internationalRoaming;                              //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedRoamingStatus;                        //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (assign,nonatomic) int runState;                                           //@synthesize runState=_runState - In the implementation block
@property (nonatomic,retain) NSString * iTunesStorefront;                            //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) ACAccount * iTunesStoreAccount; 
@property (nonatomic,readonly) NSString * iTunesAccountDSID; 
@property (nonatomic,readonly) NSString * customJinglePayload; 
@property (nonatomic,readonly) ACAccount * iCloudAccount; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (nonatomic,readonly) NSString * iCloudDSID; 
@property (readonly) BOOL unitTesting; 
+(id)sharedInstance;
+(BOOL)educationModeEnabled;
-(void)setDeviceModel:(NSString *)arg1 ;
-(float)timezone;
-(NSString *)deviceModel;
-(BOOL)isPersonalizedAdsEnabled;
-(void)setDefaultServerURL:(NSURL *)arg1 ;
-(void)setInternationalRoaming:(BOOL)arg1 ;
-(void)setITunesStorefront:(NSString *)arg1 ;
-(BOOL)educationModeEnabled;
-(int)segmentRetrievalInterval;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(ACAccount *)iTunesStoreAccount;
-(BOOL)isManagediCloudAccount;
-(NSString *)bundleIdentifier;
-(int)maxSegmentSendInterval;
-(void)setIdentifierForAdvertisingAllowed:(BOOL)arg1 ;
-(double)adServerTimeoutInterval;
-(void)setRunState:(int)arg1 ;
-(NSString *)storefrontLocalizationLanguage;
-(BOOL)isManagediTunesAccount;
-(BOOL)hasDeterminedRoamingStatus;
-(NSString *)iCloudAccountIdentifier;
-(void)setHasDeterminedRoamingStatus:(BOOL)arg1 ;
-(BOOL)purpleBuddyWillRun;
-(void)setHomeCarrierMCC:(NSString *)arg1 ;
-(double)NSURLTransactionTimeout;
-(NSString *)iTunesAccountDSID;
-(int)connectionType;
-(void)setTimezone:(float)arg1 ;
-(NSString *)osVersionAndBuild;
-(id)init;
-(NSString *)customJinglePayload;
-(NSURL *)defaultServerURL;
-(BOOL)unitTesting;
-(void)gatherTelephonyData;
-(BOOL)isManagedAppleID;
-(void)setNSURLTransactionTimeout:(double)arg1 ;
-(double)NSURLConnectionTimeout;
-(BOOL)internationalRoaming;
-(void)setNSURLConnectionTimeout:(double)arg1 ;
-(void)setAdServerTimeoutInterval:(double)arg1 ;
-(int)deviceRunStateForBundleIdentifier:(id)arg1 ;
-(void)setJingleTimeoutInterval:(double)arg1 ;
-(void)reloadStorefront:(/*^block*/id)arg1 ;
-(BOOL)isAccountRestricted;
-(void)setSegmentRetrievalInterval:(int)arg1 ;
-(ACAccount *)iCloudAccount;
-(id)deviceDescription;
-(void)setIsPersonalizedAdsEnabled:(BOOL)arg1 ;
-(NSString *)homeCarrierMCC;
-(void)setStorefrontLocalizationLanguage:(NSString *)arg1 ;
-(NSString *)iCloudDSID;
-(void)setDefaultConfigurationServerURL:(NSURL *)arg1 ;
-(NSString *)homeCarrierMNC;
-(void)setHomeCarrierMNC:(NSString *)arg1 ;
-(double)jingleTimeoutInterval;
-(void)expire;
-(NSString *)iTunesStorefront;
-(NSString *)localeIdentifier;
-(NSURL *)defaultConfigurationServerURL;
-(void)setMaxSegmentSendInterval:(int)arg1 ;
-(int)runState;
@end

