/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {

	UIImageView* _badgeImageView;
	UILabel* _badgeNumberLabel;
	long long _badgeInt;

}
+(id)badgeNumberLabelTextColor;
+(double)badgePadding;
+(id)unreadBubbleImage;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)badgeWithInteger:(long long)arg1 ;
-(void)dealloc;
-(void)resetLocale;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUseRoundStyle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
