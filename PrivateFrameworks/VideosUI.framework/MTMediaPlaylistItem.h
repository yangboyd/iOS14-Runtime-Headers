/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MTMediaPlaylistItem <NSObject>
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (nonatomic,readonly) unsigned long long startPosition; 
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(NSArray *)eventData;
-(unsigned long long)startPosition;
-(unsigned long long)startOverallPosition;
-(unsigned long long)overallPosition;

@end

