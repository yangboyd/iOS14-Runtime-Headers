/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, TRIClient;

@interface MLModelCollection : NSObject {

	NSString* _identifier;
	NSDictionary* _entries;
	NSString* _deploymentID;
	NSString* _namespaceName;
	TRIClient* _trialClient;

}

@property (nonatomic,copy) NSDictionary * entries;                      //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy) NSString * deploymentID;                     //@synthesize deploymentID=_deploymentID - In the implementation block
@property (nonatomic,readonly) NSString * namespaceName;                //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) TRIClient * trialClient;                 //@synthesize trialClient=_trialClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(Class)getTrialDownloadOptionsClass;
+(Class)getTrialClientClass;
+(id)_namespaceNameFromCollectionIdentifier:(id)arg1 ;
+(id)beginAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(Class)getTrialFactorLevelClass;
+(Class)getTrialLevelClass;
+(void)endAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(Class)getTrialFileClass;
+(Class)getTrialFactorClass;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(TRIClient *)trialClient;
-(NSString *)namespaceName;
-(void)setEntries:(NSDictionary *)arg1 ;
-(id)_downloadOptions;
-(BOOL)_downloadWithProgress:(/*^block*/id)arg1 ;
-(void)_registerForUpdates;
-(BOOL)_endAccess;
-(void)_handleTrialUpdateForNamespaceName:(id)arg1 ;
-(void)_setDeploymentID;
-(void)_populateEntries;
-(NSString *)deploymentID;
-(void)setDeploymentID:(NSString *)arg1 ;
-(BOOL)_register;
-(NSDictionary *)entries;
@end

