/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMFActivity, NSDictionary, NSData;

@interface HMFHTTPResponseInternal : HMFObject <NSCopying> {

	HMFActivity* _activity;
	long long _statusCode;
	NSDictionary* _headerFields;
	NSData* _body;

}

@property (nonatomic,readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSData * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                 //@synthesize activity=_activity - In the implementation block
-(long long)statusCode;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActivity:(HMFActivity *)arg1 ;
-(NSDictionary *)headerFields;
-(id)init;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(HMFActivity *)activity;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithStatusCode:(long long)arg1 headerFields:(id)arg2 body:(id)arg3 ;
@end

