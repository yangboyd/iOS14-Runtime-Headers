/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFActivityConditionBuilder <NSObject>
@property (assign,nonatomic) BOOL requireExternalPower; 
@property (assign,nonatomic) BOOL requireWiFi; 
@property (assign,nonatomic) BOOL requireScreenLocked; 
@property (assign,nonatomic) BOOL requireLowPowerModeDisabled; 
@property (assign,nonatomic) float minBatteryLevel; 
@property (assign,nonatomic) long long maxThermalPressureLevel; 
@required
-(BOOL)requireExternalPower;
-(float)minBatteryLevel;
-(BOOL)requireWiFi;
-(BOOL)requireLowPowerModeDisabled;
-(BOOL)requireScreenLocked;
-(long long)maxThermalPressureLevel;
-(void)setRequireExternalPower:(BOOL)arg1;
-(void)setRequireWiFi:(BOOL)arg1;
-(void)setRequireScreenLocked:(BOOL)arg1;
-(void)setRequireLowPowerModeDisabled:(BOOL)arg1;
-(void)setMinBatteryLevel:(float)arg1;
-(void)setMaxThermalPressureLevel:(long long)arg1;

@end

