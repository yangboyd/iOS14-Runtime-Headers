/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCAssistantPlaybackQueue.h>

@class NSArray, MPIdentifierSet;

@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue {

	NSArray* _storeItemIDs;
	long long _shuffleType;
	MPIdentifierSet* _collectionIdentifierSet;

}

@property (nonatomic,readonly) NSArray * storeItemIDs;                                 //@synthesize storeItemIDs=_storeItemIDs - In the implementation block
@property (assign,nonatomic) long long shuffleType;                                    //@synthesize shuffleType=_shuffleType - In the implementation block
@property (nonatomic,readonly) MPIdentifierSet * collectionIdentifierSet;              //@synthesize collectionIdentifierSet=_collectionIdentifierSet - In the implementation block
+(id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(void)setShuffleType:(long long)arg1 ;
-(MPIdentifierSet *)collectionIdentifierSet;
-(long long)shuffleType;
-(id)description;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3 ;
-(NSArray *)storeItemIDs;
@end

