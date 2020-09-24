/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPStringRandomizer;
@interface _DPStringRandomizer : NSObject {

	id<_DPStringRandomizer> _randomizer;
	unsigned long long _algorithm;

}

@property (nonatomic,readonly) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) id<_DPStringRandomizer> randomizer;              //@synthesize randomizer=_randomizer - In the implementation block
+(id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 ;
-(unsigned long long)algorithm;
-(id)init;
-(id)description;
-(id<_DPStringRandomizer>)randomizer;
-(id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 dataAlgorithm:(unsigned long long)arg3 algorithmParameters:(id)arg4 ;
@end
