/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSData, IDSMessageContext;

@interface IDSProtobuf : NSObject <NSCoding> {

	NSMutableDictionary* _protoBufParams;
	NSData* _uncompressedData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSData * uncompressedData;                //@synthesize uncompressedData=_uncompressedData - In the implementation block
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) IDSMessageContext * context; 
+(id)keyRepresentationForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(id)pkDescription;
-(id)extendedDescription;
-(id)transportData;
-(id)nfmDescription;
-(id)pbDescription;
-(NSData *)data;
-(void)dealloc;
-(void)setData:(NSData *)arg1 ;
-(void)setContext:(IDSMessageContext *)arg1 ;
-(id)init;
-(unsigned short)type;
-(id)initWithCoder:(id)arg1 ;
-(IDSMessageContext *)context;
-(id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(void)setType:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsResponse:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isResponse;
-(id)description;
-(id)dictionaryRepresentationWithUncompressedData;
-(NSData *)uncompressedData;
-(void)setUncompressedData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
@end
