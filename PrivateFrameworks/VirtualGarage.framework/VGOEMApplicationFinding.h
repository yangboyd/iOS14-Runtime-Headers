/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VGOEMApplicationFinding <NSObject>
@property (assign,nonatomic,__weak) id<VGOEMApplicationFinderUpdates> delegate; 
@required
-(void)findOEMApplications;
-(void)setDelegate:(id)arg1;
-(id<VGOEMApplicationFinderUpdates>)delegate;

@end
