/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (assign,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSArray * items; 
+(id)collection;
+(id)collectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)items;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)editable;
-(void)setItems:(NSArray *)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
@end
