/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportMetadata, NSSet;

@interface NSCKExportOperation : NSManagedObject

@property (nonatomic,retain) NSNumber * statusNum; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSCKExportMetadata * exportMetadata; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,retain) NSSet * objects; 
+(id)entityPath;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
@end
