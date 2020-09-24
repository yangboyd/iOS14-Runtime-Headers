/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDDatabaseValueCache;

@interface HDSourceManager : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDDatabaseValueCache* _sourceEntityByBundleIdentifierCache;
	HDDatabaseValueCache* _clientSourceCache;
	HDDatabaseValueCache* _localSourceForBundleIdentifierCache;
	HDDatabaseValueCache* _localSourceForSourceID;

}
+(BOOL)_isLocalDeviceBundleIdentifier:(id)arg1 ;
-(id)createOrUpdateSourceForClient:(id)arg1 error:(id*)arg2 ;
-(id)_sourcePersistentIDsFromSourceEntities:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)updateCurrentDeviceNameWithError:(id*)arg1 ;
-(BOOL)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)privateSourceForClinicalAccountIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id*)arg5 ;
-(id)allWatchSourcesWithError:(id*)arg1 ;
-(id)_bundleIDsWithoutLocalSourceForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_createSourceEntityForBundleIdentifier:(id)arg1 owningAppBundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 error:(id*)arg7 ;
-(id)clientSourceForSourceEntity:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(/*^block*/id)arg2 modifySourceBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteSourceIfNoSampleFound:(id)arg1 ;
-(id)allSourcesForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)localSourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)sourceForClient:(id)arg1 error:(id*)arg2 ;
-(id)_createSourceEntityForSpartanDeviceWithError:(id*)arg1 ;
-(id)_createCopyOfFirstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(BOOL)arg5 error:(id*)arg6 ;
-(id)init;
-(id)allSourcesWithError:(id*)arg1 ;
-(id)_createSourceEntityForLocalDeviceWithError:(id*)arg1 ;
-(id)localDeviceSourceWithError:(id*)arg1 ;
-(id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(BOOL)arg2 ;
-(id)clientSourcesForSourceIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSourceWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteSourcesWithUUIDs:(id)arg1 localSourceEntityCacheKey:(id)arg2 deleteSamples:(BOOL)arg3 transaction:(id)arg4 error:(id*)arg5 ;
-(BOOL)_createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 sourceUUIDSToDelete:(id)arg3 deleteSamples:(BOOL)arg4 transaction:(id)arg5 error:(id*)arg6 ;
-(id)sourceEntityForClientSource:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)_sourceUUIDsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_applicationsUninstalledNotification:(id)arg1 ;
-(id)localSourceForBundleIdentifier:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)clientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)_clientSourcesWithPredicate:(id)arg1 error:(id*)arg2 ;
-(id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id*)arg5 ;
-(id)publicSourceForGatewayExternalIdentifier:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 nameOnCreateOrUpdate:(id)arg4 error:(id*)arg5 ;
-(id)clientSourceForUUID:(id)arg1 error:(id*)arg2 ;
-(id)_localSourcesForBundleIDs:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_sourceFromEphemeralSource:(id)arg1 provenance:(long long)arg2 createOrUpdateIfNecessary:(BOOL)arg3 error:(id*)arg4 ;
-(id)clientSourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id*)arg3 ;
-(id)_fetchClientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(BOOL)arg3 isDeleted:(BOOL*)arg4 error:(id*)arg5 ;
-(id)localSourceForSourceID:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)clientSourceForSourceEntities:(id)arg1 error:(id*)arg2 ;
@end
