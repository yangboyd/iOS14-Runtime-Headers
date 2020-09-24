/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMList, REMListBadge, NSString;

@interface REMListAppearanceContext : NSObject {

	REMList* _list;

}

@property (nonatomic,retain) REMList * list;                        //@synthesize list=_list - In the implementation block
@property (nonatomic,readonly) REMListBadge * badge; 
@property (nonatomic,readonly) NSString * badgeEmblem; 
-(REMList *)list;
-(REMListBadge *)badge;
-(void)setList:(REMList *)arg1 ;
-(BOOL)showingLargeAttachments;
-(NSString *)badgeEmblem;
-(id)initWithList:(id)arg1 ;
@end
