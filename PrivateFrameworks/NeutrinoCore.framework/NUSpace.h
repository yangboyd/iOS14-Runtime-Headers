/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSArray;

@interface NUSpace : NSObject {

	NSArray* _transformStack;

}

@property (retain) NSArray * transformStack;              //@synthesize transformStack=_transformStack - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)appendTransform:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithTransformStack:(id)arg1 ;
-(CGPoint)transformPoint:(CGPoint)arg1 toSpace:(id)arg2 ;
-(CGPoint)transformPointForward:(CGPoint)arg1 ;
-(CGPoint)transformPointBackward:(CGPoint)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 ;
-(SCD_Struct_NU4)transformTime:(SCD_Struct_NU4)arg1 toSpace:(id)arg2 ;
-(SCD_Struct_NU4)transformTimeBackward:(SCD_Struct_NU4)arg1 ;
-(BOOL)isEqualToSpace:(id)arg1 ;
-(NSArray *)transformStack;
-(void)setTransformStack:(NSArray *)arg1 ;
@end
