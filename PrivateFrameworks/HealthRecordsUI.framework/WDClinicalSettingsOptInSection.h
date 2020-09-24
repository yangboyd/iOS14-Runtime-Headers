/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/HRWDTableViewSection.h>

@interface WDClinicalSettingsOptInSection : HRWDTableViewSection {

	BOOL _optIn;

}

@property (nonatomic,readonly) BOOL optIn;              //@synthesize optIn=_optIn - In the implementation block
-(unsigned long long)numberOfRows;
-(BOOL)optIn;
-(void)_setOptInStatus:(long long)arg1 ;
-(id)titleForHeader;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_fetchOptInStatus;
-(id)_viewDataCellForTableView:(id)arg1 ;
-(id)_optInCellForTableView:(id)arg1 ;
-(void)_handleOptInSwitchChanged:(id)arg1 ;
@end
