/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISCompositorElement.h>
#import <libobjc.A.dylib/ISCompositorResourceProvider.h>

@protocol ISCompositorRecipe;
@class NSMutableDictionary, NSString;

@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider> {

	id<ISCompositorRecipe> _recipe;
	NSMutableDictionary* _resourceByName;

}

@property (retain) id<ISCompositorRecipe> recipe;                                    //@synthesize recipe=_recipe - In the implementation block
@property (readonly) NSMutableDictionary * resourceByName;                           //@synthesize resourceByName=_resourceByName - In the implementation block
@property (readonly) id<ISCompositorResourceProvider> resourceProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resourceNamed:(id)arg1 ;
-(void)setRecipe:(id<ISCompositorRecipe>)arg1 ;
-(id)initWithRecipe:(id)arg1 resources:(id)arg2 ;
-(id<ISCompositorRecipe>)recipe;
-(void)clearResources;
-(NSMutableDictionary *)resourceByName;
-(id)init;
-(id<ISCompositorResourceProvider>)resourceProvider;
-(void)addResourcesFromDictionary:(id)arg1 ;
-(void)setResource:(id)arg1 forName:(id)arg2 ;
@end

