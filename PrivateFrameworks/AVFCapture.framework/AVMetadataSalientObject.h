/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataSalientObject : AVMetadataObject <NSCopying> {

	long long _objectID;

}

@property (readonly) long long objectID;              //@synthesize objectID=_objectID - In the implementation block
+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)objectID;
-(id)initWithObjectID:(long long)arg1 time:(SCD_Struct_AV0)arg2 duration:(SCD_Struct_AV0)arg3 bounds:(CGRect)arg4 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4 ;
-(id)initWithObjectID:(long long)arg1 time:(SCD_Struct_AV0)arg2 duration:(SCD_Struct_AV0)arg3 bounds:(CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)description;
@end

