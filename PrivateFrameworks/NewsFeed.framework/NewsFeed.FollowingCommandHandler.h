/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsFeed.FollowingCommandHandler : NSObject <FCSubscriptionObserving> {

	 subscriptionController;
	 followingManager;
	 commandCenter;
	 sceneProvider;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(id)init;
@end
