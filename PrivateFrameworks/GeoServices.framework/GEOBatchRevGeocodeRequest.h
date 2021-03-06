/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _additionalPlaceTypes;
	NSString* _deviceCountryCode;
	NSString* _deviceSku;
	NSString* _displayRegion;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_additionalPlaceTypes : 1;
		unsigned read_deviceCountryCode : 1;
		unsigned read_deviceSku : 1;
		unsigned read_displayRegion : 1;
		unsigned read_locations : 1;
		unsigned read_serviceTags : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,readonly) BOOL hasDeviceSku; 
@property (nonatomic,retain) NSString * deviceSku; 
@property (nonatomic,retain) NSMutableArray * serviceTags; 
+(BOOL)isValid:(id)arg1 ;
+(Class)serviceTagType;
+(Class)locationType;
-(Class)responseClass;
-(void)setDeviceSku:(NSString *)arg1 ;
-(void)addLocation:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSMutableArray *)serviceTags;
-(BOOL)hasDeviceSku;
-(NSString *)deviceCountryCode;
-(void)addServiceTag:(id)arg1 ;
-(void)clearLocations;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)serviceTagsCount;
-(unsigned)requestTypeCode;
-(void)clearServiceTags;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(NSString *)displayRegion;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)deviceSku;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locations;
-(void)dealloc;
-(id)jsonRepresentation;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)clearSensitiveFields;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(int*)additionalPlaceTypes;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)locationsCount;
-(id)description;
-(id)dictionaryRepresentation;
@end

