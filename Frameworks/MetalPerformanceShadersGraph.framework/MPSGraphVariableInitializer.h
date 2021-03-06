/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPSGraphVariableInitializer : NSObject {

	double _constant;
	double _minimum;
	double _maximum;
	NSString* _file;
	unsigned _initializerType;

}

@property (nonatomic,readonly) unsigned initializerType;              //@synthesize initializerType=_initializerType - In the implementation block
+(id)initializerWithConstant:(double)arg1 ;
+(id)initializerWithZeros;
+(id)initializerWithOnes;
+(id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)initializerWithFile:(id)arg1 ;
-(id)init;
-(id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned)arg2 ;
-(unsigned)initializerType;
@end

