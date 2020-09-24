/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, HKCategoryType;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	HKCategoryType* _categoryType;

}

@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(HKCategoryType *)categoryType;
-(BOOL)isHidden;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)updatePossibleStates;
@end
