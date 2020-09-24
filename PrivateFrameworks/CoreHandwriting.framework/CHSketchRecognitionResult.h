/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {

	NSString* _string;
	double _rotation;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) double rotation;                //@synthesize rotation=_rotation - In the implementation block
-(NSString *)string;
-(double)rotation;
-(void)dealloc;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 ;
@end
