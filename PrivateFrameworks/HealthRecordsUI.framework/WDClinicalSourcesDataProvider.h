/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthRecordsStore, HKHealthStore;

@interface WDClinicalSourcesDataProvider : NSObject {

	HKHealthRecordsStore* _healthRecordsStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore; 
@property (nonatomic,readonly) HKHealthRecordsStore * healthRecordsStore;              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
+(/*^block*/id)_objectCompletionOnMainQueue:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
+(/*^block*/id)_logoCompletionOnMainQueue:(/*^block*/id)arg1 cancellationToken:(id)arg2 ;
-(id)fetchAccountsForDisplayWithCompletion:(/*^block*/id)arg1 ;
-(id)_orderAccountsForDisplay:(id)arg1 ;
-(id)accountsForDisplay;
-(void)_fetchAccountsForDisplayWithCompletion:(/*^block*/id)arg1 ;
-(id)_accountsForGateways:(id)arg1 ;
-(id)_fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)_logoForFallback:(id)arg1 size:(double)arg2 ;
-(void)fetchAccountOwnerForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)nameAndFormattedBirthDateForAccountOwner:(id)arg1 useMultipleLines:(BOOL)arg2 ;
-(id)_createLoginSafariViewControllerForURL:(id)arg1 error:(id*)arg2 ;
-(id)sourcesRequestingAuthorizationForClinicalTypes;
-(id)initWithHealthRecordsStore:(id)arg1 ;
-(BOOL)anyRegisteredAccounts;
-(id)fetchAccessedAccountsForDisplayWithCompletion:(/*^block*/id)arg1 ;
-(id)accountsForDisplayForGateways:(id)arg1 ;
-(void)fetchLogoForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchCachedLogoForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fetchLogoForBrand:(id)arg1 fallback:(id)arg2 size:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)gatewaysWithExistingAccountsFromGateways:(id)arg1 ;
-(id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)arg1 ;
-(void)fetchAccountForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginInitialLoginSessionForGateway:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginReloginSessionForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(HKHealthStore *)healthStore;
-(id)fetchAccountForSource:(id)arg1 ;
-(id)fetchAccountOwnerForSource:(id)arg1 ;
-(HKHealthRecordsStore *)healthRecordsStore;
-(id)nameAndFormattedBirthDateForAccountOwner:(id)arg1 ;
@end

