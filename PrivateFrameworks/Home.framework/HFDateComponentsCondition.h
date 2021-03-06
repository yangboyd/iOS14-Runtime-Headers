/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTimeCondition.h>
#import <libobjc.A.dylib/HFPrimitiveTimeCondition.h>

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition> {

	unsigned long long _comparisonType;
	NSDateComponents* _dateComponents;

}

@property (nonatomic,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
@property (nonatomic,readonly) BOOL isTimeOfDayCondition; 
@property (nonatomic,readonly) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDateComponents *)dateComponents;
-(id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2 ;
-(BOOL)isTimeOfDayCondition;
-(long long)compare:(id)arg1 ;
-(unsigned long long)comparisonType;
-(NSString *)description;
-(unsigned long long)timeConditionType;
-(id)initWithPredicate:(id)arg1 ;
@end

