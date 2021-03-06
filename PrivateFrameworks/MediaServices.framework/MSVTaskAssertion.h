/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject, BKSProcessAssertion;

@interface MSVTaskAssertion : NSObject {

	NSString* _uuid;
	NSString* _bundleID;
	NSString* _subsystem;
	int _pid;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	BOOL _acquired;
	BKSProcessAssertion* _processAssertion;
	NSString* _name;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)invalidationHandler;
-(void)invalidate;
-(BOOL)acquire;
-(unsigned)_BSKReasonForMSVReason:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(void)dealloc;
-(id)init;
-(void)_cancelInvalidationTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)invalidateOnDate:(id)arg1 ;
-(unsigned)_BSKFlagsForMSVFlags:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(BOOL)isValid;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(NSString *)name;
-(NSString *)bundleID;
-(int)pid;
-(id)description;
@end

