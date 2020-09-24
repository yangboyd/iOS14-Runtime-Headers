/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCWatchedStock : NSObject <NSCopying> {

	NSString* _name;
	NSString* _shortName;
	NSString* _symbol;
	NSString* _exchange;
	NSString* _displaySymbol;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                  //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbol;                     //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * exchange;                   //@synthesize exchange=_exchange - In the implementation block
@property (nonatomic,copy,readonly) NSString * displaySymbol;              //@synthesize displaySymbol=_displaySymbol - In the implementation block
+(id)watchedStockWithSymbol:(id)arg1 name:(id)arg2 exchange:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)shortName;
-(NSString *)symbol;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)displaySymbol;
-(NSString *)exchange;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 displaySymbol:(id)arg5 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 symbol:(id)arg3 exchange:(id)arg4 ;
@end
