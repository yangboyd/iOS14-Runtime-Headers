/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAReferralData : NSObject <AADataEventType> {

	NSString* _referringApplication;
	NSString* _referringUrl;

}

@property (nonatomic,readonly) NSString * referringApplication;              //@synthesize referringApplication=_referringApplication - In the implementation block
@property (nonatomic,readonly) NSString * referringUrl;                      //@synthesize referringUrl=_referringUrl - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSString *)referringUrl;
-(NSString *)referringApplication;
-(id)initWithReferringApplication:(id)arg1 referringUrl:(id)arg2 ;
@end

