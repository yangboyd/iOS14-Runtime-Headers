/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIChevronView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@protocol CSWallpaperColorProvider;
@class _UILegibilitySettings, SBWallpaperEffectView, NSString;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility> {

	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperEffectView* _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic) double strength;                                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)init;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateVibrancy;
-(double)strength;
-(void)setStrength:(double)arg1 ;
@end

