/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MPCProtoContainerIdentifierSet, NSMutableArray, NSString;

@interface _MPCProtoContainer : PBCodable <NSCopying> {

	int _containerType;
	_MPCProtoContainerIdentifierSet* _identifierSet;
	NSMutableArray* _items;
	NSString* _playActivityFeatureName;
	SCD_Struct_MP20 _has;

}

@property (assign,nonatomic) BOOL hasContainerType; 
@property (assign,nonatomic) int containerType;                                            //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifierSet; 
@property (nonatomic,retain) _MPCProtoContainerIdentifierSet * identifierSet;              //@synthesize identifierSet=_identifierSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayActivityFeatureName; 
@property (nonatomic,retain) NSString * playActivityFeatureName;                           //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
+(Class)itemType;
-(NSMutableArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContainerType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)clearItems;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(BOOL)hasContainerType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)containerType;
-(void)setHasContainerType:(BOOL)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)itemsCount;
-(id)description;
-(id)dictionaryRepresentation;
-(_MPCProtoContainerIdentifierSet *)identifierSet;
-(void)setIdentifierSet:(_MPCProtoContainerIdentifierSet *)arg1 ;
-(BOOL)hasIdentifierSet;
-(BOOL)hasPlayActivityFeatureName;
@end

