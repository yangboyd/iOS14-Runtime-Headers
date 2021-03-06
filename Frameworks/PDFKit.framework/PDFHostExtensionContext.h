/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <PDFKit/PDFHostProtocol.h>

@class PDFHostViewController, NSString;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol> {

	PDFHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) PDFHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setHostViewController:(PDFHostViewController *)arg1 ;
-(PDFHostViewController *)hostViewController;
-(oneway void)extensionToHost:(id)arg1 ;
@end

