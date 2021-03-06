/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DEExtensionTracker : NSObject
+(void)checkIn;
+(id)userDefaults;
+(id)sharedSerialQueue;
+(void)_updateXPCActivityDate;
+(BOOL)hasInactiveLoggingSession:(id)arg1 ;
+(void)increaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2 ;
+(void)updateExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2 ;
+(void)decreaseRetainCountWithIdentifier:(id)arg1 session:(id)arg2 ;
+(id)currentLoggingExtensions;
+(void)_updateExtensionExpirationDateWithIdentifier:(id)arg1 expirationDate:(id)arg2 ;
+(double)xpcActivityTimeinterval;
+(void)saveCurrentLoggingExtensionsWithDictionary:(id)arg1 ;
+(void)scheduleXPCActivity;
+(id)criteria:(id)arg1 ;
+(void)extensionTrackerCleanup;
+(void)updateRetainCountWithIdentifier:(id)arg1 session:(id)arg2 offsetBy:(int)arg3 ;
+(BOOL)shouldSetupWithIdentifier:(id)arg1 session:(id)arg2 expirationDate:(id)arg3 ;
+(BOOL)shouldTeardownWithIdentifier:(id)arg1 session:(id)arg2 ;
@end

