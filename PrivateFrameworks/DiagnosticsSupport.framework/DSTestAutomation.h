/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DSTestAutomation : NSObject {

	BOOL _testAutomationEnabled;

}

@property (assign,nonatomic) BOOL testAutomationEnabled;              //@synthesize testAutomationEnabled=_testAutomationEnabled - In the implementation block
+(id)sharedInstance;
+(void)postInteractiveTestEvent:(id)arg1 info:(id)arg2 ;
+(void)postConfiguration:(id)arg1 ;
-(id)init;
-(BOOL)testAutomationEnabled;
-(void)setTestAutomationEnabled:(BOOL)arg1 ;
@end
