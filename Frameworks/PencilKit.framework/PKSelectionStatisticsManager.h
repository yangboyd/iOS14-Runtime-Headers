/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKSelectionStatisticsSession;

@interface PKSelectionStatisticsManager : NSObject {

	PKSelectionStatisticsSession* _selectionSession;
	CGPoint _lastContentOffset;

}
+(id)sharedStatisticsManager;
-(void)logSelectionAction:(long long)arg1 ;
-(void)recordSmartSelectionEventWithType:(long long)arg1 contentType:(long long)arg2 gestureInvoked:(long long)arg3 ;
-(void)logScrollEventWithContentOffset:(CGPoint)arg1 ;
-(void)logEndSelectionSessionIfNecessary;
-(void)recordDidMakeSelectionWithType:(long long)arg1 ;
-(void)_endSelectionSession;
-(void)_recordSelectionSession:(id)arg1 ;
@end
