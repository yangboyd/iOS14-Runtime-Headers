/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton {

	UIBezierPath* _bezierPath;
	UIView* _highlightedBackgroundView;
	UIBezierPath* _shadowPath;

}
-(id)_highlightedBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end

