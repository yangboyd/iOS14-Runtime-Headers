/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPSearchMatcher, NSRecursiveLock, NSDate, ALSCGreenClient;

@interface ALCityManager : NSObject {

	sqlite3Ref _db;
	sqlite3Ref _localizedDb;
	CPSearchMatcher* _citySearchMatcher;
	NSRecursiveLock* _databaseAccessRecursiveLock;
	BOOL _greenKey1ValueCache;
	BOOL _greenKey2ValueCache;
	BOOL _greenKey3ValueCache;
	NSDate* _greenKeyValueCacheExpirationDate;
	ALSCGreenClient* _greenClient;

}

@property (readonly) CPSearchMatcher * citySearchMatcher;              //@synthesize citySearchMatcher=_citySearchMatcher - In the implementation block
+(id)_localeDictionaryFromSQLRow:(char**)arg1 ;
+(id)sharedManager;
+(CFArrayRef)legacyCityForCity:(id)arg1 ;
+(id)newCitiesByIdentifierMap:(id)arg1 ;
-(id)defaultCitiesForLocaleCode:(id)arg1 ;
-(void)_whileDatabaseLocked_modifyCityForGreen:(id)arg1 ;
-(id)cityForClassicIdentifier:(id)arg1 ;
-(id)_defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(void)_whileDatabaseLocked_ensureGreenKeyValueCaches;
-(id)allLocales;
-(id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2 ;
-(void)dealloc;
-(id)_cityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)arg1 ;
-(id)defaultCityForTimeZone:(id)arg1 localeCode:(id)arg2 ;
-(id)defaultCityForTimeZone:(id)arg1 ;
-(id)init;
-(id)defaultCitiesShownInWorldClock;
-(id)_cityForClassicIdentifier:(id)arg1 commaSearchOptions:(unsigned long long)arg2 ;
-(void)localizeCities:(id)arg1 ;
-(id)allCities;
-(id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2 ;
-(id)citiesMatchingQualifier:(id)arg1 ;
-(id)citiesWithIdentifiers:(id)arg1 ;
-(CPSearchMatcher *)citySearchMatcher;
-(id)citiesMatchingName:(id)arg1 ;
-(id)localeWithCode:(id)arg1 ;
-(id)citiesWithTimeZone:(id)arg1 ;
-(id)bestCityForLegacyCity:(CFArrayRef)arg1 ;
@end

