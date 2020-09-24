/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@protocol PNPWelcomeControllerDelegate;
@class OBTrayButton;

@interface PNPWelcomeController : OBWelcomeController {

	id<PNPWelcomeControllerDelegate> _delegate;
	long long _controllerType;
	long long _buttonType;
	long long _deviceType;
	OBTrayButton* _trayButton;

}

@property (assign,nonatomic) long long controllerType;                                      //@synthesize controllerType=_controllerType - In the implementation block
@property (assign,nonatomic) long long buttonType;                                          //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,retain) OBTrayButton * trayButton;                                     //@synthesize trayButton=_trayButton - In the implementation block
@property (assign,nonatomic) long long deviceType;                                          //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic,__weak) id<PNPWelcomeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bundleImageNamed:(id)arg1 ;
+(id)controllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4 ;
-(void)setDeviceType:(long long)arg1 ;
-(long long)buttonType;
-(long long)deviceType;
-(void)setDelegate:(id<PNPWelcomeControllerDelegate>)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(id<PNPWelcomeControllerDelegate>)delegate;
-(void)setButtonType:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)controllerType;
-(void)setControllerType:(long long)arg1 ;
-(id)bundleImageNamed:(id)arg1 ;
-(void)setControllerType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3 delegate:(id)arg4 ;
-(OBTrayButton *)trayButton;
-(void)setTrayButton:(OBTrayButton *)arg1 ;
-(void)addButtonWithType:(long long)arg1 ;
@end
