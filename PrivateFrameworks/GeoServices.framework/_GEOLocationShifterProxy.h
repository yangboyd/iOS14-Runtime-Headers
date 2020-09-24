/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSCache;


@protocol _GEOLocationShifterProxy <NSObject>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,readonly) NSCache * memoryCache; 
@required
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)flushDiskCache;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)locationShiftFunctionVersion;
-(BOOL)isLocationShiftEnabled;
-(BOOL)isLocationShiftRequiredForCoordinate:(GEOCoarseLocationLatLng)arg1;
-(NSCache *)memoryCache;

@end
