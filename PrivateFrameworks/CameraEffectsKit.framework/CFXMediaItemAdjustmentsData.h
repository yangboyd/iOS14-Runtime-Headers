/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding> {

	long long _cameraMode;
	NSURL* _metadataURL;
	long long _cameraPosition;
	NSArray* _effectStack;

}

@property (nonatomic,readonly) long long cameraMode;                  //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) NSURL * metadataURL;                   //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;              //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;                 //@synthesize effectStack=_effectStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodingClassWhitelist;
-(long long)cameraPosition;
-(NSURL *)metadataURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)cameraMode;
-(NSArray *)effectStack;
-(id)initWithCameraMode:(long long)arg1 metadataURL:(id)arg2 cameraPosition:(long long)arg3 effectStack:(id)arg4 ;
@end

