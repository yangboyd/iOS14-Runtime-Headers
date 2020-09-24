/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface SSVRedeemCodeItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * redeemCodeDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long itemIdentifier; 
-(long long)itemIdentifier;
-(id)initWithRedeemCodeDictionary:(id)arg1 ;
-(id)initWithLookupItem:(id)arg1 ;
-(NSDictionary *)redeemCodeDictionary;
@end
