/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, UIImage, NSDictionary, NSArray, NSURL;

@interface NSBundle : NSObject {

	unsigned long long _flags;
	A{__CFBundle}* _cfBundle;
	unsigned long long _reserved2;
	Class _principalClass;
	id _initialPath;
	id _resolvedPath;
	NSString* _firstClassName;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) CCUILayoutSize ccui_prototypeModuleSize; 
@property (nonatomic,readonly) BOOL wf_isWidgetConfigurationExtensionBundle; 
@property (nonatomic,readonly) BOOL ic_isAppExtension; 
@property (nonatomic,readonly) UIImage * icon; 
@property (getter=wf_entitlements,nonatomic,readonly) NSDictionary * entitlements; 
@property (getter=wf_teamIdentifier,nonatomic,readonly) NSString * teamIdentifier; 
@property (getter=wf_apsEnvironment,nonatomic,readonly) NSString * apsEnvironment; 
@property (getter=wf_applicationGroups,nonatomic,readonly) NSArray * applicationGroups; 
@property (getter=wf_keychainAccessGroups,nonatomic,readonly) NSArray * keychainAccessGroups; 
@property (nonatomic,copy,readonly) NSString * safari_normalizedVersion; 
@property (nonatomic,readonly) BOOL safari_isSafariFamilyApplicationBundle; 
@property (copy,readonly) NSArray * normalizedLocalizations; 
@property (getter=isLoaded,readonly) BOOL loaded; 
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * resourceURL; 
@property (copy,readonly) NSURL * executableURL; 
@property (copy,readonly) NSURL * privateFrameworksURL; 
@property (copy,readonly) NSURL * sharedFrameworksURL; 
@property (copy,readonly) NSURL * sharedSupportURL; 
@property (copy,readonly) NSURL * builtInPlugInsURL; 
@property (copy,readonly) NSURL * appStoreReceiptURL; 
@property (copy,readonly) NSString * bundlePath; 
@property (copy,readonly) NSString * resourcePath; 
@property (copy,readonly) NSString * executablePath; 
@property (copy,readonly) NSString * privateFrameworksPath; 
@property (copy,readonly) NSString * sharedFrameworksPath; 
@property (copy,readonly) NSString * sharedSupportPath; 
@property (copy,readonly) NSString * builtInPlugInsPath; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSDictionary * infoDictionary; 
@property (copy,readonly) NSDictionary * localizedInfoDictionary; 
@property (readonly) Class principalClass; 
@property (copy,readonly) NSArray * preferredLocalizations; 
@property (copy,readonly) NSArray * localizations; 
@property (copy,readonly) NSString * developmentLocalization; 
@property (copy,readonly) NSArray * executableArchitectures; 
+(id)hkmcui_bundle;
+(id)sh_UIBundle;
+(id)vui_videosUIBundle;
+(id)_screenshotServicesServiceBundle;
+(id)tsa_templatesMetadataURL;
+(id)tsa_templatesMetadataBundle;
+(id)tsu_resourcesBundle;
+(id)dndk_localizationBundle;
+(id)jfxBundle;
+(id)skui_bundleForAuthorizationService:(id)arg1 ;
+(id)skui_viewServiceBundle;
+(id)mediaControlsBundle;
+(id)nanoMediaBridgeUIBundle;
+(id)nanoMusicSyncBundle;
+(id)afui_assistantUIFrameworkBundle;
+(id)nanoMediaRemoteBundle;
+(id)cps_clipUIServicesBundle;
+(id)localizedString:(id)arg1 ;
+(float)localizedValue:(id)arg1 ;
+(BOOL)_gkMainBundleIsGameCenterSystemProcess;
+(id)_gkBundleWithIdentifier:(id)arg1 ;
+(id)_gkLocalizedMessageFromDictionary:(id)arg1 ;
+(id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 ;
+(id)_gkLocalizedMessageFromPushDictionary:(id)arg1 forBundleID:(id)arg2 ;
+(id)mediaPlayerUIBundle;
+(id)saml_frameworkBundle;
+(id)ccui_bundleForModuleInstance:(id)arg1 ;
+(id)asc_frameworkBundle;
+(id)asc_realMainBundle;
+(id)asc_localizedStringKeyPlatformSuffix;
+(id)mediaPlaybackCoreBundle;
+(id)pk_PlacesKitFrameworkBundle;
+(id)HLPBundle;
+(void)removeHLPBundle;
+(id)sk_bundleWithIdentifier:(id)arg1 partnerAppDirectoryURL:(id)arg2 ;
+(id)sk_bundleWithIdentifier:(id)arg1 ;
+(id)pu_PhotosUIFrameworkBundle;
+(id)px_bundle;
+(id)vcp_mediaAnalysisBundle;
+(id)accessibilityLocalBundleWithLastPathComponent:(id)arg1 ;
+(id)accessibilityInternalBundleWithLastPathComponent:(id)arg1 ;
+(id)accessibilityBundleWithLastPathComponent:(id)arg1 ;
+(id)fallbackBundle;
+(id)localizedBundle;
+(id)_rpFrameworkBundle;
+(id)executablePathWithPID:(int)arg1 ;
+(id)_rpLocalizedAppNameFromBundleID:(id)arg1 ;
+(id)_rpLocalizedStringFromFrameworkBundleWithKey:(id)arg1 ;
+(id)baseIdentifier:(id)arg1 ;
+(id)bundleWithPID:(int)arg1 ;
+(id)brailleDriverBundleWithIdentifier:(id)arg1 ;
+(id)brailleDriverDeviceDetectionInfo;
+(id)brailleDriverBundles;
+(id)_brailleTableBundles;
+(id)brailleTableBundleWithTableIdentifier:(id)arg1 ;
+(id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1 ;
+(BOOL)doesBrailleTableSupportContractions:(id)arg1 ;
+(BOOL)doesBrailleTableSupportEightDot:(id)arg1 ;
+(id)languageIdentifiersForBrailleTableIdentifier:(id)arg1 ;
+(id)coreFrameworkBundle;
+(id)screenReaderFrameworkBundle;
+(id)localizedCoreStringForKey:(id)arg1 ;
+(id)localizedScreenReaderStringForKey:(id)arg1 table:(id)arg2 ;
+(id)localeForString:(id)arg1 ;
+(id)brl_brailleTableBundleWithIdentifier:(id)arg1 ;
+(id)fc_feldsparCoreInternalExtrasBundle;
+(BOOL)mainBundleRequiresStatusBarHidden;
+(BOOL)mainBundleSupportsBackgroundAudio;
+(id)tps_bundleWithPath:(id)arg1 ;
+(id)_sf_safariServicesBundle;
+(BOOL)_sf_isWebSheetApplicationBundle;
+(BOOL)_sf_isSafariViewServiceBundle;
+(id)safari_safariSharedBundle;
+(id)pathForITunesResource:(id)arg1 ofType:(id)arg2 ;
+(id)dnd_locationBundle;
+(id)vs_bundleForProcessIdentifier:(int)arg1 ;
+(id)vs_frameworkBundle;
+(id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2 ;
+(id)mediaPlayerBundle;
+(id)_mapkitBundle;
+(BOOL)_navigation_isRunningInSiri;
+(id)_navigationBundle;
+(BOOL)_navigation_implementsSiriMethod;
+(id)pr_personaUIBundle;
+(id)hk_findContainedBundleWithIdentifier:(id)arg1 directoryURL:(id)arg2 ;
+(id)_coreroutine_LocalizedStringForKey:(id)arg1 ;
+(id)_coreroutineBundle;
+(id)_swift_bundleWithExecutablePath:(const char*)arg1 ;
+(id)__IS__iconsetResourceBundle;
+(id)__IS__frameworkBundle;
+(id)__IS__iconsetResourceAssetsCatalogURL;
+(id)__IS__frameworkLocalizedString:(id)arg1 ;
+(id)currentNibPath;
+(void)popNibPath;
+(void)pushNibPath:(id)arg1 ;
+(id)currentNibLoadingBundle;
+(void)popNibLoadingBundle;
+(void)pushNibLoadingBundle:(id)arg1 ;
+(id)__vkBundle;
+(id)coreMaterialBundle;
+(id)safari_safariCoreBundle;
+(id)safari_safariApplicationPlatformBundleIdentifier;
+(id)ams_AppleMediaServicesBundle;
+(id)ams_MusicBundle;
+(id)userNotificationsBundleWithIdentifier:(id)arg1 ;
+(id)un_safeBundleWithURL:(id)arg1 ;
+(id)__geoBundle;
+(id)bundleForClass:(Class)arg1 ;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
+(id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7 ;
+(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(id)bundleWithPath:(id)arg1 ;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
+(id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2 ;
+(id)allBundles;
+(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2 ;
+(id)preferredLocalizationsFromArray:(id)arg1 ;
+(id)mainBundle;
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)debugDescription;
+(id)loadedBundles;
+(id)allFrameworks;
+(id)bundleWithURL:(id)arg1 ;
+(void)setSystemLanguages:(id)arg1 ;
-(id)businessBundle;
-(id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4 ;
-(id)tv_imageNamed:(id)arg1 ;
-(id)tv_launchImage;
-(id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4 ;
-(CCUILayoutSize)ccui_prototypeModuleSize;
-(BOOL)wf_isWidgetConfigurationExtensionBundle;
-(id)mediaControls_localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)assistantUILocale;
-(id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4 ;
-(id)_assistantUIlocalizationArrayForLanguageCode:(id)arg1 ;
-(id)_assistantUIStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localizationLanguageCode:(id)arg4 ;
-(BOOL)assistantLanguageIsRTL;
-(id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2 ;
-(id)assistantUILocalizedStringFromSystemLanguageForKey:(id)arg1 table:(id)arg2 ;
-(id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)siriUILocalizedStringForKey:(id)arg1 ;
-(id)matchingPlaybackAppBundleIdentifierForOrigin:(id)arg1 ;
-(BOOL)ic_isAppExtension;
-(id)_gkPathForMessageImage;
-(BOOL)_gkIsPreferences;
-(BOOL)_gkIsFirstParty;
-(id)_gkBundleVersion;
-(id)_gkBundleShortVersion;
-(id)_gkLocalizedName;
-(id)_gkFrameworkVersionDescription;
-(id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4 ;
-(id)_gkSystemLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3 ;
-(BOOL)_gkIsGameCenter;
-(BOOL)_gkIsGameCenterExtension;
-(BOOL)_gkIsDaemon;
-(id)_gkPathForImageWithName:(id)arg1 ;
-(id)_gkPathForSoundWithName:(id)arg1 ;
-(id)_gkLocalizedStringFromLocaleName:(id)arg1 key:(id)arg2 tableName:(id)arg3 value:(id)arg4 ;
-(BOOL)_gkIsBadgingEnabled;
-(id)_gkPathForInviteSound;
-(id)_gkPathForChallengeSound;
-(id)_gkPreferredLanguage;
-(void)ccui_associateWithModuleInstance:(id)arg1 ;
-(id)ccui_displayName;
-(id)PKSanitizedBundleIdentifier;
-(id)__asc_localizedStringForKey:(id)arg1 inTable:(id)arg2 withLanguage:(id)arg3 ;
-(UIImage *)icon;
-(id)sk_appName;
-(id)sk_usageDescription;
-(id)sk_privacyURL;
-(id)sk_perCategoryDetailDescription;
-(id)sk_studyName;
-(id)sk_requiredCategories;
-(BOOL)sk_validateInfoPlistForSensors:(id)arg1 error:(id*)arg2 ;
-(id)accessibilityBundlePath;
-(void)_loadAXBundleForBundleOffMainThread;
-(id)ar_pathForPrivateResource:(id)arg1 ofType:(id)arg2 ;
-(id)ar_pathForPrivateResourceBundlePath;
-(id)_rpLocalizedAppName;
-(id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1 ;
-(id)bundleLocale;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 locale:(id)arg3 ;
-(id)brl_supportedTablesForLocale:(id)arg1 ;
-(id)brl_supportedLocales;
-(id)brl_languageAgnosticTables;
-(id)brl_brailleTablesDictionary;
-(BOOL)brl_tableIsLanguageAgnosticWithIdentifier:(id)arg1 ;
-(id)brl_supportedLocalesForTableWithIdentifier:(id)arg1 ;
-(id)bsui_imageForIconInfo:(BCUIIconImageInfo)arg1 ;
-(id)wf_entitlements;
-(id)wf_teamIdentifier;
-(id)wf_apsEnvironment;
-(id)wf_applicationGroups;
-(id)wf_keychainAccessGroups;
-(id)ql_applicationName;
-(id)suic_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)suic_localizedStringForKey:(id)arg1 table:(id)arg2 ;
-(id)suic_localizedStringForKey:(id)arg1 ;
-(BOOL)safari_primaryLocalizationIsEnglish;
-(id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3 ;
-(id)cat_localizedStringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(BOOL)ph_isFirstPartyBundle;
-(id)_mapkit_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)_navigation_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)hk_name;
-(id)hk_findContainedBundleWithIdentifier:(id)arg1 ;
-(id)hk_extensionPointIdentifier;
-(id)hk_displayName;
-(id)hk_localizedResearchStudyUsageDescription;
-(id)hk_localizedWriteAuthorizationUsageDescription;
-(id)hk_localizedReadAuthorizationUsageDescription;
-(id)hk_localizedClinicalReadAuthorizationUsageDescription;
-(id)imageForResource:(id)arg1 size:(CGSize)arg2 ;
-(id)URLForMovieResource:(id)arg1 ;
-(id)dataForResourceName:(id)arg1 ;
-(id)_preferredEnglishLocalizationBundle;
-(id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3 ;
-(id)URLForMaterialRecipe:(id)arg1 ;
-(id)URLsForMaterialRecipes;
-(id)URLForMaterialRecipeDescendant:(id)arg1 ;
-(id)URLsForMaterialRecipeDescendants;
-(id)URLForVisualStyleSet:(id)arg1 ;
-(id)URLsForVisualStyleSets;
-(id)URLForVisualStyleSetDescendant:(id)arg1 ;
-(NSString *)safari_normalizedVersion;
-(BOOL)safari_isSafariFamilyApplicationBundle;
-(NSArray *)normalizedLocalizations;
-(id)_cachedMainBundleResourcePath;
-(id)localizedStringInDeviceLanguageForKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)isLoaded;
-(BOOL)unload;
-(id)initWithURL:(id)arg1 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(void)__static;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4 ;
-(NSURL *)bundleURL;
-(BOOL)load;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(CFBundleRef)_cfBundle;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4 ;
-(NSDictionary *)localizedInfoDictionary;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4 ;
-(NSURL *)appStoreReceiptURL;
-(BOOL)_searchForLocalizedString:(id)arg1 foundKey:(id*)arg2 foundTable:(id*)arg3 ;
-(id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4 ;
-(NSString *)bundlePath;
-(id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4 ;
-(NSDictionary *)infoDictionary;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
-(NSString *)executablePath;
-(NSString *)bundleIdentifier;
-(Class)classNamed:(id)arg1 ;
-(NSString *)resourcePath;
-(NSArray *)preferredLocalizations;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)versionNumber;
-(id)_regionsArray;
-(id)URLForAuxiliaryExecutable:(id)arg1 ;
-(id)bundleLanguages;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(id)pathForAuxiliaryExecutable:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTag:(id)arg2 ;
-(id)_wrappedBundleURL;
-(NSString *)sharedSupportPath;
-(NSURL *)builtInPlugInsURL;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(id)_wrapperContainerURL;
-(NSURL *)privateFrameworksURL;
-(NSString *)sharedFrameworksPath;
-(BOOL)preflightAndReturnError:(id*)arg1 ;
-(NSURL *)executableURL;
-(CFBundleRef)_cfBundleIfPresent;
-(NSString *)builtInPlugInsPath;
-(NSURL *)sharedSupportURL;
-(double)preservationPriorityForTag:(id)arg1 ;
-(NSString *)privateFrameworksPath;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(BOOL)loadAndReturnError:(id*)arg1 ;
-(NSURL *)sharedFrameworksURL;
-(void)invalidateResourceCache;
-(NSString *)developmentLocalization;
-(NSArray *)executableArchitectures;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(NSArray *)localizations;
-(id)description;
-(Class)principalClass;
-(NSURL *)resourceURL;
@end

