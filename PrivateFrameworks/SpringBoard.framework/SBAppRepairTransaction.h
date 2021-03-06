/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransaction.h>

@class NSSet, NSMutableSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction : SBTransaction {

	NSSet* _appInfos;
	NSMutableSet* _repairRequests;
	STTelephonyStatusDomain* _telephonyDomain;

}

@property (nonatomic,copy,readonly) NSSet * appInfos;              //@synthesize appInfos=_appInfos - In the implementation block
-(void)_didComplete;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_evaluateCompletion;
-(NSSet *)appInfos;
-(void)_startAppRepairs;
-(void)_completeRequest:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)initWithApplicationInfos:(id)arg1 ;
@end

