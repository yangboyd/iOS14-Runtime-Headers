/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@class NSString;

@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	unsigned long long _dataWritingFileProtection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)initWithFileProtectionType:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(unsigned long long)_dataWritingOptionForFileProtectionType:(id)arg1 ;
-(id)dataAtPath:(id)arg1 ;
@end

