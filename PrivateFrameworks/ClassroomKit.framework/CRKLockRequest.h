/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKLockRequest : CATTaskRequest {

	NSString* _lockedByLabel;
	NSString* _passcode;

}

@property (nonatomic,copy) NSString * lockedByLabel;              //@synthesize lockedByLabel=_lockedByLabel - In the implementation block
@property (nonatomic,copy) NSString * passcode;                   //@synthesize passcode=_passcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)passcode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)lockedByLabel;
-(void)setLockedByLabel:(NSString *)arg1 ;
@end

