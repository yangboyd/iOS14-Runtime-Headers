/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HRExpandedContentItemLearnMore;

@interface HRExpandedContentItem : NSObject {

	NSString* _title;
	long long _type;
	HRExpandedContentItemLearnMore* _learnMore;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HRExpandedContentItemLearnMore * learnMore;              //@synthesize learnMore=_learnMore - In the implementation block
+(id)itemWithType:(long long)arg1 title:(id)arg2 ;
+(id)_sinusRhythmExpandedContentItemsAlgVersionOne;
+(id)_atrialFibrillationExpandedContentItemsAlgVersionOne;
+(id)_highOrLowAbove120Below50HeartRateExpandedContentItemsAlgVersionOne;
+(id)_inconclusiveExpandedContentItemsAlgVersionOneWithLearnMoreDelegate:(id)arg1 ;
+(id)sinusRhythmItemsWithActiveAlgorithmVersion:(long long)arg1 ;
+(id)atrialFibrillationItemsWithActiveAlgorithmVersion:(long long)arg1 ;
+(id)highOrLowAbove120Below50HeartRateItemsWithActiveAlgorithmVersion:(long long)arg1 ;
+(id)inconclusiveItemsWithActiveAlgorithmVersion:(long long)arg1 learnMoreDelegate:(id)arg2 ;
-(HRExpandedContentItemLearnMore *)learnMore;
-(void)setLearnMore:(HRExpandedContentItemLearnMore *)arg1 ;
-(NSString *)title;
-(long long)type;
-(id)initWithType:(long long)arg1 title:(id)arg2 ;
@end
