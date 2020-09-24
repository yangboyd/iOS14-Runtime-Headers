/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIKeyboardLayoutStarDelegate.h>

@class NSString, UIKeyboardLayoutStar, UIKBScreenTraits, UITextInputTraits, UIKeyboardTaskQueue, UIKBTree, NSMutableArray, UIKBViewForResponderForwarding;

@interface UIKeyboardPopoverController : UIViewController <UIKeyboardLayoutStarDelegate> {

	NSString* _inputMode;
	UIKeyboardLayoutStar* _layout;
	UIKBScreenTraits* _screenTraits;
	UITextInputTraits* _textInputTraits;
	UIKeyboardTaskQueue* _taskQueue;
	UIKBTree* _keyboard;
	NSMutableArray* _hiddenKeys;
	UIKBViewForResponderForwarding* _containerForActiveKeys;

}

@property (nonatomic,readonly) NSString * inputModeIdentifier; 
@property (nonatomic,readonly) UIKeyboardLayoutStar * layout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)inputModeIdentifier;
-(id)keyboardLayout:(id)arg1 containingViewForActiveKey:(id)arg2 inKeyplaneView:(id)arg3 ;
-(CGSize)preferredContentSize;
-(long long)overrideUserInterfaceStyle;
-(id)initWithInputModeIdentifier:(id)arg1 textInputTraits:(id)arg2 taskQueue:(id)arg3 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)handleHardwareKeyboardEvent:(id)arg1 ;
-(UIKeyboardLayoutStar *)layout;
-(id)keyboardLayout:(id)arg1 willChangeRenderConfig:(id)arg2 ;
-(void)keyboardLayout:(id)arg1 didSwitchToKeyplane:(id)arg2 ;
@end
