/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	long long _selectionType;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long selectionType;              //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,retain) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(long long)selectionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelectionType:(long long)arg1 ;
-(id)description;
@end

