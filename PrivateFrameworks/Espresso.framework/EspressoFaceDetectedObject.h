/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ExternalDetectedObject.h>

@class NSString;

@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject> {

	float confidence;
	long long objectType;
	CGPoint center;
	CGRect bounds;

}

@property (assign) float confidence; 
@property (assign) long long objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(float)confidence;
-(CGPoint)center;
-(void)setObjectType:(long long)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(long long)objectType;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4 ;
-(void)setConfidence:(float)arg1 ;
@end
