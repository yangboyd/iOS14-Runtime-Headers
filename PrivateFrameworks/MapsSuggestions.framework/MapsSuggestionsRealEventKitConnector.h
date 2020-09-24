/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsEventKitConnector.h>

@protocol OS_dispatch_queue, MapsSuggestionsEventKitConnectorDelegate;
@class NSObject, NSString;

@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MapsSuggestionsEventKitConnectorDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsEventKitConnectorDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visibleCalendars;
-(NSString *)uniqueName;
-(id)calendarsForEntityType:(unsigned long long)arg1 ;
-(id)eventsMatchingPredicate:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MapsSuggestionsEventKitConnectorDelegate>)arg1 ;
-(id<MapsSuggestionsEventKitConnectorDelegate>)delegate;
-(void)stopListeningForChanges;
-(BOOL)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3 ;
-(id)eventWithIdentifier:(id)arg1 ;
-(id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 ;
-(void)startListeningForChanges;
-(void)_eventStoreDidChange:(id)arg1 ;
@end
