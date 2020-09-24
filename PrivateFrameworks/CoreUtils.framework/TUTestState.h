/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TUTestState : NSObject {

	NSMutableDictionary* _objects;
	int _signalCount;

}

@property (nonatomic,readonly) int signalCount;              //@synthesize signalCount=_signalCount - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)signal;
-(int)signalCount;
-(void)incrementIntegerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)description;
-(int)waitWithTimeout:(double)arg1 ;
@end
