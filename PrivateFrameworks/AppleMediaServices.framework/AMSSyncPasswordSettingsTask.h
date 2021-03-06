/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol, NSURLSessionDelegateAMSURLProtocolDelegate;
@class ACAccount, AMSProcessInfo, NSString;

@interface AMSSyncPasswordSettingsTask : AMSTask <AMSURLProtocolDelegate, AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	AMSProcessInfo* _clientInfo;
	id<NSURLSessionDelegate><AMSURLProtocolDelegate> _delegate;
	unsigned long long _freeSetting;
	unsigned long long _paidSetting;

}

@property (nonatomic,readonly) ACAccount * account;                                                           //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;                                                        //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) AMSProcessInfo * clientInfo;                                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,__weak,readonly) id<NSURLSessionDelegate><AMSURLProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long freeSetting;                                                //@synthesize freeSetting=_freeSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long paidSetting;                                                //@synthesize paidSetting=_paidSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfileVersion;
+(id)bagSubProfile;
+(id)bagKeySet;
+(unsigned long long)freePasswordSettingFromServerValue:(unsigned long long)arg1 ;
+(id)createBagForSubProfile;
+(id)serverValueForFreePasswordSetting:(unsigned long long)arg1 ;
+(unsigned long long)paidPasswordSettingFromServerValue:(unsigned long long)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)serverValueForPaidPasswordSetting:(unsigned long long)arg1 ;
-(id<AMSBagProtocol>)bag;
-(ACAccount *)account;
-(AMSProcessInfo *)clientInfo;
-(id)performSync;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)delegate;
-(id)initWithAccount:(id)arg1 freeSetting:(unsigned long long)arg2 paidSetting:(unsigned long long)arg3 delegate:(id)arg4 bag:(id)arg5 ;
-(unsigned long long)freeSetting;
-(unsigned long long)paidSetting;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
@end

