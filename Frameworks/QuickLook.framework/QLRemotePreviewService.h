/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLRemotePreviewService <NSObject>
@required
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2;
-(void)previewControllerWantsFullScreen:(BOOL)arg1;
-(void)previewControllerDidUpdateTitle:(id)arg1;
-(void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
-(void)getPrinterProxyWithCompletionHandler:(/*^block*/id)arg1;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setHostViewControllerProxy:(id)arg1;
-(void)invalidateService;
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;

@end
