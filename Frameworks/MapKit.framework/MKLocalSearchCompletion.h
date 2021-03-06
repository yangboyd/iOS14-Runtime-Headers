/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, GEOCollectionResult, GEOPublisherResult;

@interface MKLocalSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	unsigned long long _serverSectionIndex;
	unsigned long long _serverItemIndexInSection;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;
	BOOL _alreadySentFeedback;
	BOOL _shouldDisplayNoResults;
	BOOL _shouldEnableRAPForNoResults;
	MKLocalSearchCompletion* _directionIntentOrigin;
	MKLocalSearchCompletion* _directionIntentDestination;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (getter=_alreadySentFeedback,nonatomic,readonly) BOOL alreadySentFeedback;                                  //@synthesize alreadySentFeedback=_alreadySentFeedback - In the implementation block
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentOrigin;                                         //@synthesize directionIntentOrigin=_directionIntentOrigin - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentDestination;                                    //@synthesize directionIntentDestination=_directionIntentDestination - In the implementation block
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) BOOL hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) long long entryTapBehavior; 
@property (nonatomic,readonly) GEOServerResultScoreMetadata * serverResultScoreMetadata; 
@property (nonatomic,readonly) unsigned long long serverSectionIndex;                                                 //@synthesize serverSectionIndex=_serverSectionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long serverItemIndexInSection;                                           //@synthesize serverItemIndexInSection=_serverItemIndexInSection - In the implementation block
@property (nonatomic,readonly) BOOL hasQueryAcceleratorAffordanceEnabled; 
@property (nonatomic,readonly) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) long long autocompleteCellType; 
@property (nonatomic,readonly) GEOCollectionResult * collectionResult; 
@property (nonatomic,readonly) GEOPublisherResult * publisherResult; 
@property (nonatomic,readonly) NSArray * childItems; 
@property (nonatomic,copy) NSString * sourceID;                                                                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                                                         //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (getter=_type,nonatomic,readonly) long long type; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_hasDisambiguationRadiusMeters,nonatomic,readonly) BOOL hasDisambiguationRadiusMeters; 
@property (getter=_disambiguationRadiusMeters,nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * titleHighlightRanges; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSArray * subtitleHighlightRanges; 
-(long long)_type;
-(NSString *)subtitle;
-(GEODirectionIntent *)directionIntent;
-(int)_placeType;
-(GEOResolvedItem *)clientResolved;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(NSString *)queryAcceleratorCompletionString;
-(float)_disambiguationRadiusMeters;
-(NSArray *)childItems;
-(id)copyStorage;
-(NSArray *)titleHighlightRanges;
-(NSArray *)subtitleHighlightRanges;
-(id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3 ;
-(BOOL)_hasDisambiguationRadiusMeters;
-(id)iconWithScale:(double)arg1 ;
-(MKLocalSearchCompletion *)directionIntentOrigin;
-(void)setDirectionIntentOrigin:(MKLocalSearchCompletion *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentDestination;
-(void)setDirectionIntentDestination:(MKLocalSearchCompletion *)arg1 ;
-(void)setSourceID:(NSString *)arg1 ;
-(NSString *)title;
-(unsigned long long)serverSectionIndex;
-(unsigned long long)serverItemIndexInSection;
-(GEOSearchCategory *)category;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(NSString *)sourceID;
-(long long)sortPriority;
-(BOOL)hasSortPriority;
-(id)queryLine;
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)_alreadySentFeedback;
-(id)calloutTitle;
-(void)sendFeedback;
-(NSString *)localizedSectionHeader;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(BOOL)getCoordinate:(CLLocationCoordinate2D*)arg1 ;
-(NSArray *)displayLines;
-(long long)autocompleteCellType;
-(id)_geoCompletionItem;
-(long long)entryTapBehavior;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(GEOCollectionResult *)collectionResult;
-(GEOPublisherResult *)publisherResult;
-(MKMapItem *)mapItem;
-(unsigned long long)hash;
-(id)description;
@end

