/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VFXREDrawCall : NSObject {

	 drawCall;
	 material;
	 aabb;

}
-(long long)instanceCount;
-(unsigned long long)primitiveType;
-(long long)vertexCount;
-(id)init;
-(unsigned long long)materialIdentifier;
-(void)enumerateBuffers:(/*^block*/id)arg1 ;
-(void)enumerateTextures:(/*^block*/id)arg1 ;
-(1)boundingBoxMin;
-(1)boundingBoxMax;
@end
