/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {

	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(id)imageData;
-(BOOL)isFloating;
-(void)setFloating:(BOOL)arg1 ;
-(id)imageName;
-(id)drawable;
-(int)runType;
-(id)description;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)isDrawableOverridden;
-(void)checkForFloating:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
@end
