/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	long long _PINByteOffset;

}

@property (__weak) TKSmartCardSlot * slot;                        //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                 //@synthesize APDU=_APDU - In the implementation block
@property (assign) long long PINByteOffset;                       //@synthesize PINByteOffset=_PINByteOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(TKSmartCardSlot *)slot;
-(NSData *)APDU;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)PINByteOffset;
-(void)setAPDU:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 PINByteOffset:(long long)arg4 ;
@end
