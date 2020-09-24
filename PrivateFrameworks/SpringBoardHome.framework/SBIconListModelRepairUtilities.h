/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface SBIconListModelRepairUtilities : NSObject
+(BOOL)_findAndRepairEmptyRows:(id)arg1 gridCellInfo:(id)arg2 ;
+(BOOL)_findAndRepairSmallWidgetGaps:(id)arg1 smallWidgetGridSize:(SBHIconGridSize)arg2 gridCellInfo:(id)arg3 ;
+(BOOL)_findAndRepairSingleIconGaps:(id)arg1 gridCellInfo:(id)arg2 ;
+(unsigned long long)_maxGridCellIndexWithIconCount:(unsigned long long)arg1 gridCellInfo:(id)arg2 ;
+(id)_firstIconOfSizeClass:(unsigned long long)arg1 withIcons:(id)arg2 inRange:(NSRange)arg3 ;
+(id)repairModelByEliminatingGapsInIcons:(id)arg1 gridSize:(SBHIconGridSize)arg2 gridSizeClassSizes:(SBHIconGridSizeClassSizes)arg3 ;
@end
