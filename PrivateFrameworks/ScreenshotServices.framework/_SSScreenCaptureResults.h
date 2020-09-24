/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface _SSScreenCaptureResults : NSObject {

	UIImage* _image;
	NSString* _failureReasonIfImageIsNil;

}

@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * failureReasonIfImageIsNil;              //@synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setFailureReasonIfImageIsNil:(NSString *)arg1 ;
-(NSString *)failureReasonIfImageIsNil;
@end
