/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SBIconModelPropertyListFileStore.h>

@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore
+(id)sharedInstance;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)_deleteLegacyState;
@end
