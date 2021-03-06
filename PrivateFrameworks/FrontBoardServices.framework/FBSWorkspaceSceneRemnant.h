/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneParameters;

@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding> {

	NSString* _identifier;
	NSString* _group;
	FBSSceneParameters* _parameters;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * group;                             //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(NSString *)identifier;
-(FBSSceneParameters *)parameters;
-(id)_initWithIdentifier:(id)arg1 group:(id)arg2 parameters:(id)arg3 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)init;
-(NSString *)group;
@end

