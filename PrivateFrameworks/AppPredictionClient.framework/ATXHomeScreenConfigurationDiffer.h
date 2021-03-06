/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHomeScreenConfigurationComponents, ATXHomeScreenConfigurationComponentsDiffer, NSArray;

@interface ATXHomeScreenConfigurationDiffer : NSObject {

	ATXHomeScreenConfigurationComponents* _previousComponents;
	ATXHomeScreenConfigurationComponents* _currentComponents;
	ATXHomeScreenConfigurationComponentsDiffer* _componentsDiffer;
	NSArray* _configuredPinnedWidgets;
	NSArray* _configuredStackedWidgets;
	NSArray* _addedPinnedWidgets;
	NSArray* _deletedPinnedWidgets;
	NSArray* _widgetsAddedToStacks;
	NSArray* _widgetsDeletedFromStacks;

}

@property (nonatomic,readonly) NSArray * addedPinnedWidgets;                    //@synthesize addedPinnedWidgets=_addedPinnedWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * deletedPinnedWidgets;                  //@synthesize deletedPinnedWidgets=_deletedPinnedWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * widgetsAddedToStacks;                  //@synthesize widgetsAddedToStacks=_widgetsAddedToStacks - In the implementation block
@property (nonatomic,readonly) NSArray * widgetsDeletedFromStacks;              //@synthesize widgetsDeletedFromStacks=_widgetsDeletedFromStacks - In the implementation block
@property (nonatomic,readonly) NSArray * configuredWidgets; 
@property (nonatomic,readonly) NSArray * addedStacks; 
@property (nonatomic,readonly) NSArray * deletedStacks; 
+(BOOL)_widget:(id)arg1 hasSamePersonalityAsOtherWidget:(id)arg2 ;
-(id)init;
-(id)initWithPreviousConfigurations:(id)arg1 currentConfigurations:(id)arg2 ;
-(NSArray *)addedPinnedWidgets;
-(NSArray *)widgetsAddedToStacks;
-(id)stackInCurrentConfigurationsForStackedWidget:(id)arg1 ;
-(NSArray *)addedStacks;
-(NSArray *)deletedPinnedWidgets;
-(NSArray *)widgetsDeletedFromStacks;
-(id)stackInPreviousConfigurationsForStackedWidget:(id)arg1 ;
-(NSArray *)deletedStacks;
-(void)_calculatePinnedWidgetChanges;
-(void)_calculateStackedWidgetChanges;
-(NSArray *)configuredWidgets;
@end

