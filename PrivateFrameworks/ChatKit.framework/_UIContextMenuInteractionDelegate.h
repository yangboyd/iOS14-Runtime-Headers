/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIContextMenuInteractionDelegate <NSObject>
@optional
-(void)contextMenuInteractionDidEnd:(id)arg1;
-(void)contextMenuInteractionWillPresent:(id)arg1;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
-(id)targetedPreviewForDismissingContextMenuInteraction:(id)arg1;

@required
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;

@end

