/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedObject;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	BOOL _titleDidChange;
	BOOL _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLManagedObject * container; 
@property (nonatomic,readonly) id<PLAssetContainer> assetContainer; 
@property (nonatomic,readonly) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,readonly) BOOL titleDidChange; 
@property (nonatomic,readonly) BOOL keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(void)_calculateDiffs;
-(void)dealloc;
-(id)userInfo;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id<PLAssetContainer>)assetContainer;
-(id)_contentRelationshipName;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(BOOL)hasDeletes;
-(id)name;
-(NSObject*<PLAlbumProtocol>)album;
-(PLManagedObject *)container;
-(id)description;
@end
