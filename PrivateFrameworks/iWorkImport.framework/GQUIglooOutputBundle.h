/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQUOutputBundle.h>

@class NSString;

@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {

	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriPrefix;
	CFStringRef mUuidStr;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setUriPrefix:(CFStringRef)arg1 ;
-(CFStringRef)createUriForResource:(CFStringRef)arg1 ;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)arg1 ;
-(BOOL)setData:(CFDataRef)arg1 mimeType:(CFStringRef)arg2 forNamedResource:(CFStringRef)arg3 ;
-(CFDataRef)mainHtmlData;
-(CFDictionaryRef)attachments;
-(CFDictionaryRef)createOutputDictionary;
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)setPageElementXPath:(CFStringRef)arg1 withThumbnailsOnLeft:(BOOL)arg2 ;
@end

