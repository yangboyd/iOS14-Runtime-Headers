/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLVideoChoosingOptions.h>

@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)videoVersion;
-(BOOL)restrictToPlayableOnCurrentDevice;
-(long long)videoDeliveryMode;
-(BOOL)isMediumHighQualityAllowed;
-(BOOL)isStreamingAllowed;
-(BOOL)isNetworkAccessAllowed;
@end
