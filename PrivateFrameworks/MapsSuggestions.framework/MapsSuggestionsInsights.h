/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSObject, MapsSuggestionsFwdGeocodingRelevanceScoreProvider, MapsSuggestionsRoutineRelevanceScoreProvider, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsRelevanceScorer, NSString;

@interface MapsSuggestionsInsights : NSObject <MapsSuggestionsObject> {

	Queue _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;
	MapsSuggestionsFwdGeocodingRelevanceScoreProvider* _fwdGeoCodingRoutineScoreProvider;
	MapsSuggestionsRoutineRelevanceScoreProvider* _routineScoreProvider;
	MapsSuggestionsPortraitRelevanceScoreProvider* _portraitScoreProvider;
	MapsSuggestionsRelevanceScorer* _relevanceScorer;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preload;
-(id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(char)signalPackForHereWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 ;
-(NSString *)uniqueName;
-(char)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
-(id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2 ;
-(id)confidenceScoresForMapItems:(id)arg1 ;
-(void)dealloc;
-(id)signalPackForHere;
-(id)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
-(double)isTouristHere;
-(char)signalPackForDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 handler:(/*^block*/id)arg3 ;
@end

