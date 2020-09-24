/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

@interface VUIDebugMetricsArrayViewController : UITableViewController {

	NSArray* _array;
	NSDictionary* _cachedKeysOrder;

}

@property (nonatomic,retain) NSDictionary * cachedKeysOrder;              //@synthesize cachedKeysOrder=_cachedKeysOrder - In the implementation block
@property (nonatomic,retain) NSArray * array;                             //@synthesize array=_array - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setObject:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(NSArray *)array;
-(id)init;
-(void)setArray:(NSArray *)arg1 ;
-(id)object;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)generateCachedKeys;
-(void)setCachedKeysOrder:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedKeysOrder;
@end
