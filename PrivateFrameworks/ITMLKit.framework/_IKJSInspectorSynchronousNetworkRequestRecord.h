/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKNetworkRequestRecord.h>

@class NSString, NSDate, _IKJSInspectorNetworkLoader, NSDictionary, NSURLRequest, NSURLResponse, NSData;

@interface _IKJSInspectorSynchronousNetworkRequestRecord : NSObject <IKNetworkRequestRecord> {

	NSDate* _redirectEndTime;
	BOOL _isRedirecting;
	NSDate* _startTime;
	NSString* _identifier;
	_IKJSInspectorNetworkLoader* _loader;
	long long _resourceType;
	long long _initiatorType;
	long long _state;
	NSDictionary* _timingData;
	NSURLRequest* _URLRequest;
	NSURLResponse* _URLResponse;
	NSData* _responseBodyData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _IKJSInspectorNetworkLoader * loader;               //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) long long resourceType;                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) long long initiatorType;                                 //@synthesize initiatorType=_initiatorType - In the implementation block
@property (nonatomic,readonly) long long state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDictionary * timingData;                                   //@synthesize timingData=_timingData - In the implementation block
@property (getter=urlRequest,nonatomic,copy) NSURLRequest * URLRequest;                 //@synthesize URLRequest=_URLRequest - In the implementation block
@property (getter=urlResponse,nonatomic,copy) NSURLResponse * URLResponse;              //@synthesize URLResponse=_URLResponse - In the implementation block
@property (nonatomic,copy) NSData * responseBodyData;                                   //@synthesize responseBodyData=_responseBodyData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_protocolResourceTypeForType:(long long)arg1 ;
+(long long)_responseSourceTypeForCacheType:(long long)arg1 ;
-(long long)resourceType;
-(void)didFailWithError:(id)arg1 ;
-(NSString *)identifier;
-(id)urlRequest;
-(id)urlResponse;
-(_IKJSInspectorNetworkLoader *)loader;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(NSDictionary *)timingData;
-(void)didReceiveData:(id)arg1 ;
-(void)setLoader:(_IKJSInspectorNetworkLoader *)arg1 ;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(long long)state;
-(NSData *)responseBodyData;
-(void)setResponseBodyData:(NSData *)arg1 ;
-(NSString *)description;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBodyBlock:(/*^block*/id)arg2 ;
-(void)willSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 loader:(id)arg2 resourceType:(long long)arg3 initiatorType:(long long)arg4 ;
-(long long)initiatorType;
-(void)_processEventType:(long long)arg1 ;
-(void)_dispatchEvent:(long long)arg1 block:(/*^block*/id)arg2 ;
-(void)didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 ;
-(void)_didCompleteLoadingFromCache:(long long)arg1 mimeType:(id)arg2 withResponseBody:(id)arg3 timestamp:(double)arg4 ;
-(void)willSendRequest:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 timingData:(id)arg2 ;
-(void)didCompleteLoadingFromMemoryWithRequest:(id)arg1 response:(id)arg2 withResponseBodyBlock:(/*^block*/id)arg3 ;
-(void)didCompleteLoadingWithResponseBody:(id)arg1 ;
-(void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(id)arg2 mimeType:(id)arg3 ;
@end
