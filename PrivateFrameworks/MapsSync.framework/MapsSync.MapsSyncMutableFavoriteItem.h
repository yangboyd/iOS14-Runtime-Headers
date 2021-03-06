/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableBaseItem.h>

@class MapsSyncManagedFavoriteItem, NSSet, NSString, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableFavoriteItem : MapsSync.MapsSyncMutableBaseItem {

	 _proxyFavorite;

}

@property (retain,nonatomic) MapsSyncManagedFavoriteItem * _proxyFavorite;              //@synthesize proxyFavorite=_proxyFavorite - In the implementation block
@property (copy,nonatomic) NSSet * contactHandles; 
@property (copy,nonatomic) NSString * customName; 
@property (assign,nonatomic) BOOL hidden; 
@property (retain,nonatomic) GEOMapItemStorage * mapItemStorage; 
@property (copy,nonatomic) NSString * originatingAddressString; 
@property (assign,nonatomic) short type; 
@property (assign,nonatomic) short source; 
@property (copy,nonatomic) NSString * shortcutIdentifier; 
@property (assign,nonatomic) short version; 
-(short)version;
-(BOOL)hidden;
-(void)setContactHandles:(NSSet *)arg1 ;
-(void)setVersion:(short)arg1 ;
-(NSString *)shortcutIdentifier;
-(void)setSource:(short)arg1 ;
-(short)type;
-(NSString *)customName;
-(void)setType:(short)arg1 ;
-(NSSet *)contactHandles;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(short)source;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setCustomName:(NSString *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
-(void)moveToFront;
-(void)moveToBack;
-(id)moveBeforeItem:(id)arg1 ;
-(id)moveAfterItem:(id)arg1 ;
-(void)setOriginatingAddressString:(NSString *)arg1 ;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(MapsSyncManagedFavoriteItem *)_proxyFavorite;
-(void)set_proxyFavorite:(MapsSyncManagedFavoriteItem *)arg1 ;
-(id)addContactHandle:(id)arg1 ;
-(id)removeContactHandle:(id)arg1 ;
-(NSString *)originatingAddressString;
@end

