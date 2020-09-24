/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, UIActivityIndicatorView;

@interface PMTTRLoadingViewController : UIViewController {

	UILabel* _radarCollectionInfoLabel;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UILabel * radarCollectionInfoLabel;                           //@synthesize radarCollectionInfoLabel=_radarCollectionInfoLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)viewDidLoad;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)didReceiveMemoryWarning;
-(UILabel *)radarCollectionInfoLabel;
-(void)setRadarCollectionInfoLabel:(UILabel *)arg1 ;
@end
