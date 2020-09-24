/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXActionFeedbackWeights : NSObject {

	[40  _confirmWeights[8]];
	[40  _rejectWeights[8]];

}
+(id)sharedInstance;
-(id)init;
-(id)initWithAssetClass:(Class)arg1 ;
-(float)confirmWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
-(float)rejectWeightForFeedbackStage:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 ;
@end
