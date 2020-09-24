/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class LSApplicationProxy, NSString;

@interface _SFOpenWithAppUIActivity : UIActivity <LSOpenResourceOperationDelegate> {

	LSApplicationProxy* _appProxy;
	NSString* _filePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)performActivity;
-(id)_activityImage;
-(id)initWithApplicationIdentifier:(id)arg1 andFilePath:(id)arg2 ;
@end
