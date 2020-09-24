/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@protocol CKConversationSearchCellProtocol;
@class NSString, CALayer, UITableViewCell, CKSpotlightQueryResult;

@interface CKMessageSearchResultCell : UICollectionViewCell <CKSearchResultCell> {

	BOOL _ck_editing;
	NSString* _searchText;
	CALayer* _topHairline;
	CALayer* _bottomHairline;
	UITableViewCell*<CKConversationSearchCellProtocol> _searchCell;
	CKSpotlightQueryResult* _result;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) UITableViewCell*<CKConversationSearchCellProtocol> searchCell;              //@synthesize searchCell=_searchCell - In the implementation block
@property (nonatomic,retain) CKSpotlightQueryResult * result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                        //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) CALayer * topHairline;                                                    //@synthesize topHairline=_topHairline - In the implementation block
@property (nonatomic,readonly) CALayer * bottomHairline;                                                 //@synthesize bottomHairline=_bottomHairline - In the implementation block
@property (assign,nonatomic) double widthForDeterminingAvatarVisibility; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;               //@synthesize ck_editing=_ck_editing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKSpotlightQueryResult *)result;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(NSString *)searchText;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(UIEdgeInsets)marginInsets;
-(BOOL)_ck_isEditing;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(void)setResult:(CKSpotlightQueryResult *)arg1 ;
-(void)setWidthForDeterminingAvatarVisibility:(double)arg1 ;
-(double)widthForDeterminingAvatarVisibility;
-(UITableViewCell*<CKConversationSearchCellProtocol>)searchCell;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)configurationState;
-(CALayer *)topHairline;
-(void)setSearchCell:(UITableViewCell*<CKConversationSearchCellProtocol>)arg1 ;
-(void)forwardStateToEmbeddedCell:(unsigned long long)arg1 ;
-(CALayer *)bottomHairline;
-(unsigned long long)_viewConfigurationState;
@end
