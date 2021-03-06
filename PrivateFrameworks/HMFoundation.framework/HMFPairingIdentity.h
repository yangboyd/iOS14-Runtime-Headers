/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	HMFPairingKey* _publicKey;
	HMFPairingKey* _privateKey;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * publicKey;                     //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * privateKey;                    //@synthesize privateKey=_privateKey - In the implementation block
@property (copy,readonly) HMFPairingIdentity * publicPairingIdentity; 
+(BOOL)supportsSecureCoding;
+(id)pairingIdentity;
-(HMFPairingKey *)publicKey;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributeDescriptions;
-(id)shortDescription;
-(HMFPairingKey *)privateKey;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(unsigned long long)hash;
-(HMFPairingIdentity *)publicPairingIdentity;
@end

