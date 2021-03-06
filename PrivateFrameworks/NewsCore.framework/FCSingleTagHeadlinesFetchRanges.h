/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class FCFeedRange;

@interface FCSingleTagHeadlinesFetchRanges : NSObject {

	FCFeedRange* _freeFeedRange;
	FCFeedRange* _paidFeedRange;

}

@property (nonatomic,copy,readonly) FCFeedRange * freeFeedRange;              //@synthesize freeFeedRange=_freeFeedRange - In the implementation block
@property (nonatomic,copy,readonly) FCFeedRange * paidFeedRange;              //@synthesize paidFeedRange=_paidFeedRange - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCFeedRange *)freeFeedRange;
-(FCFeedRange *)paidFeedRange;
-(id)initWithFreeFeedRange:(id)arg1 paidFeedRange:(id)arg2 ;
@end

