/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@protocol WFAutomationTypeChooserViewControllerDelegate;
@class WFHomeManager, NSString;

@interface WFAutomationTypeChooserViewController : UITableViewController <WFHomeManagerEventObserver> {

	id<WFAutomationTypeChooserViewControllerDelegate> _delegate;
	WFHomeManager* _homeManager;

}

@property (nonatomic,readonly) WFHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) id<WFAutomationTypeChooserViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)automationTypeForHomeManager:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(WFHomeManager *)homeManager;
-(void)viewDidLoad;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)setDelegate:(id<WFAutomationTypeChooserViewControllerDelegate>)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(id<WFAutomationTypeChooserViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isModalInPresentation;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)choosePersonalAutomation:(id)arg1 ;
-(void)chooseHomeAutomation:(id)arg1 ;
@end

