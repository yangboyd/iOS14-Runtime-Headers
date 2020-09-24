/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _glyph;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * glyph;              //@synthesize glyph=_glyph - In the implementation block
-(double)animationDuration;
-(CGPoint)glyphOffset;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(id)glyphImageForType:(long long)arg1 color:(char)arg2 ;
-(CKAcknowledgmentGlyphImageView *)glyph;
-(void)setGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setGlyphColor:(id)arg1 ;
@end
