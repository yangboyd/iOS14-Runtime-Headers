/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEONavigabilityInfo, GEOTrafficBannerText, GEOTraversalTimes;

@interface GEOETATrafficUpdateWaypointRoute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _incidentsOnUserWaypointRoutes;
	GEONavigabilityInfo* _navigabilityInfo;
	NSMutableArray* _newWaypointRoutes;
	NSMutableArray* _routeLegs;
	GEOTrafficBannerText* _trafficBannerText;
	GEOTraversalTimes* _traversalTimes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	struct {
		unsigned has_identifier : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentsOnUserWaypointRoutes : 1;
		unsigned read_navigabilityInfo : 1;
		unsigned read_newWaypointRoutes : 1;
		unsigned read_routeLegs : 1;
		unsigned read_trafficBannerText : 1;
		unsigned read_traversalTimes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * routeLegs; 
@property (nonatomic,readonly) BOOL hasTraversalTimes; 
@property (nonatomic,retain) GEOTraversalTimes * traversalTimes; 
@property (nonatomic,retain) NSMutableArray * incidentsOnUserWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasTrafficBannerText; 
@property (nonatomic,retain) GEOTrafficBannerText * trafficBannerText; 
@property (nonatomic,retain) NSMutableArray * newWaypointRoutes; 
@property (nonatomic,readonly) BOOL hasNavigabilityInfo; 
@property (nonatomic,retain) GEONavigabilityInfo * navigabilityInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeLegType;
+(BOOL)isValid:(id)arg1 ;
+(Class)newWaypointRoutesType;
+(Class)incidentsOnUserWaypointRouteType;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(NSMutableArray *)newWaypointRoutes;
-(GEOTraversalTimes *)traversalTimes;
-(NSMutableArray *)routeLegs;
-(void)addRouteLeg:(id)arg1 ;
-(unsigned long long)routeLegsCount;
-(void)clearRouteLegs;
-(id)routeLegAtIndex:(unsigned long long)arg1 ;
-(void)setRouteLegs:(NSMutableArray *)arg1 ;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOTrafficBannerText *)trafficBannerText;
-(GEONavigabilityInfo *)navigabilityInfo;
-(void)readAll:(BOOL)arg1 ;
-(void)setTraversalTimes:(GEOTraversalTimes *)arg1 ;
-(BOOL)hasTraversalTimes;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)incidentsOnUserWaypointRoutes;
-(unsigned long long)hash;
-(void)setTrafficBannerText:(GEOTrafficBannerText *)arg1 ;
-(void)setNavigabilityInfo:(GEONavigabilityInfo *)arg1 ;
-(BOOL)hasTrafficBannerText;
-(BOOL)hasNavigabilityInfo;
-(void)addIncidentsOnUserWaypointRoute:(id)arg1 ;
-(void)addNewWaypointRoutes:(id)arg1 ;
-(unsigned long long)newWaypointRoutesCount;
-(unsigned long long)incidentsOnUserWaypointRoutesCount;
-(void)clearIncidentsOnUserWaypointRoutes;
-(void)clearNewWaypointRoutes;
-(id)incidentsOnUserWaypointRouteAtIndex:(unsigned long long)arg1 ;
-(id)newWaypointRoutesAtIndex:(unsigned long long)arg1 ;
-(void)setIncidentsOnUserWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)setNewWaypointRoutes:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
