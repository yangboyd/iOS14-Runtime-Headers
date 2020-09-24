/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NLParsecNamedEntity <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned char category; 
@property (nonatomic,readonly) float score; 
@required
-(float)score;
-(unsigned char)category;
-(NSString *)name;

@end
