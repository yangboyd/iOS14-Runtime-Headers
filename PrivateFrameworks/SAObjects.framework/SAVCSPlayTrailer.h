/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,copy) NSString * utsId; 
+(id)playTrailerWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)playTrailer;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(NSString *)contentType;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSString *)utsId;
-(SAUIImageResource *)image;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)setUtsId:(NSString *)arg1 ;
@end

