/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(void)cancelCurrentManifestUpdate;
-(void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)openConnection;
-(void)closeConnection;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(void)deactivateResourceScale:(int)arg1;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)activateResourceScale:(int)arg1;
-(void)deactivateResourceScenario:(int)arg1;
-(id)authToken;
-(oneway void)resetActiveTileGroup;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)serverQueue;
-(void)activateResourceScenario:(int)arg1;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(id)updateProgress;
-(void)setDelegate:(id)arg1;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(GEOActiveTileGroup *)activeTileGroup;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(void)performOpportunisticResourceLoading;

@end

