/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(unsigned long long)countForRequestType:(int)arg1 ;
-(void)incrementCountForRequestType:(int)arg1 ;
-(NSDictionary *)requests;
-(id)init;
@end

