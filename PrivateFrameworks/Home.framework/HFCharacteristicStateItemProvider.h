/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, HMService, NSSet;

@interface HFCharacteristicStateItemProvider : HFItemProvider {

	HMAccessory* _accessory;
	HMService* _service;
	id<HFCharacteristicValueSource> _valueSource;
	NSSet* _characteristicStateItems;
	NSSet* _batteryItems;

}

@property (nonatomic,retain) NSSet * characteristicStateItems;                           //@synthesize characteristicStateItems=_characteristicStateItems - In the implementation block
@property (nonatomic,retain) NSSet * batteryItems;                                       //@synthesize batteryItems=_batteryItems - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)standardCharacteristicTypes;
+(id)_createBatteryItemWithSourceItem:(id)arg1 characteristicType:(id)arg2 valueFormatBlock:(/*^block*/id)arg3 ;
+(id)_setupCharacteristicStateItemForCharacteristic:(id)arg1 valueSource:(id)arg2 serviceType:(id)arg3 ;
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMAccessory *)accessory;
-(id)init;
-(id)initWithValueSource:(id)arg1 service:(id)arg2 ;
-(HMService *)service;
-(id)initWithValueSource:(id)arg1 accessory:(id)arg2 service:(id)arg3 ;
-(NSSet *)characteristicStateItems;
-(id)_reloadCharacteristicStateItems;
-(id)_reloadBatteryItems;
-(void)setBatteryItems:(NSSet *)arg1 ;
-(void)setCharacteristicStateItems:(NSSet *)arg1 ;
-(id)initWithValueSource:(id)arg1 accessory:(id)arg2 ;
-(/*^block*/id)characteristicStateItemComparator;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(NSSet *)batteryItems;
-(id)reloadItems;
@end

