/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INIntent, INIntentResponse;

@interface INIntentExecutionResult : NSObject <NSSecureCoding> {

	INIntent* _intent;
	INIntentResponse* _intentResponse;

}

@property (nonatomic,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)initWithIntent:(id)arg1 response:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INIntent *)intent;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(INIntentResponse *)intentResponse;
-(id)description;
@end
