/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface HKValueRange : NSObject <NSCopying> {

	id _minValue;
	id _maxValue;

}

@property (nonatomic,copy) id minValue;                         //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,copy) id maxValue;                         //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
+(id)valueRangeWithMinValue:(id)arg1 maxValue:(id)arg2 ;
-(void)setMaxValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)maxValue;
-(id)minValue;
-(NSDate *)endDate;
-(void)setMinValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(void)unionRange:(id)arg1 ;
-(id)description;
-(void)unionMinValueWithRange:(id)arg1 ;
-(void)unionMaxValueWithRange:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 exclusiveStart:(BOOL)arg2 exclusiveEnd:(BOOL)arg3 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
@end
