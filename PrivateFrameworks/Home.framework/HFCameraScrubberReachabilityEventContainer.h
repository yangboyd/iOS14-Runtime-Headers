/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCameraRecordingEvent.h>

@protocol HFCameraRecordingEvent;
@class NSString, NSUUID, NSDate;

@interface HFCameraScrubberReachabilityEventContainer : NSObject <HFCameraRecordingEvent> {

	id<HFCameraRecordingEvent> _startEvent;
	id<HFCameraRecordingEvent> _endEvent;

}

@property (nonatomic,readonly) id<HFCameraRecordingEvent> startEvent;              //@synthesize startEvent=_startEvent - In the implementation block
@property (nonatomic,retain) id<HFCameraRecordingEvent> endEvent;                  //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) unsigned long long containerType; 
@property (nonatomic,copy,readonly) NSString * displayDescription; 
@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSDate * dateOfOccurrence; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)duration;
-(void)setEndEvent:(id<HFCameraRecordingEvent>)arg1 ;
-(id)encryptionKey;
-(BOOL)isComplete;
-(id)hf_endDate;
-(id)initWithStartEvent:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(double)hf_duration;
-(id)hf_dateInterval;
-(BOOL)hf_isPlayable;
-(id<HFCameraRecordingEvent>)endEvent;
-(unsigned long long)containerType;
-(NSString *)displayDescription;
-(double)targetFragmentDuration;
-(id)posterFrames;
-(BOOL)canAskForUserFeedback;
-(NSDate *)dateOfOccurrence;
-(id)videoAssetRequiredHTTPHeaders;
-(id<HFCameraRecordingEvent>)startEvent;
-(NSString *)description;
@end

