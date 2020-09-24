/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SACallTree.h>

@class SAThread, SADispatchQueue;

@interface SAThreadCallTree : SACallTree {

	SAThread* _thread;
	SADispatchQueue* _dispatchQueue;

}

@property (readonly) SAThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (readonly) SADispatchQueue * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(SADispatchQueue *)dispatchQueue;
-(SAThread *)thread;
@end
