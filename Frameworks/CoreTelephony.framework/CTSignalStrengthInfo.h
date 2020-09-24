/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _bars;
	NSNumber* _displayBars;
	NSNumber* _maxDisplayBars;

}

@property (nonatomic,retain) NSNumber * bars;                        //@synthesize bars=_bars - In the implementation block
@property (nonatomic,retain) NSNumber * displayBars;                 //@synthesize displayBars=_displayBars - In the implementation block
@property (nonatomic,retain) NSNumber * maxDisplayBars;              //@synthesize maxDisplayBars=_maxDisplayBars - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaxDisplayBars:(NSNumber *)arg1 ;
-(NSNumber *)maxDisplayBars;
-(NSNumber *)displayBars;
-(void)setBars:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDisplayBars:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)bars;
-(id)description;
@end
