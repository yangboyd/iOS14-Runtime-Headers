/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ConstantClasses.framework/ConstantClasses
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConstantClasses/ConstantClasses-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
+(id)alloc;
-(unsigned long long)capacity;
-(id)objectEnumerator;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(oneway void)release;
-(void)dealloc;
-(id)allValues;
-(id)keyEnumerator;
-(unsigned long long)retainCount;
-(id)allKeys;
-(unsigned long long)count;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)retain;
-(id)objectForKey:(id)arg1 ;
@end

