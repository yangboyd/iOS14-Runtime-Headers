/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol VUILibraryEpisodeFooterCellDelegate;
@class NSString, NSNumber, VUISeparatorView, VUIButton;

@interface VUILibraryEpisodeFooterCell : UICollectionViewCell {

	NSString* _title;
	NSNumber* _storeID;
	id<VUILibraryEpisodeFooterCellDelegate> _delegate;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;
	VUIButton* _titleButton;

}

@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                                  //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;                               //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) VUIButton * titleButton;                                              //@synthesize titleButton=_titleButton - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * storeID;                                                   //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeFooterCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setStoreID:(NSNumber *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<VUILibraryEpisodeFooterCellDelegate>)arg1 ;
-(id<VUILibraryEpisodeFooterCellDelegate>)delegate;
-(void)setTitle:(NSString *)arg1 ;
-(VUIButton *)titleButton;
-(void)setTitleButton:(VUIButton *)arg1 ;
-(NSNumber *)storeID;
@end

