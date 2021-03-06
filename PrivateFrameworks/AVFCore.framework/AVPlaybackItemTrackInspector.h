/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(SCD_Struct_AV7)timeRange;
-(id)mediaType;
-(int)trackID;
-(CGSize)naturalSize;
-(id)asset;
-(CGAffineTransform)preferredTransform;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)formatDescriptions;
-(BOOL)isEqual:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(SCD_Struct_AV6)samplePresentationTimeForTrackTime:(SCD_Struct_AV6)arg1 ;
-(unsigned long long)hash;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(float)peakDataRate;
-(float)estimatedDataRate;
-(CGSize)dimensions;
-(unsigned)_figMediaType;
@end

