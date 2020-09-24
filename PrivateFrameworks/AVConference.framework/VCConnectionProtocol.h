/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol VCConnectionProtocol <NSObject>
@property (readonly) BOOL isLocalOnWiFi; 
@property (readonly) BOOL isRemoteOnWiFi; 
@property (readonly) BOOL isLocalOnCellular; 
@property (readonly) BOOL isRemoteOnCellular; 
@property (readonly) BOOL isLocalExpensive; 
@property (readonly) BOOL isRemoteExpensive; 
@property (readonly) BOOL isLocalConstrained; 
@property (readonly) BOOL isRemoteConstrained; 
@property (readonly) BOOL isLocalDelegated; 
@property (readonly) BOOL isRemoteDelegated; 
@property (readonly) BOOL isIPv6; 
@property (assign) int connectionMTU; 
@property (readonly) int connectionId; 
@property (readonly) BOOL isRelay; 
@property (readonly) BOOL isVPN; 
@property (readonly) BOOL serverIsDegraded; 
@property (readonly) NSUUID * connectionUUID; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority; 
@property (readonly) unsigned type; 
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@property (assign) unsigned uplinkBitrateCap; 
@property (assign) unsigned downlinkBitrateCap; 
@required
-(NSUUID *)connectionUUID;
-(int)remoteConnectionType;
-(BOOL)serverIsDegraded;
-(BOOL)isVPN;
-(void)setPriority:(int)arg1;
-(unsigned)type;
-(BOOL)isRelay;
-(BOOL)isIPv6;
-(int)connectionId;
-(int)priority;
-(int)localCellTech;
-(int)remoteCellTech;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(BOOL)isSameAsConnection:(id)arg1;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(long long)compare:(id)arg1 isPrimary:(BOOL)arg2 selectionPolicy:(SCD_Struct_VC90*)arg3;
-(BOOL)isLocalExpensive;
-(BOOL)isRemoteExpensive;
-(BOOL)isLocalConstrained;
-(BOOL)isRemoteConstrained;
-(BOOL)isLocalDelegated;
-(BOOL)isRemoteDelegated;
-(int)connectionMTU;
-(void)setConnectionMTU:(int)arg1;
-(int)localConnectionType;
-(void)setLocalCellTech:(int)arg1;
-(void)setRemoteCellTech:(int)arg1;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(unsigned)uplinkBitrateCap;
-(void)setUplinkBitrateCap:(unsigned)arg1;
-(unsigned)downlinkBitrateCap;
-(void)setDownlinkBitrateCap:(unsigned)arg1;

@end
