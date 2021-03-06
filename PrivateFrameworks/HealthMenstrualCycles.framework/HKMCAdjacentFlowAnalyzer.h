/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
@interface HKMCAdjacentFlowAnalyzer : NSObject {

	long long _futureFlowDay;
	long long _pastFlowDay;
	BOOL _unsuitableForRange;
	long long _flowDayIndex;

}

@property (nonatomic,readonly) long long flowDayIndex;                                           //@synthesize flowDayIndex=_flowDayIndex - In the implementation block
@property (getter=isUnsuitableForRange,nonatomic,readonly) BOOL unsuitableForRange;              //@synthesize unsuitableForRange=_unsuitableForRange - In the implementation block
-(id)initWithFlowDayIndex:(long long)arg1 ;
-(void)addNextAscendingDay:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(void)addNextDescendingDay:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(SCD_Struct_HK0)flowDayIndexRange;
-(long long)flowDayIndex;
-(BOOL)isUnsuitableForRange;
@end

