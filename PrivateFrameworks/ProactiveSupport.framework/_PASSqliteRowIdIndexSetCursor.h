/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteRowIdCursor.h>

@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {

	unsigned long long _currentIndex;
	NSIndexSet* _indexSet;
	NSMutableIndexSet* _mutableIndexSet;
	BOOL _isDescending;

}

@property (nonatomic,readonly) NSMutableIndexSet * mutableIndexSet; 
+(id)planningInfoForRowIdConstraint:(int)arg1 ;
+(BOOL)canOrderByRowId:(BOOL)arg1 ;
+(double)costFactorForRandomAccess;
-(id)init;
-(void)matchNoRows;
-(void)stepIndexedRow;
-(void)applyRowIdSort:(BOOL)arg1 ;
-(void)finalizeConstraints;
-(void)setIndexSet:(id)arg1 ;
-(void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2 ;
-(NSMutableIndexSet *)mutableIndexSet;
-(void)matchOneRow:(unsigned long long)arg1 ;
-(unsigned long long)currentIndexedRowId;
@end

