/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DDActionDelegate;
@class CNContact, NSString, UIViewController, NSDictionary, NSURL, NSObject, UIImage;

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {

	_DDResult* _result;
	_DDResult* _coalescedResult;
	CFArrayRef _associatedResults;
	CNContact* _contact;
	NSString* _ics;
	UIViewController* _viewController;
	NSDictionary* _context;
	NSURL* _url;
	BOOL _cachedCoalescedResult;
	BOOL _cachedAssociatedResults;
	BOOL _isDefaultAction;
	BOOL _isCompanion;
	BOOL _hasCompanion;
	int _hostApplication;
	NSObject*<DDActionDelegate> _delegate;

}

@property (retain) CNContact * contact;                                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (assign,nonatomic) BOOL isDefaultAction;                                     //@synthesize isDefaultAction=_isDefaultAction - In the implementation block
@property (assign,nonatomic) int hostApplication;                                      //@synthesize hostApplication=_hostApplication - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<DDActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL companion;                                           //@synthesize isCompanion=_isCompanion - In the implementation block
@property (nonatomic,__weak,readonly) DDAction * companionAction; 
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)clientActionsDelegate;
+(void)setClientActionsDelegate:(id)arg1 ;
+(BOOL)actionAvailableForContact:(id)arg1 ;
+(id)encodableContextWithContext:(id)arg1 ;
+(id)actionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
+(id)actionsWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
+(id)contextByAddingValue:(id)arg1 toKey:(id)arg2 inContext:(id)arg3 ;
+(id)defaultActionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)invalidate;
-(UIViewController *)viewController;
-(CNContact *)contact;
-(_DDResult*)result;
-(void)perform;
-(id)localizedName;
-(void)dealloc;
-(void)setCompanion:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setViewController:(UIViewController *)arg1 ;
-(BOOL)hasUserInterface;
-(id)generateIdentifier;
-(int)interactionType;
-(void)setDelegate:(NSObject*<DDActionDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)context;
-(BOOL)companion;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<DDActionDelegate>)delegate;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)isDefaultAction;
-(id)url;
-(id)description;
-(id)notificationTitle;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(const CFArrayRef)associatedResults;
-(void)performFromView:(id)arg1 ;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)addToRecents;
-(void)setIsDefaultAction:(BOOL)arg1 ;
-(void)setupPopoverPresentationController:(id)arg1 view:(id)arg2 ;
-(BOOL)canBePerformedWhenDeviceIsLocked;
-(BOOL)canBePerformedByOpeningURL;
-(_DDResult*)coalescedResult;
-(DDAction *)companionAction;
-(void)_performFromView:(id)arg1 byOpeningURL:(id)arg2 disableAppLink:(BOOL)arg3 ;
-(void)_copyURL:(id)arg1 andString:(id)arg2 ;
-(void)_performFromView:(id)arg1 byOpeningURL:(id)arg2 ;
-(void)_copyStringOnly:(id)arg1 ;
-(void)_copyURL:(id)arg1 ;
-(id)localizedSubItemName;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
-(id)displayNameForEmails:(id)arg1 phoneNumbers:(id)arg2 ;
-(int)hostApplication;
-(void)setHostApplication:(int)arg1 ;
@end
