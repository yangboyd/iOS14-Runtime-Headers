/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject {

	FCAssetHandle* _thumbnailAssetHandle;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) FCAssetHandle * thumbnailAssetHandle;              //@synthesize thumbnailAssetHandle=_thumbnailAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
+(id)issueThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(FCAssetHandle *)thumbnailAssetHandle;
-(CGSize)thumbnailSize;
-(void)setThumbnailAssetHandle:(FCAssetHandle *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
@end
