/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCDatagramChannelManager : NSObject {

	opaque_pthread_mutex_t _stateLock;
	unsigned _nextToken;
	/*^block*/id _readHandler;
	NSMutableDictionary* _datagramChannels;
	NSMutableDictionary* _destinations;

}

@property (copy) id readHandler;              //@synthesize readHandler=_readHandler - In the implementation block
+(id)sharedInstance;
-(void)setReadHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)readHandler;
-(BOOL)setupDatagramChannel:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)removeDatagramChannel:(id)arg1 ;
-(id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2 ;
-(id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithChannelToken:(unsigned)arg1 ;
-(void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(/*^block*/id)arg2 ;
@end
