/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HIDAnalytics/HIDAnalytics-Structs.h>
@class NSMutableDictionary, NSString, NSDictionary;

@interface HIDAnalyticsEvent : NSObject {

	NSMutableDictionary* _fields;
	BOOL _isUpdated;
	NSString* _name;
	NSDictionary* _desc;

}

@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * desc;              //@synthesize desc=_desc - In the implementation block
-(void)setDesc:(NSDictionary *)arg1 ;
-(NSDictionary *)desc;
-(void)setIntegerValue:(unsigned long long)arg1 ;
-(void)cancel;
-(id)initWithAttributes:(id)arg1 description:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(void)addHistogramFieldWithSegments:(id)arg1 segments:(HIDAnalyticsHistogramSegmentConfig*)arg2 count:(long long)arg3 ;
-(id)value;
-(void)setName:(NSString *)arg1 ;
-(void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2 ;
-(void)addField:(id)arg1 ;
-(NSString *)name;
-(void)activate;
-(id)description;
@end

