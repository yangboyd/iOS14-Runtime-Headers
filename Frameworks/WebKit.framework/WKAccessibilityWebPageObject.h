/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {

	NSData* _remoteTokenData;

}

@property (nonatomic,retain) NSData * remoteTokenData;              //@synthesize remoteTokenData=_remoteTokenData - In the implementation block
-(NSData *)remoteTokenData;
-(void)dealloc;
-(void)_accessibilityCategoryInstalled:(id)arg1 ;
-(id)init;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)setRemoteTokenData:(NSData *)arg1 ;
-(double)pageScale;
@end

