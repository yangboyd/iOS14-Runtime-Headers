/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timeInSeconds; 
@property (nonatomic,copy) NSArray * viewIds; 
+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)viewIds;
-(BOOL)requiresResponse;
-(NSNumber *)timeInSeconds;
-(void)setTimeInSeconds:(NSNumber *)arg1 ;
-(void)setViewIds:(NSArray *)arg1 ;
@end
