/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol JFXTrackedEffectPropertiesDelegate;
@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _disableTracking;
	id<JFXTrackedEffectPropertiesDelegate> _delegate;
	long long _internalTrackingType;

}

@property (assign) long long internalTrackingType;                                                //@synthesize internalTrackingType=_internalTrackingType - In the implementation block
@property (getter=isTrackingDisabled) BOOL disableTracking;                                       //@synthesize disableTracking=_disableTracking - In the implementation block
@property (assign,nonatomic) long long trackingType; 
@property (assign,nonatomic,__weak) id<JFXTrackedEffectPropertiesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setDelegate:(id<JFXTrackedEffectPropertiesDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<JFXTrackedEffectPropertiesDelegate>)delegate;
-(long long)trackingType;
-(void)setTrackingType:(long long)arg1 ;
-(void)setDisableTracking:(BOOL)arg1 ;
-(void)setInternalTrackingType:(long long)arg1 ;
-(BOOL)isTrackingDisabled;
-(long long)internalTrackingType;
-(void)enableTrackingState:(BOOL)arg1 ;
@end

