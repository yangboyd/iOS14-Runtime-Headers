/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@class NSString;

@interface CVAFilterRenderComposite : NSObject {

	id<MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndBGColorMapKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndFGColorMapKernel;
	id<MTLComputePipelineState> _renderingCompositeFixupAndColorMapKernel;
	NSString* _label;

}

@property (readonly) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 srcForegroundTex:(id)arg2 srcBackgroundTex:(id)arg3 srcCocTex:(id)arg4 dstYTex:(id)arg5 dstUVTex:(id)arg6 fgColorLut:(id)arg7 bgColorLut:(id)arg8 frameNumber:(unsigned)arg9 seedGeneratorFactor:(unsigned)arg10 noiseBits:(int)arg11 noiseBitsFactor:(float)arg12 cubeIntensity:(float)arg13 maxBlurRadius:(optional<float>=Baligned_storage<float>=(dummy_u=[4c]a4)}}Ref)arg14 ;
@end

