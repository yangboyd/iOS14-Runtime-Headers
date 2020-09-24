/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate, HMBModelCloudReference, CKAsset, NSDictionary;

@interface HMDCameraSignificantEventNotificationModel : HMBModel

@property (retain) NSNumber * significantEvent; 
@property (retain) NSNumber * confidenceLevel; 
@property (retain) NSDate * dateOfOccurrence; 
@property (retain) NSNumber * timeOffsetWithinClip; 
@property (retain) HMBModelCloudReference * associatedClip; 
@property (retain) CKAsset * heroFrameAsset; 
@property (retain) CKAsset * faceCropAsset; 
@property (retain) NSDictionary * homePresenceByPairingIdentity; 
+(id)hmbProperties;
+(id)hmbQueries;
+(id)hmbExternalRecordType;
+(id)significantEventsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
-(id)createClipSignificantEventWithCameraProfileUUID:(id)arg1 faceClassification:(id)arg2 ;
@end
