/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (assign,nonatomic) BOOL enforcesResourceCap; 
@property (assign,nonatomic) BOOL enforcesResourceDownsampling; 
@property (assign,nonatomic) BOOL enforcesResourceHysteresis; 
@property (assign,nonatomic) BOOL enforcesSignatureCap; 
@property (assign,nonatomic) BOOL enforcesSignatureDownsampling; 
@property (assign,nonatomic) BOOL enforcesSignatureHysteresis; 
@property (assign,nonatomic) BOOL enforcesTotalCap; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end
