/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDClient, NSSet, NSDictionary;

@interface ACDClientAuthorization : NSObject {

	BOOL _isGranted;
	ACDClient* _client;
	NSSet* _grantedPermissions;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL isGranted;                          //@synthesize isGranted=_isGranted - In the implementation block
@property (nonatomic,retain) ACDClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSSet * grantedPermissions;              //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(void)setClient:(ACDClient *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(BOOL)isGranted;
-(ACDClient *)client;
-(id)initForClient:(id)arg1 ;
-(NSSet *)grantedPermissions;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
-(void)setIsGranted:(BOOL)arg1 ;
@end
