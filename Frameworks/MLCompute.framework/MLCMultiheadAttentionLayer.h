/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCLayer.h>

@class MLCMultiheadAttentionDescriptor, NSArray;

@interface MLCMultiheadAttentionLayer : MLCLayer {

	MLCMultiheadAttentionDescriptor* _descriptor;
	NSArray* _weights;
	NSArray* _biases;
	NSArray* _attentionBiases;
	NSArray* _weightsParameters;
	NSArray* _biasesParameters;

}

@property (nonatomic,copy,readonly) MLCMultiheadAttentionDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain,readonly) NSArray * weights;                                       //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biases;                                        //@synthesize biases=_biases - In the implementation block
@property (nonatomic,retain,readonly) NSArray * attentionBiases;                               //@synthesize attentionBiases=_attentionBiases - In the implementation block
@property (nonatomic,retain,readonly) NSArray * weightsParameters;                             //@synthesize weightsParameters=_weightsParameters - In the implementation block
@property (nonatomic,retain,readonly) NSArray * biasesParameters;                              //@synthesize biasesParameters=_biasesParameters - In the implementation block
+(id)layerWithDescriptor:(id)arg1 weights:(id)arg2 biases:(id)arg3 attentionBiases:(id)arg4 ;
-(MLCMultiheadAttentionDescriptor *)descriptor;
-(NSArray *)weights;
-(NSArray *)biases;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg1 ;
-(unsigned long long)allocatedDataSizeForTraining:(BOOL)arg1 optimizer:(id)arg2 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;
-(id)resultTensorFromSources:(id)arg1 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg1 ;
-(void)allocateGradientsForParameters;
-(NSArray *)biasesParameters;
-(NSArray *)weightsParameters;
-(NSArray *)attentionBiases;
-(id)initWithDescriptor:(id)arg1 weights:(id)arg2 bias:(id)arg3 attentionBias:(id)arg4 ;
@end

