/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>

@class MCProfile, HMSetting, NSUUID;

@interface HUAccessorySettingsProfileItem : HFItem {

	MCProfile* _profile;
	HMSetting* _setting;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) MCProfile * profile;                    //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                    //@synthesize setting=_setting - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MCProfile *)profile;
-(HMSetting *)setting;
-(NSUUID *)uniqueIdentifier;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithProfile:(id)arg1 setting:(id)arg2 ;
@end
