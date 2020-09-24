/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _days;
	GEOWiFiQualityTimeRange* _timeRanges;
	unsigned long long _timeRangesCount;
	unsigned long long _timeRangesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) unsigned long long daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,readonly) unsigned long long timeRangesCount; 
@property (nonatomic,readonly) GEOWiFiQualityTimeRange* timeRanges; 
+(BOOL)isValid:(id)arg1 ;
-(int*)days;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addDays:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)daysCount;
-(void)clearDays;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDays:(int*)arg1 count:(unsigned long long)arg2 ;
-(GEOWiFiQualityTimeRange*)timeRanges;
-(unsigned long long)timeRangesCount;
-(void)clearTimeRanges;
-(void)addTimeRanges:(GEOWiFiQualityTimeRange)arg1 ;
-(int)daysAtIndex:(unsigned long long)arg1 ;
-(GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1 ;
-(id)daysAsString:(int)arg1 ;
-(int)StringAsDays:(id)arg1 ;
-(void)setTimeRanges:(GEOWiFiQualityTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
