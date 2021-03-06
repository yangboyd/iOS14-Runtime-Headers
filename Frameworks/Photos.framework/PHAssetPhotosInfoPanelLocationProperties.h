/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet {

	NSData* _placeAnnotationData;

}

@property (nonatomic,readonly) NSData * placeAnnotationData;              //@synthesize placeAnnotationData=_placeAnnotationData - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSData *)placeAnnotationData;
@end

