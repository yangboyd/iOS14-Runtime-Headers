/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface ICMusicSubscriptionStatusCacheKey : NSObject <NSCopying> {

	NSNumber* _DSID;
	NSString* _phoneNumber;
	NSString* _storefrontIdentifier;

}

@property (nonatomic,copy) NSNumber * DSID;                              //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                       //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 requiringDSID:(BOOL)arg2 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentationIncludingDSID:(BOOL)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)stringRepresentation;
-(unsigned long long)hash;
-(NSNumber *)DSID;
-(id)description;
@end

