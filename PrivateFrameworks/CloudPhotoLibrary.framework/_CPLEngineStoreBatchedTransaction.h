/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLTransaction;

@interface _CPLEngineStoreBatchedTransaction : NSObject {

	CPLTransaction* _dirty;
	/*^block*/id _block;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)_releaseDirty;
@end

