/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MBSizeInfo : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _size;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(unsigned long long)state;
@end
