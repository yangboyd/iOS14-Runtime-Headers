/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, EDAMUserException, EDAMNotFoundException;

@interface EDAMManageNotebookSharesError : FATObject {

	EDAMUserIdentity* _userIdentity;
	EDAMUserException* _userException;
	EDAMNotFoundException* _notFoundException;

}

@property (nonatomic,retain) EDAMUserIdentity * userIdentity;                        //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) EDAMUserException * userException;                      //@synthesize userException=_userException - In the implementation block
@property (nonatomic,retain) EDAMNotFoundException * notFoundException;              //@synthesize notFoundException=_notFoundException - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserIdentity:(EDAMUserIdentity *)arg1 ;
-(EDAMUserIdentity *)userIdentity;
-(EDAMUserException *)userException;
-(void)setUserException:(EDAMUserException *)arg1 ;
-(EDAMNotFoundException *)notFoundException;
-(void)setNotFoundException:(EDAMNotFoundException *)arg1 ;
@end

