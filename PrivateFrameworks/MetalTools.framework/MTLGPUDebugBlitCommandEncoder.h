/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBlitCommandEncoder.h>
#import <libobjc.A.dylib/MTLGPUDebugCommandEncoder.h>

@class NSString;

@interface MTLGPUDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder <MTLGPUDebugCommandEncoder> {

	unsigned _encoderID;

}

@property (readonly) unsigned encoderID;                            //@synthesize encoderID=_encoderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4 ;
-(unsigned)encoderID;
-(id)initWithBlitCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned)arg3 ;
@end

