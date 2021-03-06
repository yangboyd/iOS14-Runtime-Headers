/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState;
#import <CameraUI/CameraUI-Structs.h>
@class CAMetalLayer;

@interface CAMLiquidShutterRenderer : NSObject {

	BOOL _showDragHandle;
	BOOL _needsRender;
	BOOL __backgrounded;
	double _blurRadius;
	double _shadowSize;
	CAMetalLayer* _metalLayer;
	id<MTLDevice> __device;
	id<MTLCommandQueue> __commandQueue;
	id<MTLRenderPipelineState> __renderPipelineState;
	UIEdgeInsets _shadowColor;
	SCD_Struct_CA38 _centerShape;
	SCD_Struct_CA38 _dragHandleShape;

}

@property (nonatomic,readonly) id<MTLDevice> _device;                                        //@synthesize _device=__device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> _commandQueue;                            //@synthesize _commandQueue=__commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLRenderPipelineState> _renderPipelineState;              //@synthesize _renderPipelineState=__renderPipelineState - In the implementation block
@property (assign,setter=_setBackgrounded:,nonatomic) BOOL _backgrounded;                    //@synthesize _backgrounded=__backgrounded - In the implementation block
@property (assign,nonatomic) SCD_Struct_CA39 centerShape;                                    //@synthesize centerShape=_centerShape - In the implementation block
@property (assign,nonatomic) SCD_Struct_CA39 dragHandleShape;                                //@synthesize dragHandleShape=_dragHandleShape - In the implementation block
@property (assign,nonatomic) BOOL showDragHandle;                                            //@synthesize showDragHandle=_showDragHandle - In the implementation block
@property (assign,nonatomic) double blurRadius;                                              //@synthesize blurRadius=_blurRadius - In the implementation block
@property (assign,nonatomic) double shadowSize;                                              //@synthesize shadowSize=_shadowSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets shadowColor;                                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) BOOL needsRender;                                               //@synthesize needsRender=_needsRender - In the implementation block
@property (assign,nonatomic,__weak) CAMetalLayer * metalLayer;                               //@synthesize metalLayer=_metalLayer - In the implementation block
-(void)_applicationDidEnterBackground;
-(UIEdgeInsets)shadowColor;
-(void)setShadowColor:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(void)setBlurRadius:(double)arg1 ;
-(double)shadowSize;
-(id<MTLDevice>)_device;
-(void)_applicationWillEnterForeground;
-(id<MTLCommandQueue>)_commandQueue;
-(double)blurRadius;
-(BOOL)_backgrounded;
-(void)setShadowSize:(double)arg1 ;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(CAMetalLayer *)metalLayer;
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 pixelFormat:(unsigned long long)arg3 ;
-(void)setMetalLayer:(CAMetalLayer *)arg1 ;
-(void)renderIfNecessary;
-(void)setCenterShape:(SCD_Struct_CA39)arg1 ;
-(void)setDragHandleShape:(SCD_Struct_CA39)arg1 ;
-(void)setShowDragHandle:(BOOL)arg1 ;
-(void)setNeedsRender:(BOOL)arg1 ;
-(BOOL)showDragHandle;
-(BOOL)needsRender;
-(SCD_Struct_CA39)centerShape;
-(SCD_Struct_CA40)_fragmentForShape:(SCD_Struct_CA39)arg1 scale:(double)arg2 ;
-(SCD_Struct_CA39)dragHandleShape;
-(SCD_Struct_CA41)_orthographicMatrixWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6 ;
-(id<MTLRenderPipelineState>)_renderPipelineState;
@end

