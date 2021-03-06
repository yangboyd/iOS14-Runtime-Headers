/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <PhotoLibrary/PLRoundProgressView.h>

@class NSProgress;

@interface AEProgressIndicatorView : PLRoundProgressView {

	NSProgress* __progress;

}

@property (nonatomic,readonly) NSProgress * _progress;              //@synthesize _progress=__progress - In the implementation block
-(NSProgress *)_progress;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 progress:(id)arg2 ;
@end

