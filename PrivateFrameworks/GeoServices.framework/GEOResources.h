/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributions;
	NSString* _authProxyURL;
	NSString* _authToken;
	NSString* _backgroundDispatcherURL;
	NSString* _backgroundRevGeoURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _batchTrafficProbeURL;
	NSString* _bluePOIDispatcherURL;
	NSString* _businessPortalBaseURL;
	NSMutableArray* _dataSetURLOverrides;
	NSMutableArray* _dataSets;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSMutableArray* _displayStrings;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	NSMutableArray* _locationShiftEnabledRegions;
	NSString* _logMessageUsageURL;
	NSString* _logMessageUsageV3URL;
	NSString* _muninBaseURL;
	NSMutableArray* _muninBuckets;
	NSMutableArray* _muninVersions;
	NSString* _polyLocationShiftURL;
	NSString* _proactiveRoutingURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSString* _realtimeTrafficProbeURL;
	NSMutableArray* _regionalResources;
	NSString* _releaseInfo;
	NSString* _resourcesURL;
	NSMutableArray* _resources;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _simpleETAURL;
	NSString* _spatialLookupURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSMutableArray* _urlInfoSets;
	GEOVersionManifest* _versionManifest;
	NSString* _wifiConnectionQualityProbeURL;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _locationShiftVersion;
	struct {
		unsigned has_locationShiftVersion : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abExperimentURL : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_announcementsSupportedLanguages : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_attributions : 1;
		unsigned read_authProxyURL : 1;
		unsigned read_authToken : 1;
		unsigned read_backgroundDispatcherURL : 1;
		unsigned read_backgroundRevGeoURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_batchTrafficProbeURL : 1;
		unsigned read_bluePOIDispatcherURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_dataSetURLOverrides : 1;
		unsigned read_dataSets : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_displayStrings : 1;
		unsigned read_etaURL : 1;
		unsigned read_fontChecksums : 1;
		unsigned read_fonts : 1;
		unsigned read_iconChecksums : 1;
		unsigned read_icons : 1;
		unsigned read_locationShiftEnabledRegions : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_logMessageUsageV3URL : 1;
		unsigned read_muninBaseURL : 1;
		unsigned read_muninBuckets : 1;
		unsigned read_muninVersions : 1;
		unsigned read_polyLocationShiftURL : 1;
		unsigned read_proactiveRoutingURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_realtimeTrafficProbeURL : 1;
		unsigned read_regionalResources : 1;
		unsigned read_releaseInfo : 1;
		unsigned read_resourcesURL : 1;
		unsigned read_resources : 1;
		unsigned read_reverseGeocoderVersionsURL : 1;
		unsigned read_searchAttributionManifestURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned read_styleSheetChecksums : 1;
		unsigned read_styleSheets : 1;
		unsigned read_textureChecksums : 1;
		unsigned read_textures : 1;
		unsigned read_tileGroups : 1;
		unsigned read_tileSets : 1;
		unsigned read_urlInfoSets : 1;
		unsigned read_versionManifest : 1;
		unsigned read_wifiConnectionQualityProbeURL : 1;
		unsigned read_xmlChecksums : 1;
		unsigned read_xmls : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * tileGroups; 
@property (nonatomic,retain) NSMutableArray * tileSets; 
@property (nonatomic,retain) NSMutableArray * styleSheets; 
@property (nonatomic,retain) NSMutableArray * textures; 
@property (nonatomic,retain) NSMutableArray * fonts; 
@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * regionalResources; 
@property (nonatomic,retain) NSMutableArray * xmls; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,readonly) BOOL hasAuthToken; 
@property (nonatomic,retain) NSString * authToken; 
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL; 
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL; 
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL; 
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL; 
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL; 
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL; 
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums; 
@property (nonatomic,retain) NSMutableArray * textureChecksums; 
@property (nonatomic,retain) NSMutableArray * fontChecksums; 
@property (nonatomic,retain) NSMutableArray * iconChecksums; 
@property (nonatomic,retain) NSMutableArray * xmlChecksums; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL; 
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL; 
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL; 
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL; 
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL; 
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL; 
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages; 
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL; 
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL; 
@property (nonatomic,readonly) BOOL hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest; 
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL; 
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL; 
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions; 
@property (assign,nonatomic) BOOL hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) NSString * spatialLookupURL; 
@property (nonatomic,retain) NSMutableArray * dataSets; 
@property (nonatomic,retain) NSMutableArray * dataSetURLOverrides; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeURL; 
@property (nonatomic,retain) NSString * realtimeTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeURL; 
@property (nonatomic,retain) NSString * batchTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasProactiveRoutingURL; 
@property (nonatomic,retain) NSString * proactiveRoutingURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageV3URL; 
@property (nonatomic,retain) NSString * logMessageUsageV3URL; 
@property (nonatomic,readonly) BOOL hasBackgroundDispatcherURL; 
@property (nonatomic,retain) NSString * backgroundDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBluePOIDispatcherURL; 
@property (nonatomic,retain) NSString * bluePOIDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBackgroundRevGeoURL; 
@property (nonatomic,retain) NSString * backgroundRevGeoURL; 
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeURL; 
@property (nonatomic,retain) NSString * wifiConnectionQualityProbeURL; 
@property (nonatomic,readonly) BOOL hasMuninBaseURL; 
@property (nonatomic,retain) NSString * muninBaseURL; 
@property (nonatomic,retain) NSMutableArray * muninVersions; 
@property (nonatomic,readonly) BOOL hasAuthProxyURL; 
@property (nonatomic,retain) NSString * authProxyURL; 
@property (nonatomic,retain) NSMutableArray * urlInfoSets; 
@property (nonatomic,retain) NSMutableArray * muninBuckets; 
@property (nonatomic,retain) NSMutableArray * displayStrings; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)textureType;
+(Class)resourceType;
+(Class)xmlType;
+(Class)iconType;
+(Class)fontType;
+(Class)attributionType;
+(Class)iconChecksumType;
+(Class)tileGroupType;
+(Class)tileSetType;
+(Class)styleSheetType;
+(Class)regionalResourceType;
+(Class)styleSheetChecksumType;
+(Class)fontChecksumType;
+(Class)textureChecksumType;
+(Class)xmlChecksumType;
+(Class)announcementsSupportedLanguagesType;
+(Class)dataSetType;
+(Class)locationShiftEnabledRegionType;
+(Class)dataSetURLOverrideType;
+(Class)muninVersionType;
+(Class)urlInfoSetType;
+(Class)muninBucketType;
+(Class)displayStringsType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasEtaURL;
-(BOOL)hasAbExperimentURL;
-(NSMutableArray *)displayStrings;
-(void)setProactiveRoutingURL:(NSString *)arg1 ;
-(void)clearXmlChecksums;
-(void)clearRegionalResources;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fonts;
-(unsigned long long)iconChecksumsCount;
-(void)addTextureChecksum:(id)arg1 ;
-(NSMutableArray *)xmlChecksums;
-(void)addXmlChecksum:(id)arg1 ;
-(unsigned long long)xmlChecksumsCount;
-(NSString *)etaURL;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(NSMutableArray *)tileSets;
-(id)textureChecksumAtIndex:(unsigned long long)arg1 ;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addFont:(id)arg1 ;
-(BOOL)hasBluePOIDispatcherURL;
-(NSString *)dispatcherURL;
-(unsigned long long)tileSetsCount;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)setHasLocationShiftVersion:(BOOL)arg1 ;
-(id)xmlAtIndex:(unsigned long long)arg1 ;
-(void)addStyleSheet:(id)arg1 ;
-(void)setMuninBaseURL:(NSString *)arg1 ;
-(NSString *)problemStatusURL;
-(NSString *)announcementsURL;
-(void)clearXmls;
-(NSMutableArray *)styleSheetChecksums;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(BOOL)hasLocationShiftVersion;
-(BOOL)hasMuninBaseURL;
-(NSMutableArray *)xmls;
-(void)addIcon:(id)arg1 ;
-(void)clearStyleSheets;
-(unsigned long long)fontsCount;
-(NSString *)reverseGeocoderVersionsURL;
-(BOOL)hasAuthProxyURL;
-(BOOL)hasLogMessageUsageURL;
-(void)setWifiConnectionQualityProbeURL:(NSString *)arg1 ;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(BOOL)hasPolyLocationShiftURL;
-(void)setAuthProxyURL:(NSString *)arg1 ;
-(void)setResourcesURL:(NSString *)arg1 ;
-(NSString *)directionsURL;
-(void)clearMuninBuckets;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(id)textureAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDispatcherURL;
-(void)clearTextures;
-(BOOL)hasBatchReverseGeocoderURL;
-(void)setBluePOIDispatcherURL:(NSString *)arg1 ;
-(BOOL)hasProactiveRoutingURL;
-(NSMutableArray *)muninBuckets;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(unsigned long long)displayStringsCount;
-(BOOL)hasResourcesURL;
-(NSMutableArray *)iconChecksums;
-(NSMutableArray *)regionalResources;
-(NSString *)spatialLookupURL;
-(BOOL)hasLogMessageUsageV3URL;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(BOOL)hasProblemCategoriesURL;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(NSString *)batchReverseGeocoderURL;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(NSString *)muninBaseURL;
-(void)addDataSet:(id)arg1 ;
-(NSString *)bluePOIDispatcherURL;
-(NSString *)problemSubmissionURL;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)styleSheetsCount;
-(void)clearDisplayStrings;
-(NSMutableArray *)textures;
-(void)setBackgroundDispatcherURL:(NSString *)arg1 ;
-(void)clearTileSets;
-(void)clearIcons;
-(unsigned long long)muninVersionsCount;
-(NSString *)simpleETAURL;
-(void)addTileSet:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(unsigned long long)iconsCount;
-(NSMutableArray *)icons;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)urlInfoSetsCount;
-(NSString *)authToken;
-(NSMutableArray *)styleSheets;
-(id)muninBucketAtIndex:(unsigned long long)arg1 ;
-(void)clearTileGroups;
-(id)xmlChecksumAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributions;
-(void)addMuninVersion:(id)arg1 ;
-(void)setDataSets:(NSMutableArray *)arg1 ;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)addResource:(id)arg1 ;
-(NSString *)wifiConnectionQualityProbeURL;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(NSMutableArray *)attributions;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(id)urlInfoSetAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)proactiveRoutingURL;
-(BOOL)hasProblemOptInURL;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(void)addDataSetURLOverride:(id)arg1 ;
-(void)setDataSetURLOverrides:(NSMutableArray *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(unsigned long long)regionalResourcesCount;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(id)dataSetAtIndex:(unsigned long long)arg1 ;
-(void)addTileGroup:(id)arg1 ;
-(NSString *)backgroundDispatcherURL;
-(NSString *)logMessageUsageURL;
-(BOOL)hasSearchAttributionManifestURL;
-(unsigned long long)resourcesCount;
-(BOOL)hasBatchTrafficProbeURL;
-(void)addXml:(id)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(BOOL)hasAddressCorrectionInitURL;
-(NSMutableArray *)tileGroups;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)addMuninBucket:(id)arg1 ;
-(id)jsonRepresentation;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(NSString *)batchTrafficProbeURL;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(NSString *)authProxyURL;
-(id)preferredDataSetForClientDatasetMetadata:(id)arg1 ;
-(NSString *)problemCategoriesURL;
-(BOOL)hasRealtimeTrafficProbeURL;
-(unsigned long long)textureChecksumsCount;
-(void)clearStyleSheetChecksums;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(NSString *)realtimeTrafficProbeURL;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(NSMutableArray *)announcementsSupportedLanguages;
-(void)setResources:(NSMutableArray *)arg1 ;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasBackgroundDispatcherURL;
-(id)styleSheetAtIndex:(unsigned long long)arg1 ;
-(void)clearResources;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)clearDataSetURLOverrides;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataSetURLOverrides;
-(unsigned long long)dataSetURLOverridesCount;
-(void)setRegionalResources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)dataSets;
-(void)addRegionalResource:(id)arg1 ;
-(id)init;
-(id)displayStringsAtIndex:(unsigned long long)arg1 ;
-(id)preferredDataSetForMapsABClient;
-(NSMutableArray *)resources;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(NSMutableArray *)urlInfoSets;
-(id)regionalResourceAtIndex:(unsigned long long)arg1 ;
-(void)convertFromLegacyFormat;
-(id)muninVersionAtIndex:(unsigned long long)arg1 ;
-(NSString *)businessPortalBaseURL;
-(void)clearFontChecksums;
-(void)mergeFrom:(id)arg1 ;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(NSString *)problemOptInURL;
-(void)clearUrlInfoSets;
-(NSString *)releaseInfo;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontChecksumsCount;
-(void)copyTo:(id)arg1 ;
-(id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearDataSets;
-(NSMutableArray *)muninVersions;
-(unsigned long long)locationShiftEnabledRegionsCount;
-(void)clearFonts;
-(BOOL)hasAddressCorrectionUpdateURL;
-(void)setDisplayStrings:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)abExperimentURL;
-(void)clearMuninVersions;
-(NSString *)addressCorrectionUpdateURL;
-(void)addUrlInfoSet:(id)arg1 ;
-(void)clearAnnouncementsSupportedLanguages;
-(void)setUrlInfoSets:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)textureChecksums;
-(unsigned)locationShiftVersion;
-(NSString *)backgroundRevGeoURL;
-(BOOL)hasAnnouncementsURL;
-(void)setMuninBuckets:(NSMutableArray *)arg1 ;
-(BOOL)hasAuthToken;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(void)setRealtimeTrafficProbeURL:(NSString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)clearTextureChecksums;
-(unsigned long long)announcementsSupportedLanguagesCount;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(unsigned long long)styleSheetChecksumsCount;
-(NSString *)resourcesURL;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(BOOL)isValid;
-(BOOL)hasVersionManifest;
-(BOOL)hasReverseGeocoderVersionsURL;
-(BOOL)hasWifiConnectionQualityProbeURL;
-(NSMutableArray *)locationShiftEnabledRegions;
-(void)setBackgroundRevGeoURL:(NSString *)arg1 ;
-(unsigned long long)muninBucketsCount;
-(BOOL)hasBackgroundRevGeoURL;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(unsigned long long)hash;
-(GEOVersionManifest *)versionManifest;
-(id)styleSheetChecksumAtIndex:(unsigned long long)arg1 ;
-(void)clearIconChecksums;
-(BOOL)hasSpatialLookupURL;
-(void)clearLocationShiftEnabledRegions;
-(void)setBatchTrafficProbeURL:(NSString *)arg1 ;
-(NSString *)polyLocationShiftURL;
-(unsigned long long)xmlsCount;
-(id)tileGroupAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)texturesCount;
-(id)fontChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataSetsCount;
-(BOOL)hasReleaseInfo;
-(void)setTileGroups:(NSMutableArray *)arg1 ;
-(unsigned long long)tileGroupsCount;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)searchAttributionManifestURL;
-(id)description;
-(NSMutableArray *)fontChecksums;
-(BOOL)hasDirectionsURL;
-(BOOL)hasProblemStatusURL;
-(id)dataSetURLOverrideAtIndex:(unsigned long long)arg1 ;
-(id)preferedURLSetFor:(id)arg1 ;
-(BOOL)hasSimpleETAURL;
-(void)addDisplayStrings:(id)arg1 ;
-(void)addTexture:(id)arg1 ;
-(void)setMuninVersions:(NSMutableArray *)arg1 ;
-(void)setLogMessageUsageV3URL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)addressCorrectionInitURL;
-(NSString *)logMessageUsageV3URL;
@end
