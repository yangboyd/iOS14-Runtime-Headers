/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;
@class PKAddShareablePassConfiguration, _UIAsyncInvocation, PKRemoteShareableCredentialsMessageComposeViewController;

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {

	id<PKShareableCredentialsMessageComposeViewControllerDelegate> _delegate;
	PKAddShareablePassConfiguration* _configuration;
	_UIAsyncInvocation* _remoteVCRequest;
	PKRemoteShareableCredentialsMessageComposeViewController* _remoteVC;

}

@property (assign,nonatomic,__weak) id<PKShareableCredentialsMessageComposeViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(unsigned long long)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)modalPresentationStyle;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(long long)modalTransitionStyle;
-(void)_setRemoteVC:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<PKShareableCredentialsMessageComposeViewControllerDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PKShareableCredentialsMessageComposeViewControllerDelegate>)delegate;
@end

