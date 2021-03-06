/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface BLItemArtworkImage : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,copy) NSString * imageKind;                  //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) double imageScale; 
-(double)imageScale;
-(NSString *)URLString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageKind:(NSString *)arg1 ;
-(long long)width;
-(CGSize)imageSize;
-(long long)height;
-(id)valueForProperty:(id)arg1 ;
-(NSURL *)URL;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)imageKind;
-(unsigned long long)hash;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(id)description;
@end

