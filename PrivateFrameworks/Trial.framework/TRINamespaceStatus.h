/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding> {

	unsigned _compatibilityVersion;
	NSString* _namespaceName;
	NSDate* _lastFetchAttempt;

}

@property (nonatomic,readonly) NSString * namespaceName;                   //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchAttempt;                  //@synthesize lastFetchAttempt=_lastFetchAttempt - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)statusFromData:(id)arg1 ;
+(id)statusWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)compatibilityVersion;
-(NSString *)namespaceName;
-(NSDate *)lastFetchAttempt;
-(id)init;
-(id)initWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 lastFetchAttempt:(id)arg3 ;
-(id)copyWithReplacementNamespaceName:(id)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(id)copyWithReplacementLastFetchAttempt:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)asData;
-(id)description;
-(BOOL)isEqualToStatus:(id)arg1 ;
@end
