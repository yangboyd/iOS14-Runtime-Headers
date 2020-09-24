/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, PGGraph, PHPhotoLibrary, NSDictionary;

@interface PGCuratedLibraryFTEMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	PGGraph* _graph;
	PHPhotoLibrary* _photoLibrary;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) PGGraph * graph;                            //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                     //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PGGraph *)graph;
-(NSString *)identifier;
-(PHPhotoLibrary *)photoLibrary;
-(NSDictionary *)payload;
-(id)initWithGraphManager:(id)arg1 ;
-(NSString *)description;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
@end
