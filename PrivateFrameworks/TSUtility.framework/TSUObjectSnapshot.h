/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TSUObjectSnapshot : NSObject {

	unsigned long long mEntryCount;
	void* mSnapshot;
	NSArray* mCompared;

}
-(void)dealloc;
-(id)init;
-(void)p_clear;
-(void)compare;
-(void)calibrate:(id)arg1 ;
@end

