/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, SPLocationAddress, NSUUID;

@interface SPSafeLocation : NSObject <NSSecureCoding, NSCopying> {

	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	double _altitude;
	double _verticalAccuracy;
	double _speed;
	double _speedAccuracy;
	double _course;
	double _courseAccuracy;
	NSNumber* _floorLevel;
	SPLocationAddress* _address;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) double verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) double speed;                           //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double speedAccuracy;                   //@synthesize speedAccuracy=_speedAccuracy - In the implementation block
@property (assign,nonatomic) double course;                          //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) double courseAccuracy;                  //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (nonatomic,copy) NSNumber * floorLevel;                    //@synthesize floorLevel=_floorLevel - In the implementation block
@property (nonatomic,copy) SPLocationAddress * address;              //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)course;
-(void)setCourse:(double)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)debugDescription;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(double)verticalAccuracy;
-(double)altitude;
-(void)setAltitude:(double)arg1 ;
-(SPLocationAddress *)address;
-(void)setAddress:(SPLocationAddress *)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)horizontalAccuracy;
-(id)initWithCoder:(id)arg1 ;
-(double)speedAccuracy;
-(double)longitude;
-(double)latitude;
-(void)encodeWithCoder:(id)arg1 ;
-(double)speed;
-(void)setCourseAccuracy:(double)arg1 ;
-(void)setSpeedAccuracy:(double)arg1 ;
-(unsigned long long)hash;
-(void)setLatitude:(double)arg1 ;
-(double)courseAccuracy;
-(NSNumber *)floorLevel;
-(void)setFloorLevel:(NSNumber *)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11 identifier:(id)arg12 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAcuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11 ;
@end
