/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKBackForwardListItem : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardListItem> _item;

}

@property (readonly) WebBackForwardListItem* _item; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * title; 
@property (copy,readonly) NSURL * initialURL; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WebBackForwardListItem*)_item;
-(Object*)_apiObject;
-(void)dealloc;
-(NSString *)title;
-(NSURL *)URL;
-(NSURL *)initialURL;
-(CGImageRef)_copySnapshotForTesting;
-(CGPoint)_scrollPosition;
@end

