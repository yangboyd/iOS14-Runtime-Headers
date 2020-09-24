/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFListEditorDeletionConfirmation : NSObject {

	unsigned long long _itemIndex;
	/*^block*/id _confirmationHandler;

}

@property (nonatomic,readonly) unsigned long long itemIndex;              //@synthesize itemIndex=_itemIndex - In the implementation block
@property (nonatomic,readonly) id confirmationHandler;                    //@synthesize confirmationHandler=_confirmationHandler - In the implementation block
+(id)confirmationForDeletingItemAtIndex:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)confirmationHandler;
-(unsigned long long)itemIndex;
-(id)initWithItemIndex:(unsigned long long)arg1 confirmationHandler:(/*^block*/id)arg2 ;
@end
