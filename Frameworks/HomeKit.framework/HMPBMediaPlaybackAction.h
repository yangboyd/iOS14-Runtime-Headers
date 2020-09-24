/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface HMPBMediaPlaybackAction : PBCodable <NSCopying> {

	NSData* _actionUUID;
	int _mediaPlaybackState;
	NSMutableArray* _mediaProfiles;
	NSData* _playbackArchive;
	NSData* _volume;
	SCD_Struct_HM1 _has;

}

@property (nonatomic,readonly) BOOL hasActionUUID; 
@property (nonatomic,retain) NSData * actionUUID;                         //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * mediaProfiles;              //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlaybackState; 
@property (assign,nonatomic) int mediaPlaybackState;                      //@synthesize mediaPlaybackState=_mediaPlaybackState - In the implementation block
@property (nonatomic,readonly) BOOL hasVolume; 
@property (nonatomic,retain) NSData * volume;                             //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackArchive; 
@property (nonatomic,retain) NSData * playbackArchive;                    //@synthesize playbackArchive=_playbackArchive - In the implementation block
+(Class)mediaProfilesType;
-(BOOL)hasVolume;
-(void)setVolume:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)mediaProfiles;
-(int)mediaPlaybackState;
-(BOOL)hasPlaybackArchive;
-(void)setActionUUID:(NSData *)arg1 ;
-(void)setMediaProfiles:(NSMutableArray *)arg1 ;
-(void)setMediaPlaybackState:(int)arg1 ;
-(void)setPlaybackArchive:(NSData *)arg1 ;
-(NSData *)volume;
-(void)addMediaProfiles:(id)arg1 ;
-(unsigned long long)mediaProfilesCount;
-(void)clearMediaProfiles;
-(BOOL)hasActionUUID;
-(id)mediaProfilesAtIndex:(unsigned long long)arg1 ;
-(void)setHasMediaPlaybackState:(BOOL)arg1 ;
-(BOOL)hasMediaPlaybackState;
-(NSData *)playbackArchive;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)actionUUID;
-(id)description;
-(id)dictionaryRepresentation;
@end
