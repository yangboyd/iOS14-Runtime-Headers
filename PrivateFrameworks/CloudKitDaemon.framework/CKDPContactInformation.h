/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPContactInformation : PBCodable <NSCopying> {

	NSString* _containerScopedUserId;
	NSString* _emailAddress;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) BOOL hasEmailAddress; 
@property (nonatomic,retain) NSString * emailAddress;                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerScopedUserId; 
@property (nonatomic,retain) NSString * containerScopedUserId;              //@synthesize containerScopedUserId=_containerScopedUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber;                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(void)setFirstName:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)emailAddress;
-(NSString *)lastName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLastName;
-(BOOL)hasPhoneNumber;
-(BOOL)hasEmailAddress;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFirstName;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setContainerScopedUserId:(NSString *)arg1 ;
-(BOOL)hasContainerScopedUserId;
-(NSString *)containerScopedUserId;
@end

