/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class CKContainer, NSObject, NSString, NSDictionary, NSNumber, NSMutableDictionary, CKSchedulerActivity;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _preferAnonymousRequests;
	BOOL _automaticallyRetryNetworkFailures;
	BOOL _xpcActivityAutomaticallyDefer;
	BOOL _discretionarySchedulingForEntireOperation;
	BOOL _allowsBackgroundNetworking;
	BOOL _isCloudKitSupportOperation;
	BOOL _hasQualityOfService;
	BOOL _hasContainer;
	BOOL _hasAllowsCellularAccess;
	BOOL _hasLongLived;
	BOOL _hasTimeoutIntervalForRequest;
	BOOL _hasTimeoutIntervalForResource;
	BOOL _hasAutomaticallyRetryNetworkFailures;
	BOOL _hasDiscretionaryNetworkBehavior;
	BOOL _hasXPCActivity;
	BOOL _hasXPCActivityAutomaticallyDefer;
	BOOL _hasSchedulerActivity;
	BOOL _hasDiscretionarySchedulingForEntireOperation;
	BOOL _hasPreferAnonymousRequests;
	BOOL _hasAllowsBackgroundNetworking;
	BOOL _hasSourceApplicationBundleIdentifier;
	BOOL _hasSourceApplicationSecondaryIdentifier;
	BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
	BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
	BOOL _hasAdditionalRequestHTTPHeaders;
	BOOL _hasIsCloudKitSupportOperation;
	BOOL _hasCacheDeleteAvailableSpaceClass;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSDictionary* _additionalRequestHTTPHeaders;
	NSNumber* _cacheDeleteAvailableSpaceClass;
	NSMutableDictionary* _unitTestOverrides;
	CKSchedulerActivity* _schedulerActivity;

}

@property (assign,nonatomic) BOOL hasQualityOfService;                                                       //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL hasContainer;                                                              //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellularAccess;                                                   //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL hasLongLived;                                                              //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForRequest;                                              //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForResource;                                             //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;                                      //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionaryNetworkBehavior;                                           //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivity;                                                            //@synthesize hasXPCActivity=_hasXPCActivity - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivityAutomaticallyDefer;                                          //@synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulerActivity;                                                      //@synthesize hasSchedulerActivity=_hasSchedulerActivity - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation;                              //@synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) BOOL hasPreferAnonymousRequests;                                                //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsBackgroundNetworking;                                             //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationBundleIdentifier;                                      //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;                                   //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize hasApplicationBundleIdentifierOverrideForContainerAccess=_hasApplicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize hasApplicationBundleIdentifierOverrideForNetworkAttribution=_hasApplicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalRequestHTTPHeaders;                                           //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasIsCloudKitSupportOperation;                                             //@synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation - In the implementation block
@property (assign,nonatomic) BOOL hasCacheDeleteAvailableSpaceClass;                                         //@synthesize hasCacheDeleteAvailableSpaceClass=_hasCacheDeleteAvailableSpaceClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;                                        //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (assign,nonatomic) BOOL xpcActivityAutomaticallyDefer;                                             //@synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL discretionarySchedulingForEntireOperation;                                 //@synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;                                 //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRetryNetworkFailures;                                         //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                                           //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) CKSchedulerActivity * schedulerActivity;                                          //@synthesize schedulerActivity=_schedulerActivity - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                                //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                 //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;              //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                                     //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitSupportOperation;                                                //@synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation - In the implementation block
@property (nonatomic,copy) NSNumber * cacheDeleteAvailableSpaceClass;                                        //@synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                                              //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                                               //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                                              //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isLongLived;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setHasSourceApplicationSecondaryIdentifier:(BOOL)arg1 ;
-(BOOL)hasDiscretionarySchedulingForEntireOperation;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setSchedulerActivity:(CKSchedulerActivity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowsBackgroundNetworking;
-(BOOL)hasAllowsCellularAccess;
-(NSMutableDictionary *)unitTestOverrides;
-(void)setHasAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHasDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(long long)qualityOfService;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForNetworkAttribution:(BOOL)arg1 ;
-(BOOL)hasDiscretionaryNetworkBehavior;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
-(BOOL)isCloudKitSupportOperation;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setHasIsCloudKitSupportOperation:(BOOL)arg1 ;
-(BOOL)hasContainer;
-(BOOL)discretionarySchedulingForEntireOperation;
-(BOOL)hasAutomaticallyRetryNetworkFailures;
-(BOOL)hasSourceApplicationSecondaryIdentifier;
-(BOOL)hasQualityOfService;
-(BOOL)hasCacheDeleteAvailableSpaceClass;
-(void)setHasAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForResource:(BOOL)arg1 ;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(unsigned long long)discretionaryNetworkBehavior;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(BOOL)hasAdditionalRequestHTTPHeaders;
-(void)setXpcActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForContainerAccess:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(BOOL)hasSchedulerActivity;
-(BOOL)hasPreferAnonymousRequests;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasIsCloudKitSupportOperation;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setHasSourceApplicationBundleIdentifier:(BOOL)arg1 ;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(BOOL)preferAnonymousRequests;
-(BOOL)hasSourceApplicationBundleIdentifier;
-(void)setHasContainer:(BOOL)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasXPCActivity;
-(BOOL)hasXPCActivityAutomaticallyDefer;
-(void)setLongLived:(BOOL)arg1 ;
-(BOOL)automaticallyRetryNetworkFailures;
-(void)setHasCacheDeleteAvailableSpaceClass:(BOOL)arg1 ;
-(BOOL)hasAllowsBackgroundNetworking;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHasDiscretionaryNetworkBehavior:(BOOL)arg1 ;
-(CKSchedulerActivity *)schedulerActivity;
-(void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setHasAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setHasSchedulerActivity:(BOOL)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(double)timeoutIntervalForRequest;
-(void)setHasPreferAnonymousRequests:(BOOL)arg1 ;
-(BOOL)xpcActivityAutomaticallyDefer;
-(void)setCacheDeleteAvailableSpaceClass:(NSNumber *)arg1 ;
-(BOOL)hasTimeoutIntervalForRequest;
-(void)setHasTimeoutIntervalForRequest:(BOOL)arg1 ;
-(BOOL)hasApplicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setHasLongLived:(BOOL)arg1 ;
-(BOOL)hasLongLived;
-(double)timeoutIntervalForResource;
-(BOOL)hasApplicationBundleIdentifierOverrideForContainerAccess;
-(void)setHasXPCActivity:(BOOL)arg1 ;
-(CKContainer *)container;
-(BOOL)hasTimeoutIntervalForResource;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(id)description;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
-(void)setHasXPCActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(BOOL)arg1 ;
@end
