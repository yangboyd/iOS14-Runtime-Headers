/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTask;


@protocol INSetTaskAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTask * modifiedTask; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(void)setWarnings:(unsigned long long)arg1;
-(INTask *)modifiedTask;
-(void)setModifiedTask:(id)arg1;
-(unsigned long long)warnings;

@end
