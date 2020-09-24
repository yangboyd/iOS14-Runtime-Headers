/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RMSService : NSObject {

	int _port;
	NSString* _displayName;
	NSString* _networkName;
	NSString* _hostName;
	long long _serviceType;
	long long _serviceDiscoverySource;
	long long _serviceFlags;
	NSString* _homeSharingGroupKey;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * networkName;                        //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long serviceDiscoverySource;              //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) long long serviceFlags;                        //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (nonatomic,retain) NSString * homeSharingGroupKey;                //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)servicesFromProtobufs:(id)arg1 ;
+(id)protobufsFromServices:(id)arg1 ;
-(int)port;
-(id)protobuf;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setNetworkName:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)data;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(void)setPort:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)networkName;
-(NSString *)hostName;
-(void)setHostName:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(id)description;
-(long long)serviceType;
-(long long)serviceDiscoverySource;
-(long long)serviceFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(long long)arg1 ;
-(void)setServiceFlags:(long long)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
-(BOOL)isLegacyAppleTV;
-(BOOL)isMediaRemoteSupported;
@end
