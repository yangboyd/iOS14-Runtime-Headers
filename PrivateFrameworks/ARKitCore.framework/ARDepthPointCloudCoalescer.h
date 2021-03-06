/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADPointCloudAggregator, ADAggregationParameters;

@interface ARDepthPointCloudCoalescer : NSObject {

	ADPointCloudAggregator* _aggregator;
	ADAggregationParameters* _aggregationParameters;

}

@property (nonatomic,readonly) ADAggregationParameters * aggregationParameters;              //@synthesize aggregationParameters=_aggregationParameters - In the implementation block
-(void)flush;
-(id)init;
-(void)_commonInit:(id)arg1 calibration:(id)arg2 ;
-(ADAggregationParameters *)aggregationParameters;
-(id)initWithAggregationParameters:(id)arg1 ;
-(id)initWithAggregationParameters:(id)arg1 cameraCalibration:(id)arg2 ;
-(void)addDepthPointCloudData:(id)arg1 ;
-(id)depthPointCloudWithPose:(id)arg1 imageData:(id)arg2 ;
@end

