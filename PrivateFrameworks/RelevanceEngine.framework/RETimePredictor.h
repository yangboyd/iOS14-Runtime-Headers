/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@interface RETimePredictor : REPredictor
+(id)supportedFeatures;
+(double)updateInterval;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end
