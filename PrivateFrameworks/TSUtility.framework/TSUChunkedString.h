/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <Foundation/NSMutableString.h>

@interface TSUChunkedString : NSMutableString {

	unsigned long long _length;
	vector<std::__1::shared_ptr<TSUStringChunk>, std::__1::allocator<std::__1::shared_ptr<TSUStringChunk> > >* _chunks;
	unsigned long long _chunkLength;

}
-(void)appendString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(unsigned long long)length;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(id)init;
-(void)compact;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithChunkLength:(unsigned long long)arg1 ;
-(void)p_appendRange:(NSRange)arg1 fromString:(id)arg2 ;
-(void)p_insertCharactersInRange:(NSRange)arg1 fromString:(id)arg2 atIndex:(unsigned long long)arg3 chunkIndex:(unsigned long long)arg4 ;
-(void)p_deleteCharactersInRange:(NSRange)arg1 chunkIndex:(unsigned long long)arg2 ;
-(void)p_compactChunksInRange:(NSRange)arg1 ;
@end

