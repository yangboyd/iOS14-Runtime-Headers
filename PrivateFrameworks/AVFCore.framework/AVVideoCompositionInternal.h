/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {

	unsigned long long changeSeed;
	NSString* builtInCompositorName;
	Class customCompositorClass;
	SCD_Struct_AV6 frameDuration;
	int sourceTrackIDForFrameTiming;
	CGSize renderSize;
	float renderScale;
	NSString* colorPrimaries;
	NSString* colorYCbCrMatrix;
	NSString* colorTransferFunction;
	NSArray* instructions;
	BOOL auxiliaryTrackLayerSetLast;
	AVVideoCompositionCoreAnimationTool* animationTool;

}
@end
