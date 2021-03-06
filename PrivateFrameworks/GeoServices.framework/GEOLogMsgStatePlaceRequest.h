/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying> {

	GEOPDPlaceRequest* _placeDataRequest;
	int _placeRequestType;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType; 
@property (nonatomic,readonly) BOOL hasPlaceDataRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeDataRequest; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPlaceRequestType;
-(BOOL)readFrom:(id)arg1 ;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(id)jsonRepresentation;
-(GEOPDPlaceRequest *)placeDataRequest;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(void)setPlaceDataRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(int)placeRequestType;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceDataRequest;
-(id)description;
-(id)dictionaryRepresentation;
@end

