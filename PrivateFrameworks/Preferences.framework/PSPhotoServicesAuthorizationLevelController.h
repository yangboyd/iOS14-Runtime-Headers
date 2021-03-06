/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class NSArray, PSSpecifier, NSString, NSDictionary, NSBundle;

@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController {

	NSArray* _modifySelectionSpecifiers;
	PSSpecifier* _modifySelectionButton;
	NSString* _clientIdentifier;
	NSDictionary* _details;
	NSString* _displayName;
	NSBundle* _entityBundle;

}

@property (nonatomic,retain) NSDictionary * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSBundle * entityBundle;              //@synthesize entityBundle=_entityBundle - In the implementation block
-(void)setSpecifier:(id)arg1 ;
-(NSDictionary *)details;
-(NSString *)displayName;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setDetails:(NSDictionary *)arg1 ;
-(id)specifiers;
-(id)footerStringForSpecifiers:(id)arg1 ;
-(NSBundle *)entityBundle;
-(id)_modifySelectionSpecifiers;
-(void)_presentImagePickerForModifyingSelection;
-(void)setEntityBundle:(NSBundle *)arg1 ;
@end

