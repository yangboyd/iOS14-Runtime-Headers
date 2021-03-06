/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICellAccessoryLayout;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSDictionary, NSString, UIView, UICellAccessoryConfiguration, NSMutableDictionary;

@interface UICellAccessoryManager : NSObject {

	CGSize _enforcedContainerSize;
	BOOL _needsLayout;
	/*^block*/id _standardLayoutWidthProvider;
	/*^block*/id _disclosureLayoutWidthProvider;
	id<UICellAccessoryLayout> _leadingLayout;
	id<UICellAccessoryLayout> _trailingLayout;
	NSDictionary* _configurations;
	NSString* _currentConfigurationIdentifier;
	UIView* _containerView;
	UICellAccessoryConfiguration* _previousConfiguration;
	NSMutableDictionary* _accessoryViews;
	CGSize _previousContainerSize;
	UIEdgeInsets _safeAreaInsets;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                      //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                                   //@synthesize needsLayout=_needsLayout - In the implementation block
@property (assign,nonatomic) CGSize previousContainerSize;                                       //@synthesize previousContainerSize=_previousContainerSize - In the implementation block
@property (nonatomic,retain) UICellAccessoryConfiguration * previousConfiguration;               //@synthesize previousConfiguration=_previousConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryViews;                               //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaInsets;                                        //@synthesize safeAreaInsets=_safeAreaInsets - In the implementation block
@property (nonatomic,copy) id standardLayoutWidthProvider;                                       //@synthesize standardLayoutWidthProvider=_standardLayoutWidthProvider - In the implementation block
@property (nonatomic,copy) id disclosureLayoutWidthProvider;                                     //@synthesize disclosureLayoutWidthProvider=_disclosureLayoutWidthProvider - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> leadingLayout;                            //@synthesize leadingLayout=_leadingLayout - In the implementation block
@property (nonatomic,retain) id<UICellAccessoryLayout> trailingLayout;                           //@synthesize trailingLayout=_trailingLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * configurations;                                      //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,copy) NSString * currentConfigurationIdentifier;                            //@synthesize currentConfigurationIdentifier=_currentConfigurationIdentifier - In the implementation block
@property (nonatomic,readonly) UICellAccessoryConfiguration * currentConfiguration; 
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) UIEdgeInsets contentInset;                                        //@synthesize contentInset=_contentInset - In the implementation block
-(id)initWithContainerView:(id)arg1 ;
-(CGRect)contentFrame;
-(UIEdgeInsets)contentInset;
-(void)layoutIfNeeded;
-(UIEdgeInsets)safeAreaInsets;
-(CGSize)containerSize;
-(id<UICellAccessoryLayout>)trailingLayout;
-(void)setAccessoryViews:(NSMutableDictionary *)arg1 ;
-(id)standardLayoutWidthProvider;
-(id<UICellAccessoryLayout>)leadingLayout;
-(void)setCurrentConfigurationIdentifier:(NSString *)arg1 ;
-(UIView *)containerView;
-(id)disclosureLayoutWidthProvider;
-(void)setPreviousContainerSize:(CGSize)arg1 ;
-(UICellAccessoryConfiguration *)currentConfiguration;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(NSMutableDictionary *)accessoryViews;
-(void)updateContainerView:(id)arg1 ;
-(void)performWithEnforcedContainerSize:(CGSize)arg1 block:(/*^block*/id)arg2 ;
-(NSDictionary *)configurations;
-(void)setLeadingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(CGRect)containerBounds;
-(void)setTrailingLayout:(id<UICellAccessoryLayout>)arg1 ;
-(void)setStandardLayoutWidthProvider:(id)arg1 ;
-(CGSize)previousContainerSize;
-(void)setContainerView:(UIView *)arg1 ;
-(id)_configurationWithIdentifier:(id)arg1 ;
-(void)setDisclosureLayoutWidthProvider:(id)arg1 ;
-(void)_updateFromPreviousConfiguration:(id)arg1 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(void)setSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(UICellAccessoryConfiguration *)previousConfiguration;
-(BOOL)needsLayout;
-(void)setPreviousConfiguration:(UICellAccessoryConfiguration *)arg1 ;
-(NSString *)currentConfigurationIdentifier;
-(void)setNeedsLayout;
-(id)description;
-(CGRect)_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4 ;
@end

