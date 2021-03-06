/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKMinimalUserInterfaceItem.h>
#import <libobjc.A.dylib/AKInkChooserUserInterfaceItem.h>

@class PKInk, NSString;

@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKInkChooserUserInterfaceItem> {

	PKInk* _ink;

}

@property (nonatomic,retain) PKInk * ink;                           //@synthesize ink=_ink - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
@end

