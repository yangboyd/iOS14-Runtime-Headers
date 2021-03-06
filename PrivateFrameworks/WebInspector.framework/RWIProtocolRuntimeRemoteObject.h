/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolJSONObject, RWIProtocolRuntimeObjectPreview;

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long subtype; 
@property (nonatomic,copy) NSString * className; 
@property (nonatomic,retain) RWIProtocolJSONObject * value; 
@property (nonatomic,copy) NSString * stringRepresentation; 
@property (nonatomic,copy) NSString * objectId; 
@property (assign,nonatomic) int size; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * classPrototype; 
@property (nonatomic,retain) RWIProtocolRuntimeObjectPreview * preview; 
-(void)setSubtype:(long long)arg1 ;
-(NSString *)className;
-(RWIProtocolRuntimeObjectPreview *)preview;
-(long long)subtype;
-(void)setClassName:(NSString *)arg1 ;
-(void)setValue:(RWIProtocolJSONObject *)arg1 ;
-(void)setSize:(int)arg1 ;
-(NSString *)objectId;
-(long long)type;
-(RWIProtocolJSONObject *)value;
-(void)setPreview:(RWIProtocolRuntimeObjectPreview *)arg1 ;
-(void)setType:(long long)arg1 ;
-(int)size;
-(NSString *)stringRepresentation;
-(id)initWithType:(long long)arg1 ;
-(void)setStringRepresentation:(NSString *)arg1 ;
-(void)setObjectId:(NSString *)arg1 ;
-(void)setClassPrototype:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)classPrototype;
@end

