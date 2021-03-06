/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATTSSpeechSynthesisCompleted : SABaseClientBoundCommand

@property (assign,nonatomic) long long totalPacketNumber; 
+(id)speechSynthesisCompleted;
+(id)speechSynthesisCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(long long)totalPacketNumber;
-(void)setTotalPacketNumber:(long long)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
@end

