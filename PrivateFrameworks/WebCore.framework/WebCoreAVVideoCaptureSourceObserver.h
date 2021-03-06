/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@class NSString;

@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate> {

	AVVideoCaptureSource* m_callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disconnect;
-(id)initWithCallback:(AVVideoCaptureSource*)arg1 ;
-(void)removeNotificationObservers;
-(void)addNotificationObservers;
-(void)deviceConnectedDidChange:(id)arg1 ;
-(void)sessionRuntimeError:(id)arg1 ;
-(void)beginSessionInterrupted:(id)arg1 ;
-(void)endSessionInterrupted:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

