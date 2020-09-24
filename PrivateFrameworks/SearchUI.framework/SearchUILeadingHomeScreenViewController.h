/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUILeadingViewController.h>
#import <SearchUI/SearchUIHomeScreenEngagementDelegate.h>

@class SearchUIHomeScreenAppIconView, NSString;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController <SearchUIHomeScreenEngagementDelegate>

@property (nonatomic,retain) SearchUIHomeScreenAppIconView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(BOOL)shouldVerticallyCenter;
-(void)updateWithRowModel:(id)arg1 ;
-(unsigned long long)type;
-(id)setupView;
-(void)didEngageResult:(id)arg1 withTriggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 ;
@end
