/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNVCardReadingOptions : NSObject {

	BOOL _useConcurrentParsing;
	unsigned long long _contactLimit;
	NSArray* _propertiesToFetch;
	unsigned long long _maximumValueLength;

}

@property (assign,nonatomic) unsigned long long contactLimit;                    //@synthesize contactLimit=_contactLimit - In the implementation block
@property (nonatomic,copy) NSArray * propertiesToFetch;                          //@synthesize propertiesToFetch=_propertiesToFetch - In the implementation block
@property (assign,nonatomic) unsigned long long maximumValueLength;              //@synthesize maximumValueLength=_maximumValueLength - In the implementation block
@property (assign,nonatomic) BOOL useConcurrentParsing;                          //@synthesize useConcurrentParsing=_useConcurrentParsing - In the implementation block
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(NSArray *)propertiesToFetch;
-(void)setContactLimit:(unsigned long long)arg1 ;
-(void)setMaximumValueLength:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)contactLimit;
-(unsigned long long)maximumValueLength;
-(BOOL)useConcurrentParsing;
-(void)setUseConcurrentParsing:(BOOL)arg1 ;
@end
