/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBHIconLabelVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	double _fontSize;
	double _baselineOffsetFromImage;
	double _height;
	double _extraWidth;

}

@property (assign,nonatomic) double fontSize;                             //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double baselineOffsetFromImage;              //@synthesize baselineOffsetFromImage=_baselineOffsetFromImage - In the implementation block
@property (assign,nonatomic) double height;                               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double extraWidth;                           //@synthesize extraWidth=_extraWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFontSize:(double)arg1 ;
-(double)baselineOffsetFromImage;
-(void)setHeight:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setExtraWidth:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(double)fontSize;
-(void)setBaselineOffsetFromImage:(double)arg1 ;
-(double)extraWidth;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end
