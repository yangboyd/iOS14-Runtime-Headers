/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPassUpgradeRequest;

@interface PKPaymentRequestPassUpdateRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPassUpgradeRequest* _request;

}

@property (nonatomic,readonly) PKPaymentPass * pass;                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassUpgradeRequest * request;              //@synthesize request=_request - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2 ;
-(PKPassUpgradeRequest *)request;
-(PKPaymentPass *)pass;
@end

