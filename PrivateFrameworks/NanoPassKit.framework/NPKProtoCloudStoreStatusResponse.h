/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying> {

	NSData* _accountInfoData;
	NSData* _errorData;
	BOOL _cloudStoreIsSetup;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                           //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountInfoData; 
@property (nonatomic,retain) NSData * accountInfoData;               //@synthesize accountInfoData=_accountInfoData - In the implementation block
@property (assign,nonatomic) BOOL hasCloudStoreIsSetup; 
@property (assign,nonatomic) BOOL cloudStoreIsSetup;                 //@synthesize cloudStoreIsSetup=_cloudStoreIsSetup - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                     //@synthesize errorData=_errorData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)pending;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)errorData;
-(void)setErrorData:(NSData *)arg1 ;
-(BOOL)hasErrorData;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setAccountInfoData:(NSData *)arg1 ;
-(BOOL)hasAccountInfoData;
-(void)setCloudStoreIsSetup:(BOOL)arg1 ;
-(void)setHasCloudStoreIsSetup:(BOOL)arg1 ;
-(BOOL)hasCloudStoreIsSetup;
-(NSData *)accountInfoData;
-(BOOL)cloudStoreIsSetup;
@end
