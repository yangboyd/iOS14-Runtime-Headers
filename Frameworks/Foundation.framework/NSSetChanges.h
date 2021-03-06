/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned long long changeCount; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(unsigned long long)changeCount;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)applyChangesToSet:(id)arg1 ;
-(void)enumerateChanges:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)_toManyPropertyType;
-(void)addChange:(id)arg1 ;
@end

