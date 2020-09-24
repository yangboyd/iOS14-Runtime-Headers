/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@class NSString, NSArray, MTEventHandler;

@interface MTEventHandlerRegistration : MTObject {

	NSString* _registeredName;
	Class _eventHandlerClass;
	NSArray* _eventData;
	MTEventHandler* _eventHandler;

}

@property (nonatomic,retain) NSString * registeredName;                  //@synthesize registeredName=_registeredName - In the implementation block
@property (nonatomic,retain) Class eventHandlerClass;                    //@synthesize eventHandlerClass=_eventHandlerClass - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                        //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) MTEventHandler * eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(MTEventHandler *)eventHandler;
-(NSArray *)eventData;
-(void)setEventHandler:(MTEventHandler *)arg1 ;
-(void)setEventData:(NSArray *)arg1 ;
-(void)setRegisteredName:(NSString *)arg1 ;
-(void)setEventHandlerClass:(Class)arg1 ;
-(Class)eventHandlerClass;
-(NSString *)registeredName;
-(id)initWithMetricsKit:(id)arg1 name:(id)arg2 class:(Class)arg3 eventData:(id)arg4 ;
@end
