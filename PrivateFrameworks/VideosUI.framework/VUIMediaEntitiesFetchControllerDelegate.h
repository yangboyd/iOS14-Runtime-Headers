/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIMediaEntitiesFetchControllerDelegate <NSObject>
@optional
-(BOOL)controllerShouldFetchForContentsChange:(id)arg1;

@required
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
-(void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;

@end

