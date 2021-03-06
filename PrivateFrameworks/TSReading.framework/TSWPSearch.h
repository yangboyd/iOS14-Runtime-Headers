/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch {

	NSString* _searchedString;
	TSWPFilteredString* _filteredString;
	TSWPStorage* _storage;
	NSRange _range;

}

@property (nonatomic,retain,readonly) TSWPFilteredString * filteredString;              //@synthesize filteredString=_filteredString - In the implementation block
@property (nonatomic,readonly) TSWPStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * searchedString;                               //@synthesize searchedString=_searchedString - In the implementation block
-(NSRange)range;
-(TSWPStorage *)storage;
-(void)dealloc;
-(BOOL)isComplete;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 storage:(id)arg4 range:(NSRange)arg5 ;
-(NSString *)searchedString;
-(void)foundHitWithRange:(NSRange)arg1 ;
-(TSWPFilteredString *)filteredString;
@end

