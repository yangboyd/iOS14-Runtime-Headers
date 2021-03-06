/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject {

	CKComponentLayout* _layout;
	id _model;
	CKComponentScopeRoot* _scopeRoot;
	CKComponentBoundsAnimation _boundsAnimation;

}

@property (nonatomic,readonly) id model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) CKComponentScopeRoot * scopeRoot;                        //@synthesize scopeRoot=_scopeRoot - In the implementation block
@property (nonatomic,readonly) CKComponentBoundsAnimation boundsAnimation;              //@synthesize boundsAnimation=_boundsAnimation - In the implementation block
-(id)model;
-(const CKComponentLayout*)layout;
-(CKComponentBoundsAnimation)boundsAnimation;
-(CKComponentScopeRoot *)scopeRoot;
-(id)initWithLayout:(const CKComponentLayout*)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(CKComponentBoundsAnimation)arg4 ;
@end

