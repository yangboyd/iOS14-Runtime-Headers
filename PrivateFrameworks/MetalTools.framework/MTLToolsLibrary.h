/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLLibrarySPI.h>

@class NSString, NSArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>

@property (copy) NSString * overrideTriple; 
@property (readonly) NSArray * externFunctionNames; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@property (readonly) long long type; 
@property (readonly) NSString * installName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(NSString *)overrideTriple;
-(NSArray *)functionNames;
-(NSString *)installName;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)newExternFunctionWithName:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4 ;
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)type;
-(void)setOverrideTriple:(NSString *)arg1 ;
-(void)newFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)newIntersectionFunctionWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)label;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3 ;
-(id)newFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newIntersectionFunctionWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(NSArray *)externFunctionNames;
@end

