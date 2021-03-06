/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CKDClientContext, CKDKeyValueDiskCache;

@interface CKDPublicIdentityLookupService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CKDClientContext* _context;
	CKDKeyValueDiskCache* _cache;

}

@property (nonatomic,retain) CKDKeyValueDiskCache * cache;                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;              //@synthesize context=_context - In the implementation block
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(CKDKeyValueDiskCache *)cache;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(id)initWithClientContext:(id)arg1 ;
-(void)removeCacheForLookupInfos:(id)arg1 ;
-(void)scheduleRequest:(id)arg1 forOperation:(id)arg2 ;
-(void)configureRequest:(id)arg1 parentOperation:(id)arg2 ;
@end

