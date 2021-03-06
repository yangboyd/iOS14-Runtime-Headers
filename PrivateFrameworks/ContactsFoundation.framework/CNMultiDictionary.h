/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _entries;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)multiDictionary;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsForKeys:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)allKeys;
-(unsigned long long)count;
-(void)eachObject:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithEntries:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
@end

