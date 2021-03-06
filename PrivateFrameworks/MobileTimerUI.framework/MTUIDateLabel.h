/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimeZone, NSDate, UILabel, NSString, UIColor, UIFont;

@interface MTUIDateLabel : UIView {

	NSTimeZone* _timeZone;
	NSDate* _date;
	UILabel* _dateLabel;
	NSString* _dateLabelText;
	UIColor* _textColor;
	UIFont* _font;
	UIFont* _timeDesignatorFont;

}

@property (nonatomic,copy) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                    //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * dateLabelText;                   //@synthesize dateLabelText=_dateLabelText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIFont * timeDesignatorFont;              //@synthesize timeDesignatorFont=_timeDesignatorFont - In the implementation block
-(id)viewForFirstBaselineLayout;
-(void)_updateLabel;
-(id)viewForLastBaselineLayout;
-(void)setDate:(NSDate *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSDate *)date;
-(CGSize)intrinsicContentSize;
-(UIFont *)timeDesignatorFont;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)dateLabel;
-(void)layoutSubviews;
-(UIFont *)font;
-(UIColor *)textColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)dateLabelText;
-(NSTimeZone *)timeZone;
-(id)_fontInfoForBaselineSpacing;
-(void)setDateLabelText:(NSString *)arg1 ;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)_updateDateString;
-(void)_updateTextString;
@end

