/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUZipArchive.h>

@protocol OS_dispatch_queue, TSUReadChannel;
@class NSObject, NSURL;

@interface TSUZipFileArchive : TSUZipArchive {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _archiveLength;
	id<TSUReadChannel> _archiveReadChannel;
	NSURL* _temporaryDirectoryURL;

}
+(void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(unsigned long long)archiveLength;
-(void)removeTemporaryDirectory;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(id)readChannel;
-(BOOL)openWithURL:(id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg1 ;
-(id)initWithWriter:(id)arg1 atURL:(id)arg2 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 ;
@end

