/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned long long _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(id)initWithGraph:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)_updateVisitedCount:(id)arg1 ;
@end

