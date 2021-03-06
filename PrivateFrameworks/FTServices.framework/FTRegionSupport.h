/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
+(id)sharedInstance;
-(BOOL)isLoaded;
-(BOOL)isLoading;
-(FTMessageDelivery *)delivery;
-(NSArray *)regions;
-(void)startLoading;
-(void)dealloc;
-(id)regionForID:(id)arg1 ;
-(void)setRegions:(NSArray *)arg1 ;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
@end

