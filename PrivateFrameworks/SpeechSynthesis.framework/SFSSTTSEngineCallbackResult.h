/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechSynthesis.framework/SpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechSynthesis/SpeechSynthesis-Structs.h>
@class NSError;

@interface SFSSTTSEngineCallbackResult : NSObject {

	vector<unsigned char, std::__1::allocator<unsigned char> > _pcmDataBuffer;
	vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >* _marker;
	NSError* _error;
	/*^block*/id _beginCallback;
	/*^block*/id _chunkCallback;
	/*^block*/id _endCallback;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,copy) id beginCallback;                                //@synthesize beginCallback=_beginCallback - In the implementation block
@property (nonatomic,copy) id chunkCallback;                                //@synthesize chunkCallback=_chunkCallback - In the implementation block
@property (nonatomic,copy) id endCallback;                                  //@synthesize endCallback=_endCallback - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;              //@synthesize asbd=_asbd - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(AudioStreamBasicDescription)asbd;
-(vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker> >*)marker;
-(NSError *)error;
-(id)pcmData;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(int)synthesisCallback:(int)arg1 ;
-(id)initWithBeginCallback:(/*^block*/id)arg1 chunkCallback:(/*^block*/id)arg2 endCallback:(/*^block*/id)arg3 ;
-(vector<unsigned char, std::__1::allocator<unsigned char> >*)pcmDataBuffer;
-(id)beginCallback;
-(void)setBeginCallback:(id)arg1 ;
-(id)chunkCallback;
-(void)setChunkCallback:(id)arg1 ;
-(id)endCallback;
-(void)setEndCallback:(id)arg1 ;
@end
