/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SXLayoutParametersManager : NSObject {

	NSMutableDictionary* _durations;

}

@property (nonatomic,readonly) NSMutableDictionary * durations;              //@synthesize durations=_durations - In the implementation block
-(NSMutableDictionary *)durations;
-(id)init;
-(void)layoutFinishedForTask:(id)arg1 result:(id)arg2 ;
-(id)layoutParametersForTask:(id)arg1 previousLayoutOptions:(id)arg2 ;
@end

