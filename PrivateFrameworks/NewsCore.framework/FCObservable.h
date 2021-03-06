/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FCObservable : NSObject {

	id _value;
	NSMutableArray* _observers;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
-(NSMutableArray *)observers;
-(id)initWithValue:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setToken:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)token;
-(id)init;
-(id)observe:(/*^block*/id)arg1 ;
-(id)value;
-(void)next:(id)arg1 ;
-(void)quietNext:(id)arg1 ;
@end

