/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NSString;

@interface PIFaceBalanceAutoCalculator : NUAutoCalculator <NUTimeBased> {

	long long _rawState;

}

@property (readonly) long long rawState;                            //@synthesize rawState=_rawState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PI7 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)calculateRAWWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)calculateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)faceBalanceResultFromFaceObservations:(id)arg1 request:(id)arg2 error:(out id*)arg3 ;
+(SCD_Struct_PI6)faceRectFromNormalizedFaceRet:(CGRect)arg1 forImageExtent:(SCD_Struct_PI6)arg2 scaleX:(double)arg3 scaleY:(double)arg4 ;
+(SCD_Struct_PI10)faceBalanceFromFaceImage:(id)arg1 forFaceRect:(SCD_Struct_PI6)arg2 ;
-(void)submit:(/*^block*/id)arg1 ;
-(long long)rawState;
-(id)initWithRequest:(id)arg1 isRAW:(BOOL)arg2 ;
@end
