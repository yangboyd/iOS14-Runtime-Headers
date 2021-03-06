/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTClippableImageEncoder.h>

@class NSString;

@interface AVTStickerImageEncoder : NSObject <AVTClippableImageEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)fileExtension;
-(id)dataFromImage:(id)arg1 clippingRect:(CGRect)arg2 ;
@end

