/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXComponent, SXComponentState;
#import <Silex/Silex-Structs.h>
@class NFPendingPromise, SXLayoutOptions;

@interface SXPendingLayoutInvalidation : NSObject {

	id<SXComponent> _component;
	id<SXComponentState> _componentState;
	NFPendingPromise* _pendingPromise;
	SXLayoutOptions* _layoutOptions;
	CGSize _suggestedSize;

}

@property (nonatomic,readonly) id<SXComponent> component;                        //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) CGSize suggestedSize;                             //@synthesize suggestedSize=_suggestedSize - In the implementation block
@property (nonatomic,readonly) id<SXComponentState> componentState;              //@synthesize componentState=_componentState - In the implementation block
@property (nonatomic,readonly) NFPendingPromise * pendingPromise;                //@synthesize pendingPromise=_pendingPromise - In the implementation block
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;                  //@synthesize layoutOptions=_layoutOptions - In the implementation block
-(SXLayoutOptions *)layoutOptions;
-(NFPendingPromise *)pendingPromise;
-(CGSize)suggestedSize;
-(id<SXComponent>)component;
-(id<SXComponentState>)componentState;
-(id)initWithComponent:(id)arg1 suggestedSize:(CGSize)arg2 componentState:(id)arg3 pendingPromise:(id)arg4 layoutOptions:(id)arg5 ;
@end

