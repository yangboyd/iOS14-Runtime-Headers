/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXOrientationState : NSObject {

	long long _interfaceOrientation;
	long long _deviceOrientation;
	long long _statusBarOrientation;
	CGRect _windowBounds;

}

@property (assign,nonatomic) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long deviceOrientation;                 //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (assign,nonatomic) long long statusBarOrientation;              //@synthesize statusBarOrientation=_statusBarOrientation - In the implementation block
@property (assign,nonatomic) CGRect windowBounds;                         //@synthesize windowBounds=_windowBounds - In the implementation block
-(long long)interfaceOrientation;
-(long long)statusBarOrientation;
-(long long)deviceOrientation;
-(void)setStatusBarOrientation:(long long)arg1 ;
-(void)setDeviceOrientation:(long long)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)initWithInterfaceOrientation:(long long)arg1 deviceOrientation:(long long)arg2 statusBarOrientation:(long long)arg3 windowBounds:(CGRect)arg4 ;
-(CGRect)windowBounds;
-(void)setWindowBounds:(CGRect)arg1 ;
@end

