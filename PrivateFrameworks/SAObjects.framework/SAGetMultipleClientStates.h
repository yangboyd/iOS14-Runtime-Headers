/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * clientStateGetters; 
+(id)getMultipleClientStates;
+(id)getMultipleClientStatesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)clientStateGetters;
-(void)setClientStateGetters:(NSArray *)arg1 ;
@end
