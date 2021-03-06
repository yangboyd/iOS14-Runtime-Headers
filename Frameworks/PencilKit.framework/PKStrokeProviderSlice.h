/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHStroke.h>

@class CHEncodedStrokeIdentifier, PKStrokeProviderSliceIdentifier, PKStroke, NSString;

@interface PKStrokeProviderSlice : NSObject <CHStroke> {

	CHEncodedStrokeIdentifier* _encodedStrokeIdentifier;
	PKStrokeProviderSliceIdentifier* _identifier;
	PKStroke* _stroke;
	CGRect _bounds;

}

@property (nonatomic,readonly) CHEncodedStrokeIdentifier * encodedStrokeIdentifier;              //@synthesize encodedStrokeIdentifier=_encodedStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) PKStrokeProviderSliceIdentifier * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKStroke * stroke;                                                //@synthesize stroke=_stroke - In the implementation block
@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier; 
@property (nonatomic,readonly) CGRect bounds;                                                    //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) unsigned long long strokeAttributes; 
@property (nonatomic,readonly) double startTimestamp; 
@property (nonatomic,readonly) double endTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 ;
-(PKStroke *)stroke;
-(PKStrokeProviderSliceIdentifier *)identifier;
-(CGRect)bounds;
-(long long)compareTo:(id)arg1 ;
-(double)startTimestamp;
-(double)endTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGPoint)_splineControlPoint:(long long)arg1 ;
-(long long)_firstPointIndex;
-(long long)_lastPointIndex;
-(double)_lengthOfSplineSegment:(unsigned long long)arg1 ;
-(CGPoint)_interpolatedPointForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(double)_strokeLength;
-(double)_interpolatedTimeForSplineSegment:(long long)arg1 t:(double)arg2 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CHEncodedStrokeIdentifier *)encodedStrokeIdentifier;
-(unsigned long long)strokeAttributes;
-(id)initWithStroke:(id)arg1 tStart:(double)arg2 tEnd:(double)arg3 ;
@end

