/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol ICDocCamExtractedThumbnailContainerViewDelegate;
@interface ICDocCamExtractedThumbnailContainerView : UIView {

	id<ICDocCamExtractedThumbnailContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)setDelegate:(id<ICDocCamExtractedThumbnailContainerViewDelegate>)arg1 ;
-(id)accessibilityCustomActions;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(id<ICDocCamExtractedThumbnailContainerViewDelegate>)delegate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(unsigned long long)accessibilityTraits;
-(BOOL)orderNextForAccessibility:(id)arg1 ;
-(BOOL)orderPreviousForAccessibility:(id)arg1 ;
@end

