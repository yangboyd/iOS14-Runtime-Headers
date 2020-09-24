/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCameraClipScrubbing, HFCameraLiveStreamControlling;
@class HMHome, HMCameraProfile, HFCameraPlaybackPosition, NSUUID;

@interface HFCameraPlaybackEngineConfiguration : NSObject {

	HMHome* _home;
	HMCameraProfile* _cameraProfile;
	HFCameraPlaybackPosition* _playbackPosition;
	id<HFCameraClipScrubbing> _clipScrubber;
	/*^block*/id _clipPlayerBuilder;
	id<HFCameraLiveStreamControlling> _liveStreamController;
	NSUUID* _notificationUUID;
	NSUUID* _notificationClipUUID;

}

@property (nonatomic,copy) id clipPlayerBuilder;                                                  //@synthesize clipPlayerBuilder=_clipPlayerBuilder - In the implementation block
@property (nonatomic,retain) id<HFCameraLiveStreamControlling> liveStreamController;              //@synthesize liveStreamController=_liveStreamController - In the implementation block
@property (nonatomic,retain) NSUUID * notificationUUID;                                           //@synthesize notificationUUID=_notificationUUID - In the implementation block
@property (nonatomic,retain) NSUUID * notificationClipUUID;                                       //@synthesize notificationClipUUID=_notificationClipUUID - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMCameraProfile * cameraProfile;                                   //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HFCameraPlaybackPosition * playbackPosition;                         //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> clipScrubber;                       //@synthesize clipScrubber=_clipScrubber - In the implementation block
-(void)setPlaybackPosition:(HFCameraPlaybackPosition *)arg1 ;
-(NSUUID *)notificationUUID;
-(HMCameraProfile *)cameraProfile;
-(id)initWithHome:(id)arg1 cameraProfile:(id)arg2 ;
-(id)clipPlayerBuilder;
-(id<HFCameraLiveStreamControlling>)liveStreamController;
-(id<HFCameraClipScrubbing>)clipScrubber;
-(HFCameraPlaybackPosition *)playbackPosition;
-(void)assertConfigurationIsValid;
-(void)setClipScrubber:(id<HFCameraClipScrubbing>)arg1 ;
-(void)setClipPlayerBuilder:(id)arg1 ;
-(void)setLiveStreamController:(id<HFCameraLiveStreamControlling>)arg1 ;
-(void)setNotificationUUID:(NSUUID *)arg1 ;
-(NSUUID *)notificationClipUUID;
-(void)setNotificationClipUUID:(NSUUID *)arg1 ;
-(HMHome *)home;
@end
