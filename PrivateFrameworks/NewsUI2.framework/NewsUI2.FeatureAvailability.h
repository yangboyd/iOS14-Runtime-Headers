/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSFeatureAvailabilityType.h>

@interface NewsUI2.FeatureAvailability : _UKNOWN_SUPERCLASS_ <TSFeatureAvailabilityType> {

	 appConfiguration;
	 privateDataContext;

}

@property (readonly,nonatomic) BOOL appleMagazineContent; 
@property (readonly,nonatomic) BOOL allowSharingAlways; 
@property (readonly,nonatomic) BOOL useTodayModule; 
@property (readonly,nonatomic) BOOL useHistoryFeedModule; 
@property (readonly,nonatomic) BOOL useSavedFeedModule; 
@property (readonly,nonatomic) BOOL useTagFeedModule; 
@property (readonly,nonatomic) BOOL useSearchModule; 
@property (readonly,nonatomic) BOOL useNewAds; 
@property (readonly,nonatomic) BOOL useNewsUINotificationHandling; 
@property (readonly,nonatomic) BOOL narrativeAudio; 
-(BOOL)useSavedFeedModule;
-(BOOL)useTagFeedModule;
-(BOOL)narrativeAudio;
-(BOOL)useTodayModule;
-(BOOL)useNewsUINotificationHandling;
-(BOOL)allowSharingAlways;
-(BOOL)appleMagazineContent;
-(BOOL)useSearchModule;
-(BOOL)useHistoryFeedModule;
-(BOOL)useNewAds;
@end
