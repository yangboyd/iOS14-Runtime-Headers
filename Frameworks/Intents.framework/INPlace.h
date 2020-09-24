/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INPlace : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _placeType;
	NSString* _placeSubType;
	NSArray* _placeDescriptors;
	long long _personalPlaceType;

}

@property (nonatomic,copy,readonly) NSString * placeType;                    //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeSubType;                 //@synthesize placeSubType=_placeSubType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * placeDescriptors;              //@synthesize placeDescriptors=_placeDescriptors - In the implementation block
@property (nonatomic,readonly) long long personalPlaceType;                  //@synthesize personalPlaceType=_personalPlaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)placeSubType;
-(long long)personalPlaceType;
-(NSArray *)placeDescriptors;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)placeType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3 personalPlaceType:(long long)arg4 ;
-(NSString *)description;
@end
