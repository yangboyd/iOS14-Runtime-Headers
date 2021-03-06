/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShowDialogEvent : WFEvent {

	NSString* _key;
	NSString* _dialogType;
	NSString* _presentationStyle;
	NSString* _dismissalType;
	NSString* _automationType;

}

@property (nonatomic,copy) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * dialogType;                     //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,copy) NSString * presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy) NSString * dismissalType;                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,copy) NSString * automationType;                 //@synthesize automationType=_automationType - In the implementation block
+(Class)codableEventClass;
-(NSString *)presentationStyle;
-(NSString *)key;
-(void)setPresentationStyle:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)dialogType;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setDismissalType:(NSString *)arg1 ;
-(NSString *)dismissalType;
@end

