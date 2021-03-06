/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STTableWelcomeController.h>

@class STIntroductionModel, OBBoldTrayButton, STIntroAppLimitsTableViewController;

@interface STIntroAppLimitsViewController : STTableWelcomeController {

	STIntroductionModel* _model;
	/*^block*/id _continueHandler;
	OBBoldTrayButton* _setAppLimitButton;

}

@property (readonly) STIntroductionModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (copy,readonly) id continueHandler;                                                        //@synthesize continueHandler=_continueHandler - In the implementation block
@property (retain) OBBoldTrayButton * setAppLimitButton;                                             //@synthesize setAppLimitButton=_setAppLimitButton - In the implementation block
@property (nonatomic,retain) STIntroAppLimitsTableViewController * tableViewController; 
-(id)continueHandler;
-(void)dealloc;
-(STIntroductionModel *)model;
-(void)loadView;
-(STIntroAppLimitsTableViewController *)tableViewController;
-(void)setTableViewController:(STIntroAppLimitsTableViewController *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_notNow:(id)arg1 ;
-(void)_setAppLimit:(id)arg1 ;
-(void)setSetAppLimitButton:(OBBoldTrayButton *)arg1 ;
-(void)_allowanceTimeDidChange:(id)arg1 ;
-(void)_allowanceSelectedCategoriesDidChange:(id)arg1 ;
-(void)_updateSetAppLimitButtonWithTime:(id)arg1 selectedCategories:(id)arg2 ;
-(OBBoldTrayButton *)setAppLimitButton;
-(id)initWithIntroductionModel:(id)arg1 continueHandler:(/*^block*/id)arg2 ;
@end

