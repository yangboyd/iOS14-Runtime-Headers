/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsCore/FCOperation.h>

@class NFLFeedSettings, NSArray, NFLRankedLayoutSource, NFLSubBatchLayout;

@interface NFLSubBatchLayoutTilingOperation : FCOperation {

	BOOL _showingAccessoryText;
	/*^block*/id _tilingCompletionBlock;
	NFLFeedSettings* _feedSettings;
	NSArray* _tileInfos;
	NFLRankedLayoutSource* _rankedLayoutSource;
	double _tileProminenceScoreBalanceValue;
	NFLSubBatchLayout* _result;
	SCD_Struct_NF7 _layoutSeed;

}

@property (copy) NFLFeedSettings * feedSettings;                                                   //@synthesize feedSettings=_feedSettings - In the implementation block
@property (copy) NSArray * tileInfos;                                                              //@synthesize tileInfos=_tileInfos - In the implementation block
@property (retain) NFLRankedLayoutSource * rankedLayoutSource;                                     //@synthesize rankedLayoutSource=_rankedLayoutSource - In the implementation block
@property (assign) double tileProminenceScoreBalanceValue;                                         //@synthesize tileProminenceScoreBalanceValue=_tileProminenceScoreBalanceValue - In the implementation block
@property (nonatomic,copy) NFLSubBatchLayout * result;                                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) SCD_Struct_NF7 layoutSeed;                                            //@synthesize layoutSeed=_layoutSeed - In the implementation block
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showingAccessoryText;              //@synthesize showingAccessoryText=_showingAccessoryText - In the implementation block
@property (copy) id tilingCompletionBlock;                                                         //@synthesize tilingCompletionBlock=_tilingCompletionBlock - In the implementation block
+(unsigned long long)tileInfosUsedCount;
+(BOOL)validTileInfoType:(id)arg1 ;
+(BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(SCD_Struct_NF7)arg2 ;
+(BOOL)tileInfosHaveValidType:(id)arg1 ;
-(NFLFeedSettings *)feedSettings;
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)isShowingAccessoryText;
-(void)performOperation;
-(NFLSubBatchLayout *)result;
-(void)setRankedLayoutSource:(NFLRankedLayoutSource *)arg1 ;
-(void)setTileProminenceScoreBalanceValue:(double)arg1 ;
-(double)tileProminenceScoreBalanceValue;
-(id)init;
-(void)setFeedSettings:(NFLFeedSettings *)arg1 ;
-(void)setResult:(NFLSubBatchLayout *)arg1 ;
-(NFLRankedLayoutSource *)rankedLayoutSource;
-(void)setShowingAccessoryText:(BOOL)arg1 ;
-(id)rankedLayoutRequests;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
-(BOOL)isReliable;
-(NSArray *)tileInfos;
-(SCD_Struct_NF7)layoutSeed;
-(id)initWithTileInfos:(id)arg1 feedSettings:(id)arg2 rankedLayoutSource:(id)arg3 tileProminenceScoreBalanceValue:(double)arg4 layoutSeed:(SCD_Struct_NF7)arg5 showingAccessoryText:(BOOL)arg6 ;
-(void)setTilingCompletionBlock:(id)arg1 ;
-(id)tilingCompletionBlock;
-(void)setTileInfos:(NSArray *)arg1 ;
-(void)setLayoutSeed:(SCD_Struct_NF7)arg1 ;
@end
