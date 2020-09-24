/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface MKAttributionLabel : UIView {

	NSAttributedString* _strokeText;
	NSAttributedString* _innerText;
	unsigned long long _mapType;
	BOOL _useDarkText;

}

@property (assign,nonatomic) unsigned long long mapType;              //@synthesize mapType=_mapType - In the implementation block
-(id)_attributesWithStroke:(BOOL)arg1 ;
-(unsigned long long)mapType;
-(void)sizeToFit;
-(void)setMapType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTextColor;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_prepareLabel;
-(void)drawRect:(CGRect)arg1 ;
@end
