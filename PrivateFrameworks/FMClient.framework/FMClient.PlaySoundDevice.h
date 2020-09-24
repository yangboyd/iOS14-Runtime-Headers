/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {

	 serverId;
	 locality;
	 safetyWarningConfirmed;

}

@property (readonly,nonatomic) NSString * serverId; 
@property (readonly,nonatomic) NSString * locality; 
@property (readonly,nonatomic) BOOL safetyWarningConfirmed; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityUnknown;
-(NSString *)serverId;
-(NSString *)locality;
-(NSString *)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3 ;
-(BOOL)safetyWarningConfirmed;
@end
