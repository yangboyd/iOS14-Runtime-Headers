/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JetEngine/JetEngine-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@interface JEUnfairLock : NSObject <NSLocking> {

	os_unfair_lock_s _unfairLock;

}
+(void)initialize;
-(void)lock;
-(void)unlock;
-(id)init;
@end
