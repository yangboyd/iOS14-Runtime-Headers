/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * characteristics; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * languageTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_languageOptionFromMediaRemoteRepresentation:(void*)arg1 ;
+(id)languageOption;
+(id)languageOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)identifier;
-(id)encodedClassName;
-(void)setLanguageTag:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)groupIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)languageTag;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
@end
