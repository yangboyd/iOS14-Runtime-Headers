/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol SFSafariPasswordCredential <NSCopying,NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * user; 
@property (nonatomic,copy,readonly) NSString * site; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@required
-(NSString *)user;
-(NSString *)site;
-(BOOL)isExternal;
-(NSDate *)creationDate;
-(NSString *)password;

@end
