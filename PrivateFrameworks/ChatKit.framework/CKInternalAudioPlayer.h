/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol CKInternalAudioPlayerDelegate;
@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;

@interface CKInternalAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioPlayer* _avAudioPlayer;
	AVPlayer* _avPlayer;
	AVPlayerItem* _playerItem;
	long long _avPlayerState;
	BOOL _avPlayerPrepareRequested;
	BOOL _avPlayerPlayRequested;
	long long _playerType;
	id<CKInternalAudioPlayerDelegate> _delegate;

}

@property (nonatomic,readonly) long long playerType;                                         //@synthesize playerType=_playerType - In the implementation block
@property (assign,nonatomic,__weak) id<CKInternalAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float volume; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (readonly) double deviceCurrentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)pause;
-(double)duration;
-(float)volume;
-(void)dealloc;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)prepareToPlay;
-(void)setDelegate:(id<CKInternalAudioPlayerDelegate>)arg1 ;
-(double)currentTime;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<CKInternalAudioPlayerDelegate>)delegate;
-(long long)playerType;
-(BOOL)playAtTime:(double)arg1 ;
-(BOOL)_playAtTime:(double)arg1 ;
-(void)stop;
-(id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2 ;
-(double)deviceCurrentTime;
-(void)_playerItemDidEndNotification:(id)arg1 ;
-(void)_handleAVPlayerItemStateChange;
-(void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg1 ;
-(void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg1 ;
@end

