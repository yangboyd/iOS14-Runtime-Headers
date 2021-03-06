/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPAccessoryServerBTLE;

@interface HAPDiscoveredBTLEAccessoryServerTuple : HMFObject {

	HAPAccessoryServerBTLE* _accessoryServer;
	double _lastSeen;

}

@property (nonatomic,readonly) HAPAccessoryServerBTLE * accessoryServer;              //@synthesize accessoryServer=_accessoryServer - In the implementation block
@property (assign,nonatomic) double lastSeen;                                         //@synthesize lastSeen=_lastSeen - In the implementation block
+(id)discoveredAccessoryServerTupleWithAccessoryServer:(id)arg1 ;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(HAPAccessoryServerBTLE *)accessoryServer;
@end

