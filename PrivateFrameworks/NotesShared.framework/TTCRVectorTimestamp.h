/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <ReminderKit/TTVectorTimestamp.h>

@class CRVectorTimestamp;

@interface TTCRVectorTimestamp : TTVectorTimestamp {

	CRVectorTimestamp* _crTimestamp;

}

@property (nonatomic,retain) CRVectorTimestamp * crTimestamp;              //@synthesize crTimestamp=_crTimestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(id)init;
-(void)setCrTimestamp:(CRVectorTimestamp *)arg1 ;
-(CRVectorTimestamp *)crTimestamp;
-(id)allUUIDs;
@end

