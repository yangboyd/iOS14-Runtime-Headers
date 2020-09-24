/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INMediaSearch, INPrivateUpdateMediaAffinityIntentData;


@protocol INUpdateMediaAffinityIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (assign,nonatomic) long long affinityType; 
@property (nonatomic,copy) INPrivateUpdateMediaAffinityIntentData * privateUpdateMediaAffinityIntentData; 
@required
-(id)init;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(long long)affinityType;
-(void)setAffinityType:(long long)arg1;
-(INPrivateUpdateMediaAffinityIntentData *)privateUpdateMediaAffinityIntentData;
-(void)setPrivateUpdateMediaAffinityIntentData:(id)arg1;

@end
