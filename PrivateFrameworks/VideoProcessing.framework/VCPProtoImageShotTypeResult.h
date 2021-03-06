/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageShotTypeResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	int _shotType;

}

@property (assign,nonatomic) int shotType;              //@synthesize shotType=_shotType - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)shotType;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShotType:(int)arg1 ;
-(id)exportToLegacyDictionary;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

