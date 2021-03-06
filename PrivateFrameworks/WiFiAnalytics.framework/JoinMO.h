/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSObject, NSDate, BSSMO;

@interface JoinMO : NSManagedObject

@property (assign,nonatomic) short autojoinPhase; 
@property (assign,nonatomic) short cca; 
@property (nonatomic,retain) NSObject * channelsScanned; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) int dhcpLatencyMs; 
@property (assign,nonatomic) int dhcpLeaseMins; 
@property (assign,nonatomic) BOOL dhcpSuccess; 
@property (assign,nonatomic) BOOL isAutojoin; 
@property (assign,nonatomic) short motionState; 
@property (assign,nonatomic) int reason; 
@property (assign,nonatomic) short rssi; 
@property (assign,nonatomic) short snr; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int subreason; 
@property (assign,nonatomic) BOOL success; 
@property (nonatomic,retain) BSSMO * bss; 
+(id)entityName;
+(id)fetchRequest;
@end

