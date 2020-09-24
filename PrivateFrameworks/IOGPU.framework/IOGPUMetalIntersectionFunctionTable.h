/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOGPU/IOGPU-Structs.h>
#import <IOGPU/IOGPUMetalResource.h>
#import <libobjc.A.dylib/MTLIntersectionFunctionTableSPI.h>

@protocol MTLVisibleFunctionTableSPI;
@class IOGPUMetalResource, NSString;

@interface IOGPUMetalIntersectionFunctionTable : IOGPUMetalResource <MTLIntersectionFunctionTableSPI> {

	IOGPUMetalResource*<MTLVisibleFunctionTableSPI> _visibleFunctionTable;

}

@property (nonatomic,retain) id<MTLBuffer> globalBuffer; 
@property (assign,nonatomic) unsigned long long globalBufferOffset; 
@property (nonatomic,readonly) IOGPUMetalResource*<MTLVisibleFunctionTableSPI> visibleFunctionTable; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(NSRange)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)dealloc;
-(id)initWithVisibleFunctionTable:(id)arg1 ;
-(void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 ;
-(void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(unsigned long long)arg1 withRange:(NSRange)arg2 ;
-(IOGPUMetalResource*<MTLVisibleFunctionTableSPI>)visibleFunctionTable;
-(id<MTLBuffer>)globalBuffer;
-(void)setGlobalBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)globalBufferOffset;
-(void)setGlobalBufferOffset:(unsigned long long)arg1 ;
-(void)setFunctions:(const id*)arg1 withRange:(NSRange)arg2 ;
@end
