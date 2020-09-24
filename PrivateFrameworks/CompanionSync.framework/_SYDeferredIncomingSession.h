/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary, IDSMessageContext;

@interface _SYDeferredIncomingSession : NSObject {

	NSURL* _resourceURL;
	NSString* _identifier;
	NSDictionary* _metadata;
	IDSMessageContext* _idsContext;

}

@property (nonatomic,copy) NSURL * resourceURL;                           //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) IDSMessageContext * idsContext;              //@synthesize idsContext=_idsContext - In the implementation block
-(NSString *)identifier;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)setResourceURL:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)resourceURL;
-(void)setIdsContext:(IDSMessageContext *)arg1 ;
-(IDSMessageContext *)idsContext;
@end
