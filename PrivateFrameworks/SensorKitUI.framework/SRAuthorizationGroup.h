/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString, NSArray, UIImage;

@interface SRAuthorizationGroup : NSObject {

	NSBundle* _bundle;

}

@property (copy,readonly) NSString * localizedDisplayName; 
@property (copy,readonly) NSArray * localizedCollectedData; 
@property (copy,readonly) NSArray * localizedNotCollectedData; 
@property (copy,readonly) NSString * localizedDescription; 
@property (copy,readonly) NSString * localizedRequiredAuthAlertDetail; 
@property (copy,readonly) NSString * localizedRevokeRequiredAuthAlertDetail; 
@property (copy,readonly) NSString * localizedPlatforms; 
@property (copy,readonly) NSArray * platforms; 
@property (retain,readonly) UIImage * illustration; 
@property (copy,readonly) NSArray * localizedSampleData; 
@property (copy,readonly) NSString * authorizationService; 
+(void)initialize;
+(id)authorizationGroupWithServiceName:(id)arg1 ;
-(NSString *)localizedDescription;
-(id)initWithBundle:(id)arg1 ;
-(void)dealloc;
-(NSString *)localizedDisplayName;
-(NSArray *)platforms;
-(id)localizeExampleDataValue:(id)arg1 ;
-(NSArray *)localizedCollectedData;
-(NSArray *)localizedNotCollectedData;
-(NSString *)localizedRequiredAuthAlertDetail;
-(NSString *)localizedRevokeRequiredAuthAlertDetail;
-(NSString *)localizedPlatforms;
-(UIImage *)illustration;
-(NSArray *)localizedSampleData;
-(NSString *)authorizationService;
-(id)infoPlistAuthorizationCategory;
@end

