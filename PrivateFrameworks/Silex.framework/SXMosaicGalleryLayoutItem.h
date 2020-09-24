/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryLayoutItem : NSObject {

	int _tileType;
	CGSize _dimensions;

}

@property (nonatomic,readonly) CGSize dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) int tileType;                   //@synthesize tileType=_tileType - In the implementation block
-(int)tileType;
-(double)aspectRatio;
-(id)initWithDimensions:(CGSize)arg1 ;
-(id)description;
-(CGSize)dimensions;
@end
