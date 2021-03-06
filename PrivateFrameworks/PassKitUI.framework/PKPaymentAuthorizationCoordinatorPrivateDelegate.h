/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>
@optional
-(void)paymentAuthorizationCoordinator:(id)arg1 willFinishWithError:(id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationCoordinator:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end

