/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LiveFS/LiveFS-Structs.h>
@class NSMutableArray;

@interface LiveFSRBTree : NSObject {

	/*^block*/id ourComparitor;
	rb_tree* btree;
	SCD_Struct_Li1* btOps;
	NSMutableArray* _ourData;

}

@property (retain) NSMutableArray * ourData;              //@synthesize ourData=_ourData - In the implementation block
+(id)newWithComparitor:(/*^block*/id)arg1 ;
-(void)addEntry:(long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSMutableArray *)ourData;
-(id)initWithComparitor:(/*^block*/id)arg1 ;
-(void)addDataBuffer:(id)arg1 ;
-(id)extractItemsInRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setOurData:(NSMutableArray *)arg1 ;
@end
