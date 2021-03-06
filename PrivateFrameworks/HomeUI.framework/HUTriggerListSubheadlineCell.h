/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUTriggerListSubheadlineCellDelegate;
@class HFItem, UITextView, HUGridLayoutOptions, NSArray, NSString;

@interface HUTriggerListSubheadlineCell : UITableViewCell <UITextViewDelegate, HUCellProtocol> {

	BOOL _respectLayoutMargins;
	HFItem* _item;
	UITextView* _descriptionView;
	id<HUTriggerListSubheadlineCellDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;
	NSArray* _constraints;

}

@property (nonatomic,retain) NSArray * constraints;                                                 //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UITextView * descriptionView;                                          //@synthesize descriptionView=_descriptionView - In the implementation block
@property (assign,nonatomic,__weak) id<HUTriggerListSubheadlineCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                   //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) BOOL respectLayoutMargins;                                             //@synthesize respectLayoutMargins=_respectLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                         //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HUGridLayoutOptions *)layoutOptions;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDescriptionView:(UITextView *)arg1 ;
-(UITextView *)descriptionView;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)setDelegate:(id<HUTriggerListSubheadlineCellDelegate>)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(NSArray *)constraints;
-(id<HUTriggerListSubheadlineCellDelegate>)delegate;
-(void)setRespectLayoutMargins:(BOOL)arg1 ;
-(void)updateUIWithResults:(id)arg1 animation:(BOOL)arg2 ;
-(void)updateUIWithDescription:(id)arg1 ;
-(id)_descriptionTextAttributes;
-(BOOL)respectLayoutMargins;
@end

