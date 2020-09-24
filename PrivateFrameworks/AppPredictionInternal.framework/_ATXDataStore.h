/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/ATXBackupDataProviderDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, _ATXDuetHelper, PETScalarEventTracker, _PASSqliteDatabase;

@interface _ATXDataStore : NSObject <ATXBackupDataProviderDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	unsigned long long _schemaVersion;
	_ATXDuetHelper* _duetHelper;
	PETScalarEventTracker* _dbMigrationTracker;
	_PASSqliteDatabase* _db;
	unsigned long long _actionHistoryLengthPerAppAction;

}

@property (nonatomic,readonly) _PASSqliteDatabase * db;                                       //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned long long actionHistoryLengthPerAppAction;              //@synthesize actionHistoryLengthPerAppAction=_actionHistoryLengthPerAppAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)_simulateCrashForMigrationFailure:(id)arg1 ;
+(id)stringForHistogramType:(long long)arg1 ;
+(id)defaultPath;
+(BOOL)pareDownForBackup:(sqlite3Ref)arg1 ;
+(BOOL)isSqliteData:(id)arg1 ;
+(id)loadDataFromFile:(id)arg1 ;
-(_PASSqliteDatabase *)db;
-(void)migrate;
-(id)allApps;
-(id)appLaunchSequence;
-(BOOL)migrationUpdateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 ;
-(id)webClipsForAppClipBundleId:(id)arg1 ;
-(unsigned long long)actionHistoryLengthPerAppAction;
-(BOOL)actionExistsForBundleId:(id)arg1 actionType:(id)arg2 ;
-(id)lastLaunchedApp;
-(void)enumerateAppInfoAppActionsExecutingBlock:(/*^block*/id)arg1 ;
-(id)blobOfType:(long long)arg1 ;
-(void)removeAllSlotsFromActionFeedback;
-(void)writeGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3 ;
-(long long)migration_AddEnterpriseAppInfo;
-(id)averageSecondsBetweenAppActionsForAppAction:(id)arg1 ;
-(long long)migration_AppLaunchHistogramToTable;
-(BOOL)checkIfInDB:(id)arg1 suggestionType:(long long)arg2 ;
-(id)initWithInMemoryDataStore;
-(void)updateOrInsertInstallTimestamp:(long long)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 app2VecCluster:(id)arg4 forBundleId:(id)arg5 isExtension:(BOOL)arg6 isEnterpriseApp:(BOOL)arg7 ;
-(id)_lastAppLaunchDateOfType:(long long)arg1 ;
-(long long)_regenerateSlotSetKeyForBundleId:(id)arg1 ;
-(id)loadAppInfo;
-(void)writeActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11 appSessionStartDate:(id)arg12 appSessionEndDate:(id)arg13 geohash:(long long)arg14 coarseGeohash:(long long)arg15 ;
-(void)writeAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(void)_removeFeedbackForBundleId:(id)arg1 ;
-(id)loadAppActionInfo;
-(void)writeMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(long long)migration_removeAnchorModelDirectory;
-(id)filenamesAndDataForBackupShouldPareDown:(BOOL)arg1 ;
-(long long)migration_DeprecateGenericAppIntentModels;
-(void)updateOrInsertPredictionsAndFeedbackForAppAction:(id)arg1 feedbackReceived:(BOOL)arg2 forUIType:(id)arg3 ;
-(void)writeLaunches:(id)arg1 followingBundle:(id)arg2 ;
-(void)_enumerateAppInfoAppActionsExecutingBlock:(/*^block*/id)arg1 ;
-(id)histogramDataForHistogramType:(long long)arg1 ;
-(void)enumerateAppInfoBundlesExecutingBlock:(/*^block*/id)arg1 ;
-(void)updateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 isExtension:(BOOL)arg4 ;
-(void)_markBundleIdsAsExtension:(id)arg1 ;
-(long long)migration_overrideNilInstallDateToDistantOldTime;
-(void)enumerateActionOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)writeAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 ;
-(void)writeBlob:(id)arg1 type:(long long)arg2 expirationDate:(id)arg3 ;
-(void)addCategoricalHistogramData:(id)arg1 forHistogramOfType:(long long)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(void)insertSuggestionResponse:(id)arg1 response:(long long)arg2 timestamp:(long long)arg3 suggestionType:(long long)arg4 ;
-(void)_disconnectFromDb;
-(BOOL)_reset;
-(BOOL)restoreFromBackup:(id)arg1 ;
-(PASDBIterAction_)_deserializeActionLogRowWithStmt:(id)arg1 invokingBlock:(/*^block*/id)arg2 ;
-(id)filenamesAndDataForBackup;
-(id)actionAndSlotsForRowId:(id)arg1 ;
-(long long)migration_LaunchHistoriesToAppTable;
-(void)removeAllSlotsFromSlotSetKey;
-(void)writeSupportsBackgroundExecution:(BOOL)arg1 cacheKey:(id)arg2 ;
-(void)addAppActionLaunchForAppAction:(id)arg1 date:(id)arg2 ;
-(long long)migration_DelinkFromCoreLocationVisitMonitoring;
-(void)_testMigrateToSchema:(unsigned long long)arg1 ;
-(id)allActionsAndSlots;
-(id)isEligibleForWidgetsForCacheKey:(id)arg1 ;
-(id)_trimMigrationPlan:(id)arg1 toSchema:(unsigned long long)arg2 ;
-(long long)migration_forceUpdateNewAzulSystemAppsInstallDate;
-(void)updateOrInsertApp2VecCluster:(id)arg1 forBundleId:(id)arg2 ;
-(long long)migration_PrefillActionHistograms;
-(id)allAppsLaunchedOrInstalledWithin30Days;
-(BOOL)containsActionType:(id)arg1 ;
-(long long)migration_RemoveFeedbackForUninstalledApps;
-(void)_testMigrate;
-(void)clearAppLaunchInfo;
-(void)enumerateSlotUuidsOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)updateSchemaVersionNumberTo:(long long)arg1 ;
-(void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4 ;
-(id)lastLaunchDate;
-(void)setDeletionHighWaterMark:(id)arg1 ;
-(long long)currentSchemaVersion;
-(id)_databaseSchema;
-(void)deleteLaunchesFollowingAppAction:(id)arg1 ;
-(void)updateOrInsertAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(id)loadLaunchesFollowingBundle:(id)arg1 ;
-(long long)migration_RecreatePredictionFeedbackInfo;
-(void)clearDatabase;
-(BOOL)_removeActionsWithoutTitle;
-(unsigned long long)numActionKeyOccurrencesForActionKey:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(long long)updateAlog:(id)arg1 slotsToMigrate:(id)arg2 ;
-(void)addHistogramData:(id)arg1 forHistogramOfType:(long long)arg2 ;
-(void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4 app2VecCluster:(id)arg5 ;
-(id)init;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)writeValidParameterCombinationsWithSchema:(id)arg1 cacheKey:(id)arg2 ;
-(BOOL)alogContainsActionUUID:(id)arg1 ;
-(void)trimActionHistoryWithAppWhitelist:(id)arg1 ;
-(void)enumerateStateForApps:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 ;
-(void)migrateWithMigrationPlan:(id)arg1 ;
-(BOOL)hasOrphanSlotSetKeys;
-(void)pruneMessageRecipientsAddedBefore:(id)arg1 ;
-(long long)migration_removeOldStackStateTrackerFile;
-(long long)skipFromZeroSchema;
-(void)writeMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(long long)_regenerateSlotSetKeys;
-(void)updateOrInsertTimestamp:(long long)arg1 forAppAction:(id)arg2 ;
-(long long)migration_moveCacheFiles;
-(void)removeAllFeedback;
-(long long)migration_SlotSetKeyRegeneration;
-(id)deletionHighWaterMark;
-(long long)migration_RemoveActionsWithoutTitle;
-(void)deleteLaunchesFollowingBundle:(id)arg1 ;
-(void)updateOrInsertMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2 ;
-(void)updateOrInsertSubsequentAppActionLaunchCountData:(id)arg1 forAppAction:(id)arg2 ;
-(id)loadAppActionsFromAppActionInfo;
-(id)totalNumberOfActionTypesForBundleId:(id)arg1 ;
-(id)appIntentDuetEventsForActionsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)migrationPre44WriteActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11 ;
-(long long)migration_removeBrokenBlendingStream;
-(id)actionFeedbackLogKeys;
-(void)_doSync:(/*^block*/id)arg1 ;
-(long long)migration_updateNewAzulSystemAppsInstallDate;
-(unsigned long long)numActionParameterHashOccurrencesForActionKey:(id)arg1 parameterHash:(unsigned long long)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(void)removeAllAppActionPredictionFeedbackCounts;
-(long long)migration_AddExtensionInfo;
-(void)updateOrInsertHistogramData:(id)arg1 forHistogram:(long long)arg2 ;
-(long long)migration_AddFeedbackColumns;
-(long long)migration_RemoveDeprecatedStartCallIntents;
-(void)removeActionDataForBundleId:(id)arg1 ;
-(void)integrityCheckOrAbort;
-(void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(void)removeAppLaunchesForBundleId:(id)arg1 ;
-(void)addAppLaunchForAppLaunchSequence:(id)arg1 date:(id)arg2 ;
-(void)setActionHistoryLengthPerAppAction:(unsigned long long)arg1 ;
-(void)writeAppActionLaunches:(id)arg1 followingAppAction:(id)arg2 ;
-(long long)migration_failForTests;
-(id)minimalActionParametersforActionsBetweenStartDate:(id)arg1 endDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)medianSecondsBetweenAppActionsForAppAction:(id)arg1 ;
-(id)getSuggestionResponsesAsStringInDB;
-(long long)migration_DeprecateIntentForAllAppsHistograms;
-(id)actionForSlotUUID:(id)arg1 ;
-(void)removeActionsWithoutTitle;
-(id)supportsBackgroundExecutionForCacheKey:(id)arg1 ;
-(void)updateOrInsertMessageRecipient:(id)arg1 dateMessaged:(id)arg2 ;
-(void)updateOrInsertMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(void)regenerateSlotSetKeyForBundleId:(id)arg1 ;
-(void)recordConfirms:(double)arg1 rejects:(double)arg2 forFeedbackType:(unsigned long long)arg3 forActionType:(id)arg4 bundleId:(id)arg5 action:(id)arg6 slotSet:(id)arg7 actionUUID:(id)arg8 date:(id)arg9 consumerSubType:(unsigned char)arg10 geohash:(long long)arg11 coarseGeohash:(long long)arg12 ;
-(long long)migration_SlotSetKeyCreation;
-(long long)migration_RemoveCachedConsumerDB;
-(long long)runMigrationPlan:(id)arg1 ;
-(void)removeAllSlotsFromActionLog;
-(id)_allAppsRequireInstallDate:(BOOL)arg1 ;
-(void)updateOrInsertGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3 ;
-(long long)launchedAppCount;
-(long long)migration_RemoveAllSubsequentLaunches;
-(void)_doAsync:(/*^block*/id)arg1 ;
-(id)lastAppActionLaunchDateForAppAction:(id)arg1 ;
-(long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2 ;
-(void)enumerateFeedbackForActionOfType:(id)arg1 bundleId:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)nthMostRecentAppLaunch:(long long)arg1 ;
-(void)_markBundleIdAsExtension:(id)arg1 ;
-(id)lastSpotlightLaunchDate;
-(void)addAppLaunchForBundleId:(id)arg1 date:(id)arg2 withLaunchType:(long long)arg3 ;
-(void)clearAppInstallInfo;
-(void)swapInDuetHelperStub:(id)arg1 ;
-(id)initWithPath:(id)arg1 andDuetHelper:(id)arg2 ;
-(id)totalSlotsInDatastore;
-(void)_markBundleId:(id)arg1 asEnterpriseApp:(BOOL)arg2 ;
-(long long)configureDatabase;
-(void)enumerateActionsInUUIDSet:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)updateOrInsertAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2 ;
-(void)removeFeedbackForBundleId:(id)arg1 ;
-(void)writeApp2VecCluster:(id)arg1 forBundleId:(id)arg2 ;
-(void)_enumerateAppInfoBundlesExecutingBlock:(/*^block*/id)arg1 ;
-(void)enumerateActionTypesOlderThan:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)migration_InstallDateToAppTable;
-(id)validParameterCombinationsWithSchemaForCacheKey:(id)arg1 ;
-(void)enumerateStateForApps:(id)arg1 withGlobalBlock:(/*^block*/id)arg2 thenWithPerAppBlock:(/*^block*/id)arg3 readOnly:(BOOL)arg4 ;
-(id)lastMessageToRecipient:(id)arg1 ;
-(void)removeAppInfoForBundleIdsNotInSet:(id)arg1 ;
-(long long)migration_RemoveRestoreUserDefault;
-(id)numActionKeyOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)loadAppActionLaunchesFollowing:(id)arg1 ;
-(id)actionLogKeys;
-(void)removeAllCachedIntents;
-(void)writeEligibleForWidgets:(BOOL)arg1 cacheKey:(id)arg2 ;
-(void)writeWebClip:(id)arg1 appClip:(id)arg2 ;
-(void)removeCachedIntentsWithBundleId:(id)arg1 ;
-(void)removeActionDataForActionUUID:(id)arg1 ;
-(void)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2 ;
-(void)resetSuggestionResponses;
-(id)categoricalHistogramDataForHistogramType:(long long)arg1 ;
-(id)loadTopNAppActionsByPredictions:(unsigned long long)arg1 ;
-(id)allAppsWithInstallDate;
-(void)updateOrInsertCategoricalHistogramData:(id)arg1 forHistogram:(long long)arg2 ;
-(BOOL)writeSlotSetKeyParameters:(id)arg1 rowId:(id)arg2 slotSet:(id)arg3 success:(long long*)arg4 ;
@end
