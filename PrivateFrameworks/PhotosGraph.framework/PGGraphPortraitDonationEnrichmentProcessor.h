/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSCountedSet, NSMutableDictionary, NSString;

@interface PGGraphPortraitDonationEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {

	NSCountedSet* _meaningNodes;
	NSCountedSet* _poiNodes;
	NSCountedSet* _roiNodes;
	NSCountedSet* _businessNodes;
	NSCountedSet* _publicEventNodes;
	NSCountedSet* _performerNodes;
	NSMutableDictionary* _datesByAddressNode;
	NSCountedSet* _addressNodes;

}

@property (nonatomic,readonly) NSCountedSet * meaningNodes;                           //@synthesize meaningNodes=_meaningNodes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * poiNodes;                               //@synthesize poiNodes=_poiNodes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * roiNodes;                               //@synthesize roiNodes=_roiNodes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * businessNodes;                          //@synthesize businessNodes=_businessNodes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * publicEventNodes;                       //@synthesize publicEventNodes=_publicEventNodes - In the implementation block
@property (nonatomic,readonly) NSCountedSet * performerNodes;                         //@synthesize performerNodes=_performerNodes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * datesByAddressNode;              //@synthesize datesByAddressNode=_datesByAddressNode - In the implementation block
@property (nonatomic,readonly) NSCountedSet * addressNodes;                           //@synthesize addressNodes=_addressNodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)graphDonationBundleId;
-(NSCountedSet *)businessNodes;
-(NSCountedSet *)roiNodes;
-(NSCountedSet *)publicEventNodes;
-(NSCountedSet *)addressNodes;
-(NSCountedSet *)poiNodes;
-(NSCountedSet *)meaningNodes;
-(BOOL)_shouldProcessGraphUpdate:(id)arg1 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_donateKnowledgeWithManager:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_prepareForKnowledgeDonation;
-(void)_accumulateKnowledgeNodesFromMomentNodes:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_knowledgeToDonateFromAccumulatedNodesWithProgressBlock:(/*^block*/id)arg1 ;
-(void)_donateKnowledge:(id)arg1 donationDate:(id)arg2 loggingConnection:(id)arg3 ;
-(id)_topicsFromTopicNodes:(id)arg1 currentProgress:(double*)arg2 progressFraction:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)_locationNamedEntitiesFromAddressNodes:(id)arg1 dates:(id)arg2 currentProgress:(double*)arg3 progressFraction:(double)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)_namedEntitiesFromNamedEntityNodes:(id)arg1 currentProgress:(double*)arg2 progressFraction:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(NSCountedSet *)performerNodes;
-(NSMutableDictionary *)datesByAddressNode;
@end
