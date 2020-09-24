/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/HUControllableCollectionViewLayout.h>
#import <libobjc.A.dylib/HUProvidesMosaicFrames.h>

@protocol HUMosaicLayoutDelegate;
@class NSMutableArray, NSString;

@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames> {

	BOOL _layoutInvalidatedForBoundsChange;
	id<HUMosaicLayoutDelegate> _delegate;
	NSMutableArray* _attributeCache;
	CGRect _contentBounds;

}

@property (nonatomic,retain) NSMutableArray * attributeCache;                    //@synthesize attributeCache=_attributeCache - In the implementation block
@property (assign,nonatomic) BOOL layoutInvalidatedForBoundsChange;              //@synthesize layoutInvalidatedForBoundsChange=_layoutInvalidatedForBoundsChange - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                               //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic) id<HUMosaicLayoutDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(CGRect)contentBounds;
-(void)setDelegate:(id<HUMosaicLayoutDelegate>)arg1 ;
-(void)setContentBounds:(CGRect)arg1 ;
-(void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearAllOverrideAttributesForItems:(id)arg1 ;
-(void)setAttributeCache:(NSMutableArray *)arg1 ;
-(id<HUMosaicLayoutDelegate>)delegate;
-(NSMutableArray *)attributeCache;
-(void)setLayoutInvalidatedForBoundsChange:(BOOL)arg1 ;
-(BOOL)layoutInvalidatedForBoundsChange;
-(void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)currentMosaicFrames;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end
