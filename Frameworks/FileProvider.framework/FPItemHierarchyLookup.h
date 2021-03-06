/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPItemHierarchyLookingUp;
@class FPItem, NSCache;

@interface FPItemHierarchyLookup : NSObject {

	FPItem* _item;
	id<FPItemHierarchyLookingUp> _hierarchyServicer;
	NSCache* _parentHierarchyItems;

}

@property (nonatomic,retain) NSCache * parentHierarchyItems;                    //@synthesize parentHierarchyItems=_parentHierarchyItems - In the implementation block
@property (__weak) id<FPItemHierarchyLookingUp> hierarchyServicer;              //@synthesize hierarchyServicer=_hierarchyServicer - In the implementation block
-(NSCache *)parentHierarchyItems;
-(id<FPItemHierarchyLookingUp>)hierarchyServicer;
-(id)_fetchItemWithID:(id)arg1 ;
-(void)setHierarchyServicer:(id<FPItemHierarchyLookingUp>)arg1 ;
-(void)setParentHierarchyItems:(NSCache *)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)initWithItem:(id)arg1 parentHierarchyItems:(id)arg2 hierarchyServicer:(id)arg3 ;
@end

