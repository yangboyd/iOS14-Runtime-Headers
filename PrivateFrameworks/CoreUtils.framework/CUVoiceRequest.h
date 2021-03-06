/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSpeechRequest;

@interface CUVoiceRequest : NSObject {

	unsigned _flags;
	/*^block*/id _completion;
	id _owner;
	VSSpeechRequest* _speechRequest;

}

@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id owner;                                     //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;              //@synthesize speechRequest=_speechRequest - In the implementation block
-(id)owner;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setOwner:(id)arg1 ;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)speechRequest;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

