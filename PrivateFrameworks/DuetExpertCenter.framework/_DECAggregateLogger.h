/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DECAggregateLogger : NSObject {

	NSMutableDictionary* _batchScalars;

}
+(void)logIncrementKey:(id)arg1 ;
+(double)logKey:(id)arg1 blockTiming:(/*^block*/id)arg2 ;
+(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
+(void)logWithCallback:(/*^block*/id)arg1 ;
+(void)logKey:(id)arg1 replaceScalarValueWith:(long long)arg2 ;
+(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(void)flush;
-(void)logIncrementKey:(id)arg1 ;
-(void)logKey:(id)arg1 scalarValue:(long long)arg2 ;
-(void)logKey:(id)arg1 distValue:(double)arg2 ;
-(id)initCallbackInstance;
@end
