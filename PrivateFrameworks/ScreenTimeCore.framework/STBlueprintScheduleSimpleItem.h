/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateComponents;

@interface STBlueprintScheduleSimpleItem : NSObject <NSCopying> {

	NSDateComponents* _startTime;
	NSDateComponents* _endTime;

}

@property (nonatomic,retain) NSDateComponents * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDateComponents * endTime;                //@synthesize endTime=_endTime - In the implementation block
-(NSDateComponents *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)startTime;
-(void)setStartTime:(NSDateComponents *)arg1 ;
-(void)setEndTime:(NSDateComponents *)arg1 ;
@end

