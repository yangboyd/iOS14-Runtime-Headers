/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleFactory.h>

@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject <NUArticleFactory> {

	long long _qualityOfService;
	long long _relativePriority;
	FCArticleController* _articleController;

}

@property (nonatomic,readonly) FCArticleController * articleController;              //@synthesize articleController=_articleController - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                             //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) long long relativePriority;                             //@synthesize relativePriority=_relativePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)qualityOfService;
-(long long)relativePriority;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setRelativePriority:(long long)arg1 ;
-(FCArticleController *)articleController;
-(id)createArticlesForArticleIDs:(id)arg1 ;
-(id)createArticleForHeadline:(id)arg1 ;
-(id)initWithArticleController:(id)arg1 ;
@end

