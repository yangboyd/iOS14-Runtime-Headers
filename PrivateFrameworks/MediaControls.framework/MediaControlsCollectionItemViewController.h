/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol MediaControlsCollectionItemViewController <NSObject>
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@required
-(UIView *)contentView;
-(void)setBackgroundView:(id)arg1;
-(void)setSelected:(BOOL)arg1;
-(UIView *)backgroundView;
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2;
-(BOOL)isSelected;

@end

