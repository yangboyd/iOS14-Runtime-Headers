/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@interface HIDUserDevice : NSObject {

	IOHIDUserDeviceRef _device;
	/*^block*/id _getReportHandler;
	/*^block*/id _setReportHandler;
	unsigned _service;
	/*^block*/id _cancelHandler;

}

@property (readonly) unsigned service; 
-(void)cancel;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(void)dealloc;
-(void)setDispatchQueue:(id)arg1 ;
-(unsigned)service;
-(id)initWithProperties:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)activate;
-(id)description;
-(void)setGetReportHandler:(/*^block*/id)arg1 ;
-(void)setSetReportHandler:(/*^block*/id)arg1 ;
-(BOOL)handleReport:(id)arg1 error:(out id*)arg2 ;
-(BOOL)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id*)arg3 ;
@end

