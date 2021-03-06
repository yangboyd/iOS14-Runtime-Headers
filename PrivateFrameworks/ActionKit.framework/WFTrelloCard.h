/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFTrelloObject.h>

@class NSString, NSNumber, NSDate, NSURL;

@interface WFTrelloCard : WFTrelloObject {

	NSString* _itemDescription;
	NSNumber* _creationPosition;
	NSDate* _dueDate;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * itemDescription;               //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * creationPosition;              //@synthesize creationPosition=_creationPosition - In the implementation block
@property (nonatomic,readonly) NSDate * dueDate;                         //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)dueDateJSONTransformer;
-(NSDate *)dueDate;
-(NSURL *)URL;
-(NSString *)itemDescription;
-(NSNumber *)creationPosition;
@end

