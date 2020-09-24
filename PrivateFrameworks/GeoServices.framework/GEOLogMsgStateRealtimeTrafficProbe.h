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

@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {

	long long _recvTime;
	NSString* _tripId;
	int _probeCount;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasTripId; 
@property (nonatomic,retain) NSString * tripId; 
@property (assign,nonatomic) BOOL hasRecvTime; 
@property (assign,nonatomic) long long recvTime; 
@property (assign,nonatomic) BOOL hasProbeCount; 
@property (assign,nonatomic) int probeCount; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)tripId;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasProbeCount;
-(void)setRecvTime:(long long)arg1 ;
-(long long)recvTime;
-(BOOL)hasRecvTime;
-(void)setHasRecvTime:(BOOL)arg1 ;
-(void)setHasProbeCount:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(int)probeCount;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTripId;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTripId:(NSString *)arg1 ;
-(id)description;
-(void)setProbeCount:(int)arg1 ;
-(id)dictionaryRepresentation;
@end
