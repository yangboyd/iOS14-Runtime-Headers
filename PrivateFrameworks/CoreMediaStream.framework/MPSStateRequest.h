/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying> {

	long long _originalLibrarySize;
	NSString* _backupDeviceID;
	NSString* _backupDeviceUDID;
	NSString* _backupDeviceUUID;
	NSString* _iCPLDeviceID;
	NSString* _mPSDeviceID;
	SCD_Struct_MP7 _has;

}

@property (nonatomic,readonly) BOOL hasMPSDeviceID; 
@property (nonatomic,retain) NSString * mPSDeviceID;                     //@synthesize mPSDeviceID=_mPSDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasICPLDeviceID; 
@property (nonatomic,retain) NSString * iCPLDeviceID;                    //@synthesize iCPLDeviceID=_iCPLDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupDeviceID; 
@property (nonatomic,retain) NSString * backupDeviceID;                  //@synthesize backupDeviceID=_backupDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupDeviceUUID; 
@property (nonatomic,retain) NSString * backupDeviceUUID;                //@synthesize backupDeviceUUID=_backupDeviceUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasBackupDeviceUDID; 
@property (nonatomic,retain) NSString * backupDeviceUDID;                //@synthesize backupDeviceUDID=_backupDeviceUDID - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalLibrarySize; 
@property (assign,nonatomic) long long originalLibrarySize;              //@synthesize originalLibrarySize=_originalLibrarySize - In the implementation block
-(NSString *)backupDeviceUDID;
-(NSString *)backupDeviceUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBackupDeviceUUID:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasMPSDeviceID;
-(BOOL)hasICPLDeviceID;
-(BOOL)hasBackupDeviceID;
-(BOOL)hasBackupDeviceUUID;
-(BOOL)hasBackupDeviceUDID;
-(void)setOriginalLibrarySize:(long long)arg1 ;
-(void)setHasOriginalLibrarySize:(BOOL)arg1 ;
-(BOOL)hasOriginalLibrarySize;
-(NSString *)mPSDeviceID;
-(void)setMPSDeviceID:(NSString *)arg1 ;
-(NSString *)iCPLDeviceID;
-(void)setICPLDeviceID:(NSString *)arg1 ;
-(NSString *)backupDeviceID;
-(void)setBackupDeviceID:(NSString *)arg1 ;
-(void)setBackupDeviceUDID:(NSString *)arg1 ;
-(long long)originalLibrarySize;
@end
