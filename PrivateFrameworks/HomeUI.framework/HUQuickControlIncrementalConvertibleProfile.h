/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFNumberValueConstraints;


@protocol HUQuickControlIncrementalConvertibleProfile <NSObject>
@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
@required
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;

@end
