/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {

	NSData* _backingData;
	NSData* _superdata;

}
+(unsigned)dataChunkType;
+(id)chunkOfType:(unsigned)arg1 data:(id)arg2 superdata:(id)arg3 ;
+(id)chunksFromFileAtPath:(id)arg1 ;
+(id)chunksFromData:(id)arg1 ;
+(id)serializeChunks:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSuperdata:(id)arg1 ;
@end
