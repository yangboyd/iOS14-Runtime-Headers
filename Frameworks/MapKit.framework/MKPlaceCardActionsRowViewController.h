/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKPlaceViewControllerDelegate;
@class MKPlaceSectionItemView, MKPlaceCardActionsRowView, MKPlaceholderGridCache, NSArray, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKModuleViewControllerProtocol> {

	MKPlaceSectionItemView* _hairlineView;
	MKPlaceCardActionsRowView* _actionsRowView;
	MKPlaceholderGridCache* _placeholderGridCache;
	NSArray* _items;
	MKPlaceActionManager* _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(MKPlaceActionManager *)actionManager;
-(void)viewDidLayoutSubviews;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(void)viewDidLoad;
-(void)setItems:(NSArray *)arg1 ;
-(void)loadView;
-(void)infoCardThemeChanged;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(BOOL)_canShowWhileLocked;
@end

