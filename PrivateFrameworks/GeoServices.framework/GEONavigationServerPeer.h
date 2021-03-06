/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEONavdPeer.h>
#import <libobjc.A.dylib/GEONavigationServerRequestStateXPCInterface.h>

@class GEONavigationServer, NSString;

@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface> {

	GEONavigationServer* _delegate;

}

@property (assign,nonatomic,__weak) GEONavigationServer * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestActiveRouteDetailsData;
-(void)requestTransitSummary;
-(void)requestGuidanceState;
-(void)dealloc;
-(void)requestPositionFromManeuver;
-(void)requestPositionFromDestination;
-(void)requestNavigationVoiceVolume;
-(void)requestStepIndex;
-(void)requestUpdates;
-(void)setDelegate:(GEONavigationServer *)arg1 ;
-(void)requestPositionFromSign;
-(void)requestRideSelections;
-(GEONavigationServer *)delegate;
-(void)requestRouteSummary;
-(void)requestStepNameInfo;
@end

