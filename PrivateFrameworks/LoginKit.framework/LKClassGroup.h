/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface LKClassGroup : NSObject <NSSecureCoding> {

	NSString* _classGroupName;
	NSArray* _classes;

}

@property (nonatomic,copy,readonly) NSString * classGroupName;              //@synthesize classGroupName=_classGroupName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classes;                      //@synthesize classes=_classes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)classes;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToLKClassGroup:(id)arg1 ;
-(NSString *)classGroupName;
-(id)initWithGroupName:(id)arg1 classes:(id)arg2 ;
-(id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2 ;
@end

