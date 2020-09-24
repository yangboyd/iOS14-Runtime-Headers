/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class NSMutableArray, HKWorkoutEvent;

@interface HKWorkoutEventDetailViewController : HKTableViewController {

	NSMutableArray* _sections;
	HKWorkoutEvent* _event;

}

@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) HKWorkoutEvent * event;                 //@synthesize event=_event - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)setEvent:(HKWorkoutEvent *)arg1 ;
-(HKWorkoutEvent *)event;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSMutableArray *)sections;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_loadSections;
-(void)_addSectionIfNotNil:(id)arg1 ;
@end
