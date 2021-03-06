/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition, NSArray;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;
	NSArray* mEquivalentDrawables;

}

@property (nonatomic,retain) NSArray * equivalentDrawables; 
-(id)init;
-(id)description;
-(id)colorTransform;
-(id)documentPoint;
-(id)styleDefinition;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setEquivalentDrawables:(NSArray *)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(NSArray *)equivalentDrawables;
@end

