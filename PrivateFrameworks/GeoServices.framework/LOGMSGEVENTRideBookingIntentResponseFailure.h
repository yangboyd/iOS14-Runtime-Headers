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

@interface LOGMSGEVENTRideBookingIntentResponseFailure : PBCodable <NSCopying> {

	int _failure;
	int _intent;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasIntent; 
@property (assign,nonatomic) int intent; 
@property (assign,nonatomic) BOOL hasFailure; 
@property (assign,nonatomic) int failure; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)failure;
-(void)setIntent:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFailure:(int)arg1 ;
-(id)jsonRepresentation;
-(int)intent;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIntent;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasFailure;
-(unsigned long long)hash;
-(void)setHasIntent:(BOOL)arg1 ;
-(id)intentAsString:(int)arg1 ;
-(int)StringAsIntent:(id)arg1 ;
-(void)setHasFailure:(BOOL)arg1 ;
-(id)failureAsString:(int)arg1 ;
-(int)StringAsFailure:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
