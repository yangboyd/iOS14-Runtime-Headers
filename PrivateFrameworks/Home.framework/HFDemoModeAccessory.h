/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeKit/HMAccessory.h>
#import <libobjc.A.dylib/HFUserNotificationServiceSettingsProviding.h>

@class HFUserNotificationServiceSettings, NSUUID, NSPredicate, HMHome, NSString;

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding> {

	BOOL _notificationsEnabled;
	BOOL _isInternallyCertified;
	NSUUID* _internalUniqueIdentifier;
	NSPredicate* _notificationCondition;
	HMHome* _home;

}

@property (nonatomic,retain) NSUUID * internalUniqueIdentifier;                                                   //@synthesize internalUniqueIdentifier=_internalUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * model; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;                            //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) NSPredicate * notificationCondition;                                                 //@synthesize notificationCondition=_notificationCondition - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) BOOL isInternallyCertified;                                                          //@synthesize isInternallyCertified=_isInternallyCertified - In the implementation block
@property (nonatomic,copy,readonly) HFUserNotificationServiceSettings * hf_userNotificationSettings; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_hasValidKeys:(id)arg1 ;
+(id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
-(id)room;
-(NSString *)manufacturer;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)serialNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)services;
-(NSString *)firmwareVersion;
-(BOOL)isReachable;
-(id)symptomsHandler;
-(NSString *)model;
-(id)category;
-(id)initWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
-(BOOL)_isAppleInternalAccessory;
-(BOOL)_shouldShowAppleInternalManufacturerInfo;
-(void)_updateManufacturerInfoWithString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isInternallyCertified;
-(void)setIsInternallyCertified:(BOOL)arg1 ;
-(id)hf_updateUserNotificationSettings:(id)arg1 ;
-(NSUUID *)internalUniqueIdentifier;
-(void)setInternalUniqueIdentifier:(NSUUID *)arg1 ;
-(NSPredicate *)notificationCondition;
-(void)setNotificationCondition:(NSPredicate *)arg1 ;
-(BOOL)areNotificationsEnabled;
-(NSUUID *)uniqueIdentifier;
-(id)hf_updateIsFavorite:(BOOL)arg1 ;
-(BOOL)hf_isFavorite;
-(BOOL)hf_hasSetFavorite;
-(BOOL)hf_shouldShowInFavorites;
-(HFUserNotificationServiceSettings *)hf_userNotificationSettings;
-(BOOL)hf_shouldShowSoftwareUpdateInfo;
-(id)hf_serviceNameComponents;
-(id)name;
-(void)setHome:(HMHome *)arg1 ;
-(NSString *)description;
-(long long)certificationStatus;
-(HMHome *)home;
@end
