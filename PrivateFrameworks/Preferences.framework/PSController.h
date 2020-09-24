/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)willBecomeActive;
-(void)handleURL:(id)arg1;
-(void)didLock;
-(void)didWake;
-(void)suspend;
-(void)didUnlock;
-(void)willUnlock;
-(void)willResignActive;
-(void)statusBarWillAnimateByHeight:(double)arg1;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 withCompletion:(/*^block*/id)arg4;
-(void)highlightSpecifierWithID:(id)arg1;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)pushController:(id)arg1;

@required
-(void)setSpecifier:(id)arg1;
-(id)specifier;
-(id)rootController;
-(void)setParentController:(id)arg1;
-(id)parentController;
-(void)setRootController:(id)arg1;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;

@end
